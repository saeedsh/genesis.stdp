#include <stdio.h>
#include "syn_ext.h"
#include "synapse_g@.h"

void STARTUP_synapse() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  argv[0] = "newclass";
  argv[1] = "terminal";
  do_add_class(2, argv);

  /* Definition of object synapse */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "synapse";
  tobject.type = "connection_type";
  tobject.size = sizeof(struct connection_type);
  { extern int SimpleSynapse(); tobject.function = SimpleSynapse; HashFunc("SimpleSynapse", SimpleSynapse, "int"); }
  ObjectAddClass(&tobject,ClassID("connection"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("synapse");
  object->defaults->object = object;
  object->defaults->name = CopyString("synapse");
  object->author = "M.Wilson Caltech 6/88";
  { extern int SimpleSynapse(); AddActionToObject(object, "PROCESS", SimpleSynapse, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'synapse'\n")); HashFunc("SimpleSynapse", SimpleSynapse, "int"); }
  { extern int CHECK_SimpleSynapse(); AddActionToObject(object, "CHECK", CHECK_SimpleSynapse, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'synapse'\n")); HashFunc("CHECK_SimpleSynapse", CHECK_SimpleSynapse, "int"); }
  { extern int SynapseField(); AddActionToObject(object, "SHOW", SynapseField, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'synapse'\n")); HashFunc("SynapseField", SynapseField, "int"); }
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object defsynapse */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "defsynapse";
  tobject.type = "connection_type";
  tobject.size = sizeof(struct connection_type);
  { extern int SimpleSynapse(); tobject.function = SimpleSynapse; HashFunc("SimpleSynapse", SimpleSynapse, "int"); }
  ObjectAddClass(&tobject,ClassID("connection"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("defsynapse");
  object->defaults->object = object;
  object->defaults->name = CopyString("defsynapse");
  object->author = "M.Wilson Caltech 6/88";
  { extern int SimpleSynapse(); AddActionToObject(object, "PROCESS", SimpleSynapse, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'defsynapse'\n")); HashFunc("SimpleSynapse", SimpleSynapse, "int"); }
  { extern int CREATE_SimpleSynapse(); AddActionToObject(object, "CREATE", CREATE_SimpleSynapse, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'defsynapse'\n")); HashFunc("CREATE_SimpleSynapse", CREATE_SimpleSynapse, "int"); }
  { extern int CHECK_SimpleSynapse(); AddActionToObject(object, "CHECK", CHECK_SimpleSynapse, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'defsynapse'\n")); HashFunc("CHECK_SimpleSynapse", CHECK_SimpleSynapse, "int"); }
  { extern int SynapseField(); AddActionToObject(object, "SHOW", SynapseField, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'defsynapse'\n")); HashFunc("SynapseField", SynapseField, "int"); }
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object synapseA */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "synapseA";
  tobject.type = "synapseA_type";
  tobject.size = sizeof(struct synapseA_type);
  { extern int SynapseA(); tobject.function = SynapseA; HashFunc("SynapseA", SynapseA, "int"); }
  ObjectAddClass(&tobject,ClassID("connection"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("synapseA");
  object->defaults->object = object;
  object->defaults->name = CopyString("synapseA");
  object->author = "M.Wilson Caltech 6/88";
  { extern int SynapseA(); AddActionToObject(object, "PROCESS", SynapseA, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'synapseA'\n")); HashFunc("SynapseA", SynapseA, "int"); }
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object synapseB */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "synapseB";
  tobject.type = "synapseB_type";
  tobject.size = sizeof(struct synapseB_type);
  { extern int SynapseB(); tobject.function = SynapseB; HashFunc("SynapseB", SynapseB, "int"); }
  ObjectAddClass(&tobject,ClassID("connection"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("synapseB");
  object->defaults->object = object;
  object->defaults->name = CopyString("synapseB");
  object->author = "M.Wilson Caltech 6/88";
  { extern int SynapseB(); AddActionToObject(object, "PROCESS", SynapseB, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'synapseB'\n")); HashFunc("SynapseB", SynapseB, "int"); }
  { extern int RESET_SynapseB(); AddActionToObject(object, "RESET", RESET_SynapseB, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'synapseB'\n")); HashFunc("RESET_SynapseB", RESET_SynapseB, "int"); }
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */

} /* STARTUP_synapse */
