#include <stdio.h>
#include "hh_ext.h"
#include "hh_g@.h"

void STARTUP_hh() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  argv[0] = "newclass";
  argv[1] = "channel";
  do_add_class(2, argv);

  argv[0] = "newclass";
  argv[1] = "membrane";
  do_add_class(2, argv);

  argv[0] = "newclass";
  argv[1] = "gate";
  do_add_class(2, argv);
  AddAction("CALC_MINF", 100);
  AddAction("CALC_ALPHA", 101);
  AddAction("CALC_BETA", 102);

  /* Definition of object hh_channel */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "hh_channel";
  tobject.type = "hh_channel_type";
  tobject.size = sizeof(struct hh_channel_type);
  { extern int hh_channel(); tobject.function = hh_channel; HashFunc("hh_channel", hh_channel, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("hh_channel");
  object->defaults->object = object;
  object->defaults->name = CopyString("hh_channel");
  object->author = "M.Nelson Caltech 8/88";
  { extern int hh_channel(); AddActionToObject(object, "INIT", hh_channel, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'hh_channel'\n")); HashFunc("hh_channel", hh_channel, "int"); }
  { extern int hh_channel(); AddActionToObject(object, "RESET", hh_channel, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'hh_channel'\n")); HashFunc("hh_channel", hh_channel, "int"); }
  { extern int hh_channel(); AddActionToObject(object, "PROCESS", hh_channel, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'hh_channel'\n")); HashFunc("hh_channel", hh_channel, "int"); }
  { extern int hh_channel(); AddActionToObject(object, "CHECK", hh_channel, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'hh_channel'\n")); HashFunc("hh_channel", hh_channel, "int"); }
  { extern int hh_channel(); AddActionToObject(object, "SAVE2", hh_channel, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'hh_channel'\n")); HashFunc("hh_channel", hh_channel, "int"); }
  { extern int hh_channel(); AddActionToObject(object, "RESTORE2", hh_channel, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'hh_channel'\n")); HashFunc("hh_channel", hh_channel, "int"); }
  { extern int hh_channel_CALC_MINF(); AddActionToObject(object, "CALC_MINF", hh_channel_CALC_MINF, 0) ? 0 : (Error(), printf("adding action 'CALC_MINF' to object 'hh_channel'\n")); HashFunc("hh_channel_CALC_MINF", hh_channel_CALC_MINF, "int"); }
  { extern int hh_channel_CALC_ALPHA(); AddActionToObject(object, "CALC_ALPHA", hh_channel_CALC_ALPHA, 0) ? 0 : (Error(), printf("adding action 'CALC_ALPHA' to object 'hh_channel'\n")); HashFunc("hh_channel_CALC_ALPHA", hh_channel_CALC_ALPHA, "int"); }
  { extern int hh_channel_CALC_BETA(); AddActionToObject(object, "CALC_BETA", hh_channel_CALC_BETA, 0) ? 0 : (Error(), printf("adding action 'CALC_BETA' to object 'hh_channel'\n")); HashFunc("hh_channel_CALC_BETA", hh_channel_CALC_BETA, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", hh_channel_VOLTAGE, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object vdep_gate */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "vdep_gate";
  tobject.type = "vdep_gate_type";
  tobject.size = sizeof(struct vdep_gate_type);
  { extern int VDepGate(); tobject.function = VDepGate; HashFunc("VDepGate", VDepGate, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("gate"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("vdep_gate");
  object->defaults->object = object;
  object->defaults->name = CopyString("vdep_gate");
  object->author = "M.Wilson Caltech 2/89";
  { extern int VDepGate(); AddActionToObject(object, "RESET", VDepGate, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'vdep_gate'\n")); HashFunc("VDepGate", VDepGate, "int"); }
  { extern int VDepGate(); AddActionToObject(object, "PROCESS", VDepGate, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'vdep_gate'\n")); HashFunc("VDepGate", VDepGate, "int"); }
  { extern int VDepGate(); AddActionToObject(object, "SAVE2", VDepGate, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'vdep_gate'\n")); HashFunc("VDepGate", VDepGate, "int"); }
  { extern int VDepGate(); AddActionToObject(object, "RESTORE2", VDepGate, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'vdep_gate'\n")); HashFunc("VDepGate", VDepGate, "int"); }
  { extern int VDepGate_CALC_MINF(); AddActionToObject(object, "CALC_MINF", VDepGate_CALC_MINF, 0) ? 0 : (Error(), printf("adding action 'CALC_MINF' to object 'vdep_gate'\n")); HashFunc("VDepGate_CALC_MINF", VDepGate_CALC_MINF, "int"); }
  { extern int VDepGate_CALC_ALPHA(); AddActionToObject(object, "CALC_ALPHA", VDepGate_CALC_ALPHA, 0) ? 0 : (Error(), printf("adding action 'CALC_ALPHA' to object 'vdep_gate'\n")); HashFunc("VDepGate_CALC_ALPHA", VDepGate_CALC_ALPHA, "int"); }
  { extern int VDepGate_CALC_BETA(); AddActionToObject(object, "CALC_BETA", VDepGate_CALC_BETA, 0) ? 0 : (Error(), printf("adding action 'CALC_BETA' to object 'vdep_gate'\n")); HashFunc("VDepGate_CALC_BETA", VDepGate_CALC_BETA, "int"); }
  slotnames[0] = "voltage";
  MsgListAdd(object, "VOLTAGE", vdep_gate_VOLTAGE, slotnames, 1);
  slotnames[0] = "Erest";
  MsgListAdd(object, "EREST", vdep_gate_EREST, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object vdep_channel */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "vdep_channel";
  tobject.type = "vdep_channel_type";
  tobject.size = sizeof(struct vdep_channel_type);
  { extern int VDepChannel(); tobject.function = VDepChannel; HashFunc("VDepChannel", VDepChannel, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("vdep_channel");
  object->defaults->object = object;
  object->defaults->name = CopyString("vdep_channel");
  object->author = "M.Wilson Caltech 2/89";
  { extern int VDepChannel(); AddActionToObject(object, "INIT", VDepChannel, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'vdep_channel'\n")); HashFunc("VDepChannel", VDepChannel, "int"); }
  { extern int VDepChannel(); AddActionToObject(object, "RESET", VDepChannel, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'vdep_channel'\n")); HashFunc("VDepChannel", VDepChannel, "int"); }
  { extern int VDepChannel(); AddActionToObject(object, "PROCESS", VDepChannel, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'vdep_channel'\n")); HashFunc("VDepChannel", VDepChannel, "int"); }
  { extern int VDepChannel(); AddActionToObject(object, "CHECK", VDepChannel, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'vdep_channel'\n")); HashFunc("VDepChannel", VDepChannel, "int"); }
  { extern int VDepChannel(); AddActionToObject(object, "SAVE2", VDepChannel, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'vdep_channel'\n")); HashFunc("VDepChannel", VDepChannel, "int"); }
  { extern int VDepChannel(); AddActionToObject(object, "RESTORE2", VDepChannel, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'vdep_channel'\n")); HashFunc("VDepChannel", VDepChannel, "int"); }
  slotnames[0] = "voltage";
  MsgListAdd(object, "VOLTAGE", vdep_channel_VOLTAGE, slotnames, 1);
  slotnames[0] = "gate_state";
  slotnames[1] = "power";
  MsgListAdd(object, "MULTGATE", vdep_channel_MULTGATE, slotnames, 2);
  slotnames[0] = "gate_state";
  slotnames[1] = "power";
  MsgListAdd(object, "ADDGATE", vdep_channel_ADDGATE, slotnames, 2);
  slotnames[0] = "gmax";
  MsgListAdd(object, "GMAX", vdep_channel_GMAX, slotnames, 1);
  slotnames[0] = "Ek";
  MsgListAdd(object, "EK", vdep_channel_EK, slotnames, 1);
  object->description = "The activation of the channel corresponds to\nthe voltage across it. Computes channel current Ik.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */

} /* STARTUP_hh */
