#include <stdio.h>
#include "xo_ext.h"
#include "xo_g@.h"

void STARTUP_xo() {
  char*          slotnames[50];
  char*          argv[50];
  { extern void xinit(); xinit(); }

  argv[0] = "newclass";
  argv[1] = "widget";
  do_add_class(2, argv);

  argv[0] = "newclass";
  argv[1] = "gadget";
  do_add_class(2, argv);
  { extern void XgEventLoop();   HashFunc("XgEventLoop", XgEventLoop, "void"); }
  { extern void XgEventStep();   HashFunc("XgEventStep", XgEventStep, "void"); }
  { extern void xinit_defunct(); AddFunc("xinit", xinit_defunct, "void");   HashFunc("xinit_defunct", xinit_defunct, "void"); }
  { extern void xoraise(); AddFunc("xraise", xoraise, "void");   HashFunc("xoraise", xoraise, "void"); }
  { extern void xolower(); AddFunc("xlower", xolower, "void");   HashFunc("xolower", xolower, "void"); }
  { extern void xoshow_on_top(); AddFunc("xshow", xoshow_on_top, "void");   HashFunc("xoshow_on_top", xoshow_on_top, "void"); }
  { extern void xoshow_on_top(); AddFunc("xshowontop", xoshow_on_top, "void");   HashFunc("xoshow_on_top", xoshow_on_top, "void"); }
  { extern void xohide(); AddFunc("xhide", xohide, "void");   HashFunc("xohide", xohide, "void"); }
  { extern void xoshow(); AddFunc("xmap", xoshow, "void");   HashFunc("xoshow", xoshow, "void"); }
  { extern void xocolorscale(); AddFunc("xcolorscale", xocolorscale, "void");   HashFunc("xocolorscale", xocolorscale, "void"); }
  { extern void xoupdate(); AddFunc("xupdate", xoupdate, "void");   HashFunc("xoupdate", xoupdate, "void"); }
  { extern void xops(); AddFunc("xps", xops, "void");   HashFunc("xops", xops, "void"); }
  { extern void xops(); AddFunc("setpostscript", xops, "void");   HashFunc("xops", xops, "void"); }
  { extern void xoflushevents(); AddFunc("xflushevents", xoflushevents, "void");   HashFunc("xoflushevents", xoflushevents, "void"); }
  { extern int xogetstat(); AddFunc("xgetstat", xogetstat, "int");   HashFunc("xogetstat", xogetstat, "int"); }
  { extern void xosimplot(); AddFunc("xsimplot", xosimplot, "void");   HashFunc("xosimplot", xosimplot, "void"); }
  { extern void do_callfunc(); AddFunc("callfunc", do_callfunc, "void");   HashFunc("do_callfunc", do_callfunc, "void"); }

/* Script variables */

} /* STARTUP_xo */
