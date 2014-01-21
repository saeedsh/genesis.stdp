#include <stdio.h>
#include "dev_ext.h"
#include "devices_g@.h"

void STARTUP_devices() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  argv[0] = "newclass";
  argv[1] = "device";
  do_add_class(2, argv);

  argv[0] = "newclass";
  argv[1] = "channel";
  do_add_class(2, argv);

  /* Definition of object diffamp */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "diffamp";
  tobject.type = "diffamp_type";
  tobject.size = sizeof(struct diffamp_type);
  { extern int DifferenceAmp(); tobject.function = DifferenceAmp; HashFunc("DifferenceAmp", DifferenceAmp, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("diffamp");
  object->defaults->object = object;
  object->defaults->name = CopyString("diffamp");
  object->author = "M.Wilson Caltech 2/89";
  { extern int DifferenceAmp(); AddActionToObject(object, "RESET", DifferenceAmp, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'diffamp'\n")); HashFunc("DifferenceAmp", DifferenceAmp, "int"); }
  { extern int DifferenceAmp(); AddActionToObject(object, "PROCESS", DifferenceAmp, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'diffamp'\n")); HashFunc("DifferenceAmp", DifferenceAmp, "int"); }
  slotnames[0] = "plus_input";
  MsgListAdd(object, "PLUS", diffamp_PLUS, slotnames, 1);
  slotnames[0] = "minus_input";
  MsgListAdd(object, "MINUS", diffamp_MINUS, slotnames, 1);
  slotnames[0] = "gain";
  MsgListAdd(object, "GAIN", diffamp_GAIN, slotnames, 1);
  object->description = "difference amplifier takes two inputs and\nproduces an output proportional to their difference\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object efield */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "efield";
  tobject.type = "efield_type";
  tobject.size = sizeof(struct efield_type);
  { extern int ExtracellularRecordingElectrode(); tobject.function = ExtracellularRecordingElectrode; HashFunc("ExtracellularRecordingElectrode", ExtracellularRecordingElectrode, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("efield");
  object->defaults->object = object;
  object->defaults->name = CopyString("efield");
  object->author = "M.Wilson Caltech 2/89";
  { extern int ExtracellularRecordingElectrode(); AddActionToObject(object, "RESET", ExtracellularRecordingElectrode, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'efield'\n")); HashFunc("ExtracellularRecordingElectrode", ExtracellularRecordingElectrode, "int"); }
  { extern int ExtracellularRecordingElectrode(); AddActionToObject(object, "PROCESS", ExtracellularRecordingElectrode, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'efield'\n")); HashFunc("ExtracellularRecordingElectrode", ExtracellularRecordingElectrode, "int"); }
  { extern int ExtracellularRecordingElectrode(); AddActionToObject(object, "RECALC", ExtracellularRecordingElectrode, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'efield'\n")); HashFunc("ExtracellularRecordingElectrode", ExtracellularRecordingElectrode, "int"); }
  slotnames[0] = "current";
  slotnames[1] = "0.0";
  MsgListAdd(object, "CURRENT", efield_CURRENT, slotnames, 2);
  object->description = "sums current sources according to their\ninverse distance from the recording electrode\nto produce an estimate of the field potential\nat that point.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object expthresh */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "expthresh";
  tobject.type = "expthresh_type";
  tobject.size = sizeof(struct expthresh_type);
  { extern int ExpThresh(); tobject.function = ExpThresh; HashFunc("ExpThresh", ExpThresh, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("expthresh");
  object->defaults->object = object;
  object->defaults->name = CopyString("expthresh");
  object->author = "M.Wilson Caltech 8/89";
  { extern int ExpThresh(); AddActionToObject(object, "RESET", ExpThresh, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'expthresh'\n")); HashFunc("ExpThresh", ExpThresh, "int"); }
  { extern int ExpThresh(); AddActionToObject(object, "PROCESS", ExpThresh, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'expthresh'\n")); HashFunc("ExpThresh", ExpThresh, "int"); }
  { extern int ExpThresh(); AddActionToObject(object, "CHECK", ExpThresh, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'expthresh'\n")); HashFunc("ExpThresh", ExpThresh, "int"); }
  slotnames[0] = "name";
  MsgListAdd(object, "BUFFER", expthresh_BUFFER, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object freq_monitor */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "freq_monitor";
  tobject.type = "new_freq_mon_type";
  tobject.size = sizeof(struct new_freq_mon_type);
  { extern int NewFrequencyMonitor(); tobject.function = NewFrequencyMonitor; HashFunc("NewFrequencyMonitor", NewFrequencyMonitor, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("freq_monitor");
  object->defaults->object = object;
  object->defaults->name = CopyString("freq_monitor");
  object->author = "M.Wilson Caltech 2/89; mods by D.Jaeger";
  { extern int NewFrequencyMonitor(); AddActionToObject(object, "RESET", NewFrequencyMonitor, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'freq_monitor'\n")); HashFunc("NewFrequencyMonitor", NewFrequencyMonitor, "int"); }
  { extern int NewFrequencyMonitor(); AddActionToObject(object, "PROCESS", NewFrequencyMonitor, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'freq_monitor'\n")); HashFunc("NewFrequencyMonitor", NewFrequencyMonitor, "int"); }
  { extern int BufferCreate(); AddActionToObject(object, "CREATE", BufferCreate, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'freq_monitor'\n")); HashFunc("BufferCreate", BufferCreate, "int"); }
  slotnames[0] = "input";
  MsgListAdd(object, "NONZERO_TRIG", freq_monitor_NONZERO_TRIG, slotnames, 1);
  slotnames[0] = "input";
  MsgListAdd(object, "ZERO_TRIG", freq_monitor_ZERO_TRIG, slotnames, 1);
  slotnames[0] = "input";
  MsgListAdd(object, "POSITIVE_TRIG", freq_monitor_POSITIVE_TRIG, slotnames, 1);
  slotnames[0] = "input";
  MsgListAdd(object, "NEGATIVE_TRIG", freq_monitor_NEGATIVE_TRIG, slotnames, 1);
  slotnames[0] = "time";
  MsgListAdd(object, "WINDOW", freq_monitor_WINDOW, slotnames, 1);
  slotnames[0] = "input";
  MsgListAdd(object, "CONTINUOUS", freq_monitor_CONTINUOUS, slotnames, 1);
  object->description = "Calculates running event (spike) frequency\nover a given time window using exponential weighting.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object nernst */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "nernst";
  tobject.type = "nernst_type";
  tobject.size = sizeof(struct nernst_type);
  { extern int Nernst(); tobject.function = Nernst; HashFunc("Nernst", Nernst, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("nernst");
  object->defaults->object = object;
  object->defaults->name = CopyString("nernst");
  object->author = "M.Wilson Caltech 3/89";
  { extern int Nernst(); AddActionToObject(object, "PROCESS", Nernst, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'nernst'\n")); HashFunc("Nernst", Nernst, "int"); }
  { extern int Nernst(); AddActionToObject(object, "RESET", Nernst, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'nernst'\n")); HashFunc("Nernst", Nernst, "int"); }
  { extern int Nernst(); AddActionToObject(object, "CHECK", Nernst, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'nernst'\n")); HashFunc("Nernst", Nernst, "int"); }
  slotnames[0] = "Cin";
  MsgListAdd(object, "CIN", nernst_CIN, slotnames, 1);
  slotnames[0] = "Cout";
  MsgListAdd(object, "COUT", nernst_COUT, slotnames, 1);
  slotnames[0] = "T";
  MsgListAdd(object, "TEMP", nernst_TEMP, slotnames, 1);
  object->description = "Calculates the Nernst potential for the given\nionic concentrations and temperature.\nE = scale*(RT/zF)*ln(Cout/Cin)\nA scale factor of 1 gives E in volts.\nA scale factor of 1e3 gives E in millivolts.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object funcgen */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "funcgen";
  tobject.type = "funcgen_type";
  tobject.size = sizeof(struct funcgen_type);
  { extern int FunctionGenerator(); tobject.function = FunctionGenerator; HashFunc("FunctionGenerator", FunctionGenerator, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("funcgen");
  object->defaults->object = object;
  object->defaults->name = CopyString("funcgen");
  object->author = "M.Wilson Caltech 4/89";
  { extern int FunctionGenerator(); AddActionToObject(object, "RESET", FunctionGenerator, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'funcgen'\n")); HashFunc("FunctionGenerator", FunctionGenerator, "int"); }
  { extern int FunctionGenerator(); AddActionToObject(object, "PROCESS", FunctionGenerator, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'funcgen'\n")); HashFunc("FunctionGenerator", FunctionGenerator, "int"); }
  { extern int FunctionGenerator(); AddActionToObject(object, "CHECK", FunctionGenerator, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'funcgen'\n")); HashFunc("FunctionGenerator", FunctionGenerator, "int"); }
  slotnames[0] = "amplitude";
  MsgListAdd(object, "AMPLITUDE", funcgen_AMPLITUDE, slotnames, 1);
  slotnames[0] = "dc_offset";
  MsgListAdd(object, "DC_OFFSET", funcgen_DC_OFFSET, slotnames, 1);
  slotnames[0] = "phase";
  MsgListAdd(object, "PHASE", funcgen_PHASE, slotnames, 1);
  slotnames[0] = "frequency";
  MsgListAdd(object, "FREQUENCY", funcgen_FREQUENCY, slotnames, 1);
  object->description = "function generator produces periodic output\nwith a waveform set by the mode field\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object peristim */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "peristim";
  tobject.type = "new_peristim_type";
  tobject.size = sizeof(struct new_peristim_type);
  { extern int NewPeriStimulusDistribution(); tobject.function = NewPeriStimulusDistribution; HashFunc("NewPeriStimulusDistribution", NewPeriStimulusDistribution, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("peristim");
  object->defaults->object = object;
  object->defaults->name = CopyString("peristim");
  object->author = "E. De Schutter Caltech 8/91; embellished, D. Jaeger 8/92";
  { extern int NewPeriStimulusDistribution(); AddActionToObject(object, "RESET", NewPeriStimulusDistribution, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'peristim'\n")); HashFunc("NewPeriStimulusDistribution", NewPeriStimulusDistribution, "int"); }
  { extern int NewPeriStimulusDistribution(); AddActionToObject(object, "PROCESS", NewPeriStimulusDistribution, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'peristim'\n")); HashFunc("NewPeriStimulusDistribution", NewPeriStimulusDistribution, "int"); }
  { extern int NewPeriStimulusDistribution(); AddActionToObject(object, "CHECK", NewPeriStimulusDistribution, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'peristim'\n")); HashFunc("NewPeriStimulusDistribution", NewPeriStimulusDistribution, "int"); }
  slotnames[0] = "voltage";
  MsgListAdd(object, "INVM", peristim_INVM, slotnames, 1);
  slotnames[0] = "trigger";
  MsgListAdd(object, "TRIGGER", peristim_TRIGGER, slotnames, 1);
  slotnames[0] = "time";
  MsgListAdd(object, "READTIME", peristim_READTIME, slotnames, 1);
  slotnames[0] = "inspike";
  MsgListAdd(object, "INSPIKE", peristim_INSPIKE, slotnames, 1);
  object->description = "generates on line a peristimulus spike histogram, will loop\nthrough all the bins and then start again in the first\nbin if the simulation continues (FREE_RUN) or unless \ntriggered. INVM is used to pass a membrane potential \n which gets thresholded to detect spikes. INSPIKE is \n used to pass one-timestep spikes (amp > threshold), \nINSPIKE-mode is used to generate under script\ncontrol (clock is NOT used).\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object interspike */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "interspike";
  tobject.type = "interspike_type";
  tobject.size = sizeof(struct interspike_type);
  { extern int InterSpikeInterval(); tobject.function = InterSpikeInterval; HashFunc("InterSpikeInterval", InterSpikeInterval, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("interspike");
  object->defaults->object = object;
  object->defaults->name = CopyString("interspike");
  object->author = "E. De Schutter Caltech 8/91";
  { extern int InterSpikeInterval(); AddActionToObject(object, "RESET", InterSpikeInterval, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'interspike'\n")); HashFunc("InterSpikeInterval", InterSpikeInterval, "int"); }
  { extern int InterSpikeInterval(); AddActionToObject(object, "PROCESS", InterSpikeInterval, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'interspike'\n")); HashFunc("InterSpikeInterval", InterSpikeInterval, "int"); }
  { extern int InterSpikeInterval(); AddActionToObject(object, "CHECK", InterSpikeInterval, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'interspike'\n")); HashFunc("InterSpikeInterval", InterSpikeInterval, "int"); }
  slotnames[0] = "voltage";
  MsgListAdd(object, "INPUT", interspike_INPUT, slotnames, 1);
  slotnames[0] = "trigger";
  MsgListAdd(object, "TRIGGER", interspike_TRIGGER, slotnames, 1);
  slotnames[0] = "time";
  MsgListAdd(object, "SPIKE", interspike_SPIKE, slotnames, 1);
  object->description = "generates on line a interspike interval histogram. The\nlast bin contains also all values larger than the bin-range.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);
  AddAction("TABCREATE", 200);
  AddAction("TABFILL", 201);
  AddAction("TUPDATE", 250);
  AddAction("OPEN", 300);
  AddAction("CLOSE", 301);
  AddAction("FLUSH", 302);

  /* Definition of object crosscorr */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "crosscorr";
  tobject.type = "doxc_type";
  tobject.size = sizeof(struct doxc_type);
  { extern int Doxc(); tobject.function = Doxc; HashFunc("Doxc", Doxc, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("crosscorr");
  object->defaults->object = object;
  object->defaults->name = CopyString("crosscorr");
  object->author = "D. Jaeger 8/92";
  { extern int Doxc(); AddActionToObject(object, "RESET", Doxc, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'crosscorr'\n")); HashFunc("Doxc", Doxc, "int"); }
  { extern int Doxc(); AddActionToObject(object, "PROCESS", Doxc, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'crosscorr'\n")); HashFunc("Doxc", Doxc, "int"); }
  slotnames[0] = "input_2";
  MsgListAdd(object, "YSPIKE", crosscorr_YSPIKE, slotnames, 1);
  slotnames[0] = "input_1";
  MsgListAdd(object, "XSPIKE", crosscorr_XSPIKE, slotnames, 1);
  object->description = "Cross correlation object.\nData are stored in xcarray. Center bin contains zero time delay.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object autocorr */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "autocorr";
  tobject.type = "doac_type";
  tobject.size = sizeof(struct doac_type);
  { extern int Doac(); tobject.function = Doac; HashFunc("Doac", Doac, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("autocorr");
  object->defaults->object = object;
  object->defaults->name = CopyString("autocorr");
  object->author = "D. Jaeger 8/92";
  { extern int Doac(); AddActionToObject(object, "RESET", Doac, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'autocorr'\n")); HashFunc("Doac", Doac, "int"); }
  { extern int Doac(); AddActionToObject(object, "PROCESS", Doac, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'autocorr'\n")); HashFunc("Doac", Doac, "int"); }
  slotnames[0] = "input";
  MsgListAdd(object, "SPIKE", autocorr_SPIKE, slotnames, 1);
  object->description = "Auto-correlation object. Data are stored in *acarray\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object timetable */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "timetable";
  tobject.type = "timetable_type";
  tobject.size = sizeof(struct timetable_type);
  { extern int TimetableFunc(); tobject.function = TimetableFunc; HashFunc("TimetableFunc", TimetableFunc, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("timetable");
  object->defaults->object = object;
  object->defaults->name = CopyString("timetable");
  object->author = "Dieter Jaeger Caltech March 95, revised 7/97";
  { extern int TimetableFunc(); AddActionToObject(object, "RESET", TimetableFunc, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'timetable'\n")); HashFunc("TimetableFunc", TimetableFunc, "int"); }
  { extern int TimetableFunc(); AddActionToObject(object, "SET", TimetableFunc, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'timetable'\n")); HashFunc("TimetableFunc", TimetableFunc, "int"); }
  { extern int TimetableFunc(); AddActionToObject(object, "PROCESS", TimetableFunc, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'timetable'\n")); HashFunc("TimetableFunc", TimetableFunc, "int"); }
  { extern int TimetableFunc(); AddActionToObject(object, "TUPDATE", TimetableFunc, 0) ? 0 : (Error(), printf("adding action 'TUPDATE' to object 'timetable'\n")); HashFunc("TimetableFunc", TimetableFunc, "int"); }
  { extern int TimetableFunc(); AddActionToObject(object, "TABFILL", TimetableFunc, 0) ? 0 : (Error(), printf("adding action 'TABFILL' to object 'timetable'\n")); HashFunc("TimetableFunc", TimetableFunc, "int"); }
  { extern int TimetableFunc(); AddActionToObject(object, "TABCREATE", TimetableFunc, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'timetable'\n")); HashFunc("TimetableFunc", TimetableFunc, "int"); }
  object->description = "A table of ascending simulation time values.\nThe activation field is set to act_val when\nSimulationTime() matches the next table entry.\nMainly useful for controlled sequences of\nsynaptic activation.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object event_tofile */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "event_tofile";
  tobject.type = "event_tofile_type";
  tobject.size = sizeof(struct event_tofile_type);
  { extern int Event_tofile(); tobject.function = Event_tofile; HashFunc("Event_tofile", Event_tofile, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("event_tofile");
  object->defaults->object = object;
  object->defaults->name = CopyString("event_tofile");
  object->author = "Dieter Jaeger Caltech March 95";
  { extern int Event_tofile(); AddActionToObject(object, "RESET", Event_tofile, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'event_tofile'\n")); HashFunc("Event_tofile", Event_tofile, "int"); }
  { extern int Event_tofile(); AddActionToObject(object, "PROCESS", Event_tofile, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'event_tofile'\n")); HashFunc("Event_tofile", Event_tofile, "int"); }
  { extern int Event_tofile(); AddActionToObject(object, "OPEN", Event_tofile, 0) ? 0 : (Error(), printf("adding action 'OPEN' to object 'event_tofile'\n")); HashFunc("Event_tofile", Event_tofile, "int"); }
  { extern int Event_tofile(); AddActionToObject(object, "CLOSE", Event_tofile, 0) ? 0 : (Error(), printf("adding action 'CLOSE' to object 'event_tofile'\n")); HashFunc("Event_tofile", Event_tofile, "int"); }
  { extern int Event_tofile(); AddActionToObject(object, "FLUSH", Event_tofile, 0) ? 0 : (Error(), printf("adding action 'FLUSH' to object 'event_tofile'\n")); HashFunc("Event_tofile", Event_tofile, "int"); }
  slotnames[0] = "input";
  MsgListAdd(object, "INPUT", event_tofile_INPUT, slotnames, 1);
  object->description = "Takes input messages and writes current simulation\ntime to asci file if input > threshold.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object calculator */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "calculator";
  tobject.type = "calc_type";
  tobject.size = sizeof(struct calc_type);
  { extern int CalculatorFunc(); tobject.function = CalculatorFunc; HashFunc("CalculatorFunc", CalculatorFunc, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("calculator");
  object->defaults->object = object;
  object->defaults->name = CopyString("calculator");
  object->author = "E. De Schutter BBF-UIA 6/98";
  { extern int CalculatorFunc(); AddActionToObject(object, "CREATE", CalculatorFunc, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'calculator'\n")); HashFunc("CalculatorFunc", CalculatorFunc, "int"); }
  { extern int CalculatorFunc(); AddActionToObject(object, "DELETE", CalculatorFunc, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'calculator'\n")); HashFunc("CalculatorFunc", CalculatorFunc, "int"); }
  { extern int CalculatorFunc(); AddActionToObject(object, "PROCESS", CalculatorFunc, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'calculator'\n")); HashFunc("CalculatorFunc", CalculatorFunc, "int"); }
  { extern int CalculatorFunc(); AddActionToObject(object, "RESET", CalculatorFunc, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'calculator'\n")); HashFunc("CalculatorFunc", CalculatorFunc, "int"); }
  slotnames[0] = "number";
  MsgListAdd(object, "SUM", calculator_SUM, slotnames, 1);
  slotnames[0] = "number";
  MsgListAdd(object, "SUBTRACT", calculator_SUBTRACT, slotnames, 1);
  slotnames[0] = "number";
  MsgListAdd(object, "MULTIPLY", calculator_MULTIPLY, slotnames, 1);
  slotnames[0] = "number";
  MsgListAdd(object, "DIVIDE", calculator_DIVIDE, slotnames, 1);
  SetFieldListProt(object, "output", FIELD_READONLY);
  SetFieldListDesc(object, "output", "computed value");
  SetFieldListProt(object, "resetclock", FIELD_READWRITE);
  SetFieldListDesc(object, "resetclock", "clock # used to reset output value");
  SetFieldListProt(object, "output_init", FIELD_READWRITE);
  SetFieldListDesc(object, "output_init", "value used to initalize output at reset");
  SetFieldListProt(object, "next_init", FIELD_HIDDEN);
  SetFieldListDesc(object, "next_init", "");
  object->description = "calculates using messages.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */
  CreateScriptInt("UseOldPeristim");
  SetScriptInt("UseOldPeristim", 0);
  CreateScriptInt("UseOldFrequencyMonitor");
  SetScriptInt("UseOldFrequencyMonitor", 0);

} /* STARTUP_devices */
