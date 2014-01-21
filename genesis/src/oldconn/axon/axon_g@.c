#include <stdio.h>
#include "axon_ext.h"
#include "axon_g@.h"

void STARTUP_axon() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  /* Definition of object axon */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "axon";
  tobject.type = "delay_projection_type";
  tobject.size = sizeof(struct delay_projection_type);
  { extern int DelayConnection(); tobject.function = DelayConnection; HashFunc("DelayConnection", DelayConnection, "int"); }
  ObjectAddClass(&tobject,ClassID("projection"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("axon");
  object->defaults->object = object;
  object->defaults->name = CopyString("axon");
  object->author = "M.Wilson Caltech 6/88";
  { extern int DelayConnection(); AddActionToObject(object, "CREATE", DelayConnection, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'axon'\n")); HashFunc("DelayConnection", DelayConnection, "int"); }
  { extern int DelayConnection(); AddActionToObject(object, "COPY", DelayConnection, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'axon'\n")); HashFunc("DelayConnection", DelayConnection, "int"); }
  { extern int DelayConnection(); AddActionToObject(object, "PROCESS", DelayConnection, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'axon'\n")); HashFunc("DelayConnection", DelayConnection, "int"); }
  { extern int DelayConnection(); AddActionToObject(object, "RESET", DelayConnection, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'axon'\n")); HashFunc("DelayConnection", DelayConnection, "int"); }
  { extern int DelayConnection(); AddActionToObject(object, "RECALC", DelayConnection, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'axon'\n")); HashFunc("DelayConnection", DelayConnection, "int"); }
  { extern int DelayConnection(); AddActionToObject(object, "CHECK", DelayConnection, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'axon'\n")); HashFunc("DelayConnection", DelayConnection, "int"); }
  slotnames[0] = "name";
  MsgListAdd(object, "BUFFER", axon_BUFFER, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object axonlink */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "axonlink";
  tobject.type = "projection_type";
  tobject.size = sizeof(struct projection_type);
  { extern int NoDelayConnection(); tobject.function = NoDelayConnection; HashFunc("NoDelayConnection", NoDelayConnection, "int"); }
  ObjectAddClass(&tobject,ClassID("projection"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("axonlink");
  object->defaults->object = object;
  object->defaults->name = CopyString("axonlink");
  object->author = "M.Wilson Caltech 6/88";
  { extern int NoDelayConnection(); AddActionToObject(object, "CREATE", NoDelayConnection, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'axonlink'\n")); HashFunc("NoDelayConnection", NoDelayConnection, "int"); }
  { extern int NoDelayConnection(); AddActionToObject(object, "COPY", NoDelayConnection, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'axonlink'\n")); HashFunc("NoDelayConnection", NoDelayConnection, "int"); }
  { extern int NoDelayConnection(); AddActionToObject(object, "PROCESS", NoDelayConnection, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'axonlink'\n")); HashFunc("NoDelayConnection", NoDelayConnection, "int"); }
  { extern int NoDelayConnection(); AddActionToObject(object, "RESET", NoDelayConnection, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'axonlink'\n")); HashFunc("NoDelayConnection", NoDelayConnection, "int"); }
  { extern int NoDelayConnection(); AddActionToObject(object, "RECALC", NoDelayConnection, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'axonlink'\n")); HashFunc("NoDelayConnection", NoDelayConnection, "int"); }
  { extern int NoDelayConnection(); AddActionToObject(object, "CHECK", NoDelayConnection, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'axonlink'\n")); HashFunc("NoDelayConnection", NoDelayConnection, "int"); }
  slotnames[0] = "name";
  MsgListAdd(object, "BUFFER", axonlink_BUFFER, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */

} /* STARTUP_axon */
