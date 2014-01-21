#include <stdio.h>
#include "user_ext.h"
#include "user_g@.h"

void STARTUP_user() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  /* Definition of object pulsegen */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "pulsegen";
  tobject.type = "pulsegen_type";
  tobject.size = sizeof(struct pulsegen_type);
  { extern int PulseGen(); tobject.function = PulseGen; HashFunc("PulseGen", PulseGen, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("pulsegen");
  object->defaults->object = object;
  object->defaults->name = CopyString("pulsegen");
  object->author = "M.Nelson Caltech 4/89";
  { extern int PulseGen(); AddActionToObject(object, "RESET", PulseGen, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'pulsegen'\n")); HashFunc("PulseGen", PulseGen, "int"); }
  { extern int PulseGen(); AddActionToObject(object, "PROCESS", PulseGen, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'pulsegen'\n")); HashFunc("PulseGen", PulseGen, "int"); }
  slotnames[0] = "gate/trig";
  MsgListAdd(object, "INPUT", pulsegen_INPUT, slotnames, 1);
  slotnames[0] = "pulse#";
  slotnames[1] = "level";
  MsgListAdd(object, "LEVEL", pulsegen_LEVEL, slotnames, 2);
  slotnames[0] = "pulse#";
  slotnames[1] = "width";
  MsgListAdd(object, "WIDTH", pulsegen_WIDTH, slotnames, 2);
  slotnames[0] = "pulse#";
  slotnames[1] = "delay";
  MsgListAdd(object, "DELAY", pulsegen_DELAY, slotnames, 2);
  object->description = "General purpose pulse generator\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object PID */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "PID";
  tobject.type = "PID_type";
  tobject.size = sizeof(struct PID_type);
  { extern int PIDcontroller(); tobject.function = PIDcontroller; HashFunc("PIDcontroller", PIDcontroller, "int"); }
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("PID");
  object->defaults->object = object;
  object->defaults->name = CopyString("PID");
  object->author = "M.Nelson Caltech 4/89";
  { extern int PIDcontroller(); AddActionToObject(object, "INIT", PIDcontroller, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'PID'\n")); HashFunc("PIDcontroller", PIDcontroller, "int"); }
  { extern int PIDcontroller(); AddActionToObject(object, "RESET", PIDcontroller, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'PID'\n")); HashFunc("PIDcontroller", PIDcontroller, "int"); }
  { extern int PIDcontroller(); AddActionToObject(object, "PROCESS", PIDcontroller, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'PID'\n")); HashFunc("PIDcontroller", PIDcontroller, "int"); }
  slotnames[0] = "command";
  MsgListAdd(object, "CMD", PID_CMD, slotnames, 1);
  slotnames[0] = "sense";
  MsgListAdd(object, "SNS", PID_SNS, slotnames, 1);
  slotnames[0] = "gain";
  MsgListAdd(object, "GAIN", PID_GAIN, slotnames, 1);
  object->description = "PID (proportional, integral, derivative) feedback controller\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */

} /* STARTUP_user */
