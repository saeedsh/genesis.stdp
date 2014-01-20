// genesis

/**********************************************************************
**
**	DO NOT EDIT THIS FILE IN THE neurokit DIRECTORY!
**
**	Make a copy of this file in every directory that contains .p
**	files and edit the copies, in order to customize neurokit for
**	different simulations. When you run neurokit from other
**	directories, the simulator will look for the local version of
**	userprefs.g, and if it cannot find it there will look for the
**	default in the neurokit directory. This version of userprefs is
**	set up to run the Coarse Asymmetric Mitral cell demo.
**	
**	There are three aspects to customisation :
**	
**    	1	Include the appropriate script files from the /neuron/prototype
**  		directory and from wherever you have defined new prototype
**		elements.
**
**    	2	Invoke the functions that make the prototypes you want for
**		your simulation.
**
**	3	Put your preferences for the user_variables defined in
** 		defaults.g in the copies of this file.
**
**********************************************************************/

echo Using default user preferences!

/**********************************************************************
**
**	1	Including script files for prototype functions
**
**********************************************************************/

/* file for standard compartments */
include compartments 

/* file for Hodgkin-Huxley Squid Na and K channels */
include hhchan 

/* file for Upi's mitral cell channels */
include mitchan 

/* file for Upi's mitral cell synaptic channels */
include mitsynC2 // for now use channelC2 version
// later convert Neurokit to use synchan version
// include mitsyn 

/************************************************************************
**  2	Invoking functions to make prototypes in the /library element
************************************************************************/

/*   To ensure that all subsequent elements are made in the library    */
	pushe /library


	/* Make the standard types of compartments  */

	make_cylind_compartment		/* makes "compartment" */
	make_sphere_compartment		/* makes "compartment_sphere" */
	make_cylind_symcompartment	/* makes "symcompartment" */
	make_sphere_symcompartment	/* makes "symcompartment_sphere" */

	/* These are some standard channels used in .p files */
	make_Na_squid_hh		/* makes "Na_squid_hh" */
	make_K_squid_hh			/* makes "K_squid_hh" */
	make_Na_mit_hh			/* makes "Na_mit_hh" */
	make_K_mit_hh			/* makes "K_mit_hh" */

	/* These are some synaptic channels for the mitral cell */
	make_glu_mit_upi		/* makes "glu_mit_upi" */
	make_GABA_mit_upi		/* makes "GABA_mit_upi" */

	/* returning to the root element */
	pope

/*************************************************************** *******
**
**	3	Setting preferences for user-variables.
**
**********************************************************************/

/* See defaults.g for default values of these. Put your preferred
   values for these in your copy of userprefs in the directory from
   which you are running your simulations. */

user_syntype1 = "glu_mit_upi"
user_syntype2 = "GABA_mit_upi"
user_help = "README"