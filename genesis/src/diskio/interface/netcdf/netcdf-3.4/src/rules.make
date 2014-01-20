# $Id: rules.make,v 1.1.1.1 2005/06/14 04:38:29 svitak Exp $

# The purpose of this file is to contain common make(1) rules.
# It should be processed by every execution of the that utility.

.SUFFIXES:
.SUFFIXES:	.a .o .i .f .c .cc .F .y .l .m4


################################################################################
# Compilation (including preprocessing):

.c.o:
	$(COMPILE.c) $<

.c.i:
	$(CPP) $(CPPFLAGS) $< >$@

.cc.o:
	$(COMPILE.cxx) $<

# Not all FORTRAN compilers support C-preprocessing of *.F files; ergo, a 
# relatively complicated rule ensues.
.F.o:
	@case "$(COMPILE.F)" in	\
	    '')	\
		set -x;	\
		$(FPP) $(FPPFLAGS) $*.F | grep -v '^#' >$*.f || 	\
		    (rm $*.f ; exit 1);	\
		$(COMPILE.f) $*.f || (rm $*.f; exit 1);	\
		rm $*.f;	\
		;;	\
	    *)	\
		set -x;	\
		$(COMPILE.F) $<;	\
		;;	\
	esac

.f.o:
	$(COMPILE.f) $<

.F.f:
	$(FPP) $(FPPFLAGS) $*.F | grep -v '^#' >$*.f || (rm $*.f; exit 1)

.m4.c:
	$(M4) $(M4FLAGS) $< >$@

.m4.F:
	$(M4) $(M4FLAGS) $< >$@


################################################################################
# Libraries:

lib:		$(LIBRARY)

$(LIBRARY):	$(LIB_OBJS) FORCE
	$(AR) $(ARFLAGS) $@ $(LIB_OBJS)
	$(RANLIB) $@

#-------------------------------------------------------------------------------
# Shared Libraries:
#
# Here only as a place holder and notebook.  Don't try to use this stuff
# unless you really, really know what you're doing!  (And even then we
# guarantee nothing!)
#
shared_library:
	@case `uname -sr` in \
	HP-UX*) \
	    $(MAKE) hpux_shared_library;; \
	IRIX*) \
	    $(MAKE) irix_shared_library;; \
	Linux*) \
	    $(MAKE) linux_shared_library;; \
	OSF1*) \
	    $(MAKE) osf1_shared_library;; \
	'SunOS 4'*) \
	    $(MAKE) sunos4_shared_library;; \
	'SunOS 5'*) \
	    $(MAKE) sunos5_shared_library;; \
	*) \
	    echo 1>&2 "Don't know how to make a shared library" \
		"on this system"; \
	    exit 1;; \
	esac

hpux_shared_library:
	nm libnetcdf.a | grep extern | grep entry | \
	    awk '-F|' '{print $$1}' | sed 's/^/-u /' >symbols.log
	ld -o $(LIBRARY:.a=.sl) -b -c symbols.log $(LIBRARY)
	rm symbols.log
irix_shared_library:
	ld -o $(LIBRARY:.a=.so) -shared -no_archive \
	    -all $(LIBRARY) -none -lc -lC $(LIBS)
linux_shared_library:
	ld -o $(LIBRARY:.a=.so) -shared --whole-archive $(LIBRARY)
osf1_shared_library:
	ld -o $(LIBRARY:.a=.so) -shared -all $(LIBRARY)
sunos4_shared_library:
	undefopts=`/bin/nm $(LIBRARY) | awk '$$2~/^T$$/{print $$3}' | \
		   sed 's/^/-u /'` && \
	    ld -o $(LIBRARY:.a=.so) $$undefopts $(LIBRARY)
sunos5_shared_library:
	undefopts=`/usr/ccs/bin/nm $(LIBRARY) | grep GLOB | grep FUNC | \
		   awk '-F|' '{print $$8}' | sed 's/^/-u /'` && \
	    ld -o $(LIBRARY:.a=.so) -G $$undefopts $(LIBRARY)


################################################################################
# Linking:


################################################################################
# Installation:

$(INCDIR)/$(HEADER):	$(INCDIR) $(HEADER)
	cp $(HEADER) $@
$(INCDIR)/$(HEADER1):	$(INCDIR) $(HEADER1)
	cp $(HEADER1) $@
$(INCDIR)/$(HEADER2):	$(INCDIR) $(HEADER2)
	cp $(HEADER2) $@

$(LIBDIR)/$(LIBRARY):	$(LIBDIR) $(LIBRARY)
	cp $(LIBRARY) $@

$(BINDIR)/$(PROGRAM):	$(BINDIR) $(PROGRAM)
	cp $(PROGRAM) $@

$(BINDIR) \
$(INCDIR) \
$(LIBDIR) \
$(MANDIR) :
	-test -d $@ || mkdir $@

$(MANDIR)/man1 \
$(MANDIR)/man3 \
$(MANDIR)/man3f :		$(MANDIR)
	-test -d $@ || mkdir $@

$(MANDIR)/man1/$(MANUAL):	$(MANDIR)/man1 $(MANUAL)
	cp $(MANUAL) $@
$(MANDIR)/man3/$(MANUAL):	$(MANDIR)/man3 $(MANUAL)
	cp $(MANUAL) $@
$(MANDIR)/man3f/$(MANUAL):	$(MANDIR)/man3 $(MANDIR)/man3/$(MANUAL) \
				$(MANDIR)/man3f
	rm -f $@
	ln -s $(MANDIR)/man3/$(MANUAL) $@

whatis:			$(MANDIR)/$(WHATIS)
$(MANDIR)/$(WHATIS):	$(MANDIR)
	$(MAKEWHATIS_CMD)

################################################################################
# Cleanup:

clean:		FORCE
	rm -f *.o *.a *.so *.sl *.i *.Z core $(GARBAGE)

distclean:	FORCE
	rm -f *.o *.a *.so *.sl *.i *.Z core $(GARBAGE) \
	    MANIFEST *.log $(DIST_GARBAGE)
	

################################################################################
# Dependencies:

# This target should only need to be made at the UPC.
# NOTES:
#   *  The target file might be a symbolic link.
#   *  The name of the target doesn't match the name of the created file to
#      prevent constant updating of the included file `depend' by make(1).
#
deps:		FORCE
	$(CC_MAKEDEPEND) $(CPPFLAGS) *.c | grep -v '/usr/include' >>depend
	sort -u -o depend depend


################################################################################
# Distribution:

# The following rule echoes the contents of $(PACKING_LIST) in the
# current directory and in all subdirectories.  All pathnames are made
# relative to the current directory.
#
MANIFEST.echo:	FORCE
	@echo $(PACKING_LIST) | fmt -1
	@if [ -n "$(SUBDIRS)" ]; then \
	    subdirs="$(SUBDIRS)"; \
	    for subdir in $$subdirs; do \
		(cd $$subdir && \
		echo 1>&2 Creating $@ in `pwd` && \
		$(MAKE) MANIFEST.echo | sed "s|^|$$subdir/|") || exit 1; \
	    done; \
	else \
	   :; \
	fi

# The following rule ensures that all files in $(PACKING_LIST) exist in
# the current directory and in all subdirectories.
#
ensure_manifest:	$(PACKING_LIST) FORCE
	@if [ -n "$(SUBDIRS)" ]; then \
	    subdirs="$(SUBDIRS)"; \
	    for subdir in $$subdirs; do \
		(cd $$subdir && \
		echo 1>&2 Creating $@ in `pwd` && \
		$(MAKE) ensure_manifest) || exit 1; \
	    done; \
	else \
	   :; \
	fi


################################################################################
# Misc:

FORCE:
