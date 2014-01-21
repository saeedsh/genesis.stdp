#include <stdio.h>
#include "buf_ext.h"
#include "buffer_g@.h"

void STARTUP_buffer() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];
  { extern void do_get_input(); AddFunc("getinput", do_get_input, "void");   HashFunc("do_get_input", do_get_input, "void"); }
  { extern void do_clear_buffer(); AddFunc("clearbuffer", do_clear_buffer, "void");   HashFunc("do_clear_buffer", do_clear_buffer, "void"); }

  /* Definition of object graded */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "graded";
  tobject.type = "graded_type";
  tobject.size = sizeof(struct graded_type);
  { extern int GradedEvent(); tobject.function = GradedEvent; HashFunc("GradedEvent", GradedEvent, "int"); }
  ObjectAddClass(&tobject,ClassID("buffer"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("graded");
  object->defaults->object = object;
  object->defaults->name = CopyString("graded");
  object->author = "M.Wilson Caltech 6/88";
  { extern int GradedEvent(); AddActionToObject(object, "INIT", GradedEvent, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'graded'\n")); HashFunc("GradedEvent", GradedEvent, "int"); }
  { extern int GradedEvent(); AddActionToObject(object, "PROCESS", GradedEvent, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'graded'\n")); HashFunc("GradedEvent", GradedEvent, "int"); }
  { extern int GradedEvent(); AddActionToObject(object, "RESET", GradedEvent, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'graded'\n")); HashFunc("GradedEvent", GradedEvent, "int"); }
  { extern int GradedEvent(); AddActionToObject(object, "CHECK", GradedEvent, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'graded'\n")); HashFunc("GradedEvent", GradedEvent, "int"); }
  { extern int BufferCopy(); AddActionToObject(object, "COPY", BufferCopy, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'graded'\n")); HashFunc("BufferCopy", BufferCopy, "int"); }
  { extern int BufferCreate(); AddActionToObject(object, "CREATE", BufferCreate, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'graded'\n")); HashFunc("BufferCreate", BufferCreate, "int"); }
  slotnames[0] = "input";
  MsgListAdd(object, "INPUT", graded_INPUT, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object linear */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "linear";
  tobject.type = "linear_type";
  tobject.size = sizeof(struct linear_type);
  { extern int LinearEvent(); tobject.function = LinearEvent; HashFunc("LinearEvent", LinearEvent, "int"); }
  ObjectAddClass(&tobject,ClassID("buffer"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("linear");
  object->defaults->object = object;
  object->defaults->name = CopyString("linear");
  object->author = "M.Wilson Caltech 6/88";
  { extern int LinearEvent(); AddActionToObject(object, "PROCESS", LinearEvent, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'linear'\n")); HashFunc("LinearEvent", LinearEvent, "int"); }
  { extern int LinearEvent(); AddActionToObject(object, "RESET", LinearEvent, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'linear'\n")); HashFunc("LinearEvent", LinearEvent, "int"); }
  { extern int LinearEvent(); AddActionToObject(object, "CHECK", LinearEvent, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'linear'\n")); HashFunc("LinearEvent", LinearEvent, "int"); }
  { extern int BufferCopy(); AddActionToObject(object, "COPY", BufferCopy, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'linear'\n")); HashFunc("BufferCopy", BufferCopy, "int"); }
  { extern int BufferCreate(); AddActionToObject(object, "CREATE", BufferCreate, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'linear'\n")); HashFunc("BufferCreate", BufferCreate, "int"); }
  slotnames[0] = "input";
  MsgListAdd(object, "INPUT", linear_INPUT, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object periodic */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "periodic";
  tobject.type = "periodic_type";
  tobject.size = sizeof(struct periodic_type);
  { extern int PeriodicEvent(); tobject.function = PeriodicEvent; HashFunc("PeriodicEvent", PeriodicEvent, "int"); }
  ObjectAddClass(&tobject,ClassID("buffer"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("periodic");
  object->defaults->object = object;
  object->defaults->name = CopyString("periodic");
  object->author = "M.Wilson Caltech 6/88";
  { extern int PeriodicEvent(); AddActionToObject(object, "PROCESS", PeriodicEvent, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'periodic'\n")); HashFunc("PeriodicEvent", PeriodicEvent, "int"); }
  { extern int PeriodicEvent(); AddActionToObject(object, "RESET", PeriodicEvent, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'periodic'\n")); HashFunc("PeriodicEvent", PeriodicEvent, "int"); }
  { extern int BufferCopy(); AddActionToObject(object, "COPY", BufferCopy, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'periodic'\n")); HashFunc("BufferCopy", BufferCopy, "int"); }
  { extern int BufferCreate(); AddActionToObject(object, "CREATE", BufferCreate, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'periodic'\n")); HashFunc("BufferCreate", BufferCreate, "int"); }
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object playback */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "playback";
  tobject.type = "playback_type";
  tobject.size = sizeof(struct playback_type);
  { extern int PlaybackBuffer(); tobject.function = PlaybackBuffer; HashFunc("PlaybackBuffer", PlaybackBuffer, "int"); }
  ObjectAddClass(&tobject,ClassID("buffer"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("playback");
  object->defaults->object = object;
  object->defaults->name = CopyString("playback");
  object->author = "M.Wilson Caltech 6/88";
  { extern int PlaybackBuffer(); AddActionToObject(object, "PROCESS", PlaybackBuffer, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'playback'\n")); HashFunc("PlaybackBuffer", PlaybackBuffer, "int"); }
  { extern int PlaybackBuffer(); AddActionToObject(object, "RESET", PlaybackBuffer, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'playback'\n")); HashFunc("PlaybackBuffer", PlaybackBuffer, "int"); }
  { extern int BufferCopy(); AddActionToObject(object, "COPY", BufferCopy, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'playback'\n")); HashFunc("BufferCopy", BufferCopy, "int"); }
  { extern int BufferCreate(); AddActionToObject(object, "CREATE", BufferCreate, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'playback'\n")); HashFunc("BufferCreate", BufferCreate, "int"); }
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object random */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "random";
  tobject.type = "random_type";
  tobject.size = sizeof(struct random_type);
  { extern int RandomEvent(); tobject.function = RandomEvent; HashFunc("RandomEvent", RandomEvent, "int"); }
  ObjectAddClass(&tobject,ClassID("buffer"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("random");
  object->defaults->object = object;
  object->defaults->name = CopyString("random");
  object->author = "M.Wilson Caltech 6/88";
  { extern int RandomEvent(); AddActionToObject(object, "INIT", RandomEvent, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'random'\n")); HashFunc("RandomEvent", RandomEvent, "int"); }
  { extern int RandomEvent(); AddActionToObject(object, "PROCESS", RandomEvent, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'random'\n")); HashFunc("RandomEvent", RandomEvent, "int"); }
  { extern int RandomEvent(); AddActionToObject(object, "RESET", RandomEvent, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'random'\n")); HashFunc("RandomEvent", RandomEvent, "int"); }
  { extern int BufferCopy(); AddActionToObject(object, "COPY", BufferCopy, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'random'\n")); HashFunc("BufferCopy", BufferCopy, "int"); }
  { extern int BufferCreate(); AddActionToObject(object, "CREATE", BufferCreate, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'random'\n")); HashFunc("BufferCreate", BufferCreate, "int"); }
  slotnames[0] = "rate";
  MsgListAdd(object, "RATE", random_RATE, slotnames, 1);
  slotnames[0] = "min";
  slotnames[1] = "max";
  MsgListAdd(object, "MINMAX", random_MINMAX, slotnames, 2);
  object->description = "Generates a time series of events at a rate\ngiven by the rate parameter. The probability\nof an event for a single time step is given\nby rate*dt where dt is the clock rate of the\nelement. When an event has been generated, the\namplitude of the event is a random variable\nuniformly distributed between min_amp and max_amp.\nThe state field has the value of the event amplitude\nif an event has been generated. If an event is not\ngenerated then the value of the state field\ndepends on the reset field. If reset is non-zero\nthen the state is takes on the value given in\nreset_value. Otherwise the state will behave like a\nlatch containing the amplitude of the previous event.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object sigmoid */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "sigmoid";
  tobject.type = "sigmoid_type";
  tobject.size = sizeof(struct sigmoid_type);
  { extern int SigmoidEvent(); tobject.function = SigmoidEvent; HashFunc("SigmoidEvent", SigmoidEvent, "int"); }
  ObjectAddClass(&tobject,ClassID("buffer"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("sigmoid");
  object->defaults->object = object;
  object->defaults->name = CopyString("sigmoid");
  object->author = "M.Wilson Caltech 6/88";
  { extern int SigmoidEvent(); AddActionToObject(object, "PROCESS", SigmoidEvent, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'sigmoid'\n")); HashFunc("SigmoidEvent", SigmoidEvent, "int"); }
  { extern int SigmoidEvent(); AddActionToObject(object, "RESET", SigmoidEvent, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'sigmoid'\n")); HashFunc("SigmoidEvent", SigmoidEvent, "int"); }
  { extern int BufferCopy(); AddActionToObject(object, "COPY", BufferCopy, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'sigmoid'\n")); HashFunc("BufferCopy", BufferCopy, "int"); }
  { extern int BufferCreate(); AddActionToObject(object, "CREATE", BufferCreate, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'sigmoid'\n")); HashFunc("BufferCreate", BufferCreate, "int"); }
  slotnames[0] = "input";
  MsgListAdd(object, "INPUT", sigmoid_INPUT, slotnames, 1);
  slotnames[0] = "threshold";
  MsgListAdd(object, "THRESH", sigmoid_THRESH, slotnames, 1);
  slotnames[0] = "gain";
  MsgListAdd(object, "GAIN", sigmoid_GAIN, slotnames, 1);
  slotnames[0] = "amplitude";
  MsgListAdd(object, "AMP", sigmoid_AMP, slotnames, 1);
  object->description = "computes the sigmoidal tranformation of the input\nand places the result in 'state'\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object spike */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "spike";
  tobject.type = "spike_type";
  tobject.size = sizeof(struct spike_type);
  { extern int SpikeEvent(); tobject.function = SpikeEvent; HashFunc("SpikeEvent", SpikeEvent, "int"); }
  ObjectAddClass(&tobject,ClassID("buffer"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("spike");
  object->defaults->object = object;
  object->defaults->name = CopyString("spike");
  object->author = "M.Wilson Caltech 6/88";
  { extern int SpikeEvent(); AddActionToObject(object, "PROCESS", SpikeEvent, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'spike'\n")); HashFunc("SpikeEvent", SpikeEvent, "int"); }
  { extern int SpikeEvent(); AddActionToObject(object, "RESET", SpikeEvent, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'spike'\n")); HashFunc("SpikeEvent", SpikeEvent, "int"); }
  { extern int SpikeEvent(); AddActionToObject(object, "CHECK", SpikeEvent, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'spike'\n")); HashFunc("SpikeEvent", SpikeEvent, "int"); }
  { extern int BufferCopy(); AddActionToObject(object, "COPY", BufferCopy, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'spike'\n")); HashFunc("BufferCopy", BufferCopy, "int"); }
  { extern int BufferCreate(); AddActionToObject(object, "CREATE", BufferCreate, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'spike'\n")); HashFunc("BufferCreate", BufferCreate, "int"); }
  slotnames[0] = "input";
  MsgListAdd(object, "INPUT", spike_INPUT, slotnames, 1);
  slotnames[0] = "threshold";
  MsgListAdd(object, "THRESH", spike_THRESH, slotnames, 1);
  object->description = "Performs threshold spike discrimination.\nGenerates an impulse each time an input crosses the\nspike threshold at a maximal rate set by abs_refract.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object passive_buffer */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "passive_buffer";
  tobject.type = "passive_type";
  tobject.size = sizeof(struct passive_type);
  { extern int StateEvent(); tobject.function = StateEvent; HashFunc("StateEvent", StateEvent, "int"); }
  ObjectAddClass(&tobject,ClassID("buffer"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("passive_buffer");
  object->defaults->object = object;
  object->defaults->name = CopyString("passive_buffer");
  object->author = "B. Graham JCSMR,ANU 5/91";
  { extern int StateEvent(); AddActionToObject(object, "RESET", StateEvent, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'passive_buffer'\n")); HashFunc("StateEvent", StateEvent, "int"); }
  { extern int BufferCopy(); AddActionToObject(object, "COPY", BufferCopy, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'passive_buffer'\n")); HashFunc("BufferCopy", BufferCopy, "int"); }
  { extern int BufferCreate(); AddActionToObject(object, "CREATE", BufferCreate, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'passive_buffer'\n")); HashFunc("BufferCreate", BufferCreate, "int"); }
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */

} /* STARTUP_buffer */
