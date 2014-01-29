#include <stdio.h>
#include "newconn_ext.h"
#include "newconn_g@.h"

void STARTUP_newconn() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  argv[0] = "newclass";
  argv[1] = "synchannel";
  do_add_class(2, argv);

  argv[0] = "newclass";
  argv[1] = "spiking";
  do_add_class(2, argv);
  AddAction("RESETBUFFER", 1001);

  /* Definition of object synchan */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "synchan";
  tobject.type = "Synchan_type";
  tobject.size = sizeof(struct Synchan_type);
  { extern int Synchan(); tobject.function = Synchan; HashFunc("Synchan", Synchan, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("synchannel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("synchan");
  object->defaults->object = object;
  object->defaults->name = CopyString("synchan");
  object->author = "Mike Vanier 11/94";
  { extern int Synchan(); AddActionToObject(object, "CREATE", Synchan, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "INIT", Synchan, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "PROCESS", Synchan, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "HPROCESS", Synchan, 0) ? 0 : (Error(), printf("adding action 'HPROCESS' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "RESET", Synchan, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "CHECK", Synchan, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "RECALC", Synchan, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "SAVE2", Synchan, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "RESTORE2", Synchan, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "EVENT", Synchan, 0) ? 0 : (Error(), printf("adding action 'EVENT' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "ADDMSGIN", Synchan, 0) ? 0 : (Error(), printf("adding action 'ADDMSGIN' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "DELETEMSGIN", Synchan, 0) ? 0 : (Error(), printf("adding action 'DELETEMSGIN' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "MSGINDELETED", Synchan, 0) ? 0 : (Error(), printf("adding action 'MSGINDELETED' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "RESETBUFFER", Synchan, 0) ? 0 : (Error(), printf("adding action 'RESETBUFFER' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "DELETE", Synchan, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "COPY", Synchan, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "SET", Synchan, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "SHOW", Synchan, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'synchan'\n")); HashFunc("Synchan", Synchan, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", synchan_VOLTAGE, slotnames, 1);
  slotnames[0] = "activation";
  MsgListAdd(object, "ACTIVATION", synchan_ACTIVATION, slotnames, 1);
  slotnames[0] = "probability";
  slotnames[1] = "amplitude";
  MsgListAdd(object, "RAND_ACTIVATION", synchan_RAND_ACTIVATION, slotnames, 2);
  slotnames[0] = "modulation";
  MsgListAdd(object, "MOD", synchan_MOD, slotnames, 1);
  MsgListAdd(object, "SPIKE", synchan_SPIKE, slotnames, 0);
  SetFieldListProt(object, "activation", FIELD_READONLY);
  SetFieldListDesc(object, "activation", "driving force for channel conductance");
  SetFieldListProt(object, "Ik", FIELD_READWRITE);
  SetFieldListDesc(object, "Ik", "channel current");
  SetFieldListProt(object, "Gk", FIELD_READWRITE);
  SetFieldListDesc(object, "Gk", "conductance of channel");
  SetFieldListProt(object, "Ek", FIELD_READWRITE);
  SetFieldListDesc(object, "Ek", "reversal potential of channel");
  SetFieldListProt(object, "X", FIELD_READWRITE);
  SetFieldListDesc(object, "X", "internal variable for implementing synaptic conductance");
  SetFieldListProt(object, "Y", FIELD_READWRITE);
  SetFieldListDesc(object, "Y", "internal variable for implementing synaptic conductance");
  SetFieldListProt(object, "xconst1", FIELD_HIDDEN);
  SetFieldListDesc(object, "xconst1", "internal variable for synaptic conductances");
  SetFieldListProt(object, "yconst1", FIELD_HIDDEN);
  SetFieldListDesc(object, "yconst1", "internal variable for synaptic conductances");
  SetFieldListProt(object, "xconst2", FIELD_HIDDEN);
  SetFieldListDesc(object, "xconst2", "internal variable for synaptic conductances");
  SetFieldListProt(object, "yconst2", FIELD_HIDDEN);
  SetFieldListDesc(object, "yconst2", "internal variable for synaptic conductances");
  SetFieldListProt(object, "norm", FIELD_HIDDEN);
  SetFieldListDesc(object, "norm", "normalization factor for psp amplitude");
  SetFieldListProt(object, "tau1", FIELD_READWRITE);
  SetFieldListDesc(object, "tau1", "first time constant of channel activation");
  SetFieldListProt(object, "tau2", FIELD_READWRITE);
  SetFieldListDesc(object, "tau2", "second time constant of channel activation");
  SetFieldListProt(object, "gmax", FIELD_READWRITE);
  SetFieldListDesc(object, "gmax", "peak conductance");
  SetFieldListProt(object, "frequency", FIELD_READWRITE);
  SetFieldListDesc(object, "frequency", "random activation frequency");
DirectSetElement(object->defaults, "frequency", "0.0");
  SetFieldListProt(object, "nsynapses", FIELD_READONLY);
  SetFieldListDesc(object, "nsynapses", "Number of incoming spike messages");
  SetFieldListProt(object, "synapse_size", FIELD_HIDDEN);
  SetFieldListDesc(object, "synapse_size", "size of synapse in bytes");
  SetFieldListProt(object, "event_buffer_size", FIELD_READONLY);
  SetFieldListDesc(object, "event_buffer_size", "size of event buffer");
DirectSetElement(object->defaults, "event_buffer_size", "0");
  SetFieldListProt(object, "pending_events", FIELD_READONLY);
  SetFieldListDesc(object, "pending_events", "number of pending spike events in buffer");
DirectSetElement(object->defaults, "pending_events", "0");
  SetFieldListProt(object, "FreeSynapticEvents", FIELD_HIDDEN);
  SetFieldListDesc(object, "FreeSynapticEvents", "free list of synaptic event nodes");
  SetFieldListProt(object, "PendingSynapticEvents", FIELD_HIDDEN);
  SetFieldListDesc(object, "PendingSynapticEvents", "list of pending synaptic events");
  SetFieldListProt(object, "nodes_per_synapse", FIELD_READWRITE);
  SetFieldListDesc(object, "nodes_per_synapse", "number of event nodes to allocate per synapse");
DirectSetElement(object->defaults, "nodes_per_synapse", "1.0");
  SetFieldListProt(object, "list_alloced", FIELD_HIDDEN);
  SetFieldListDesc(object, "list_alloced", "flag for whether the freelist has been allocated");
DirectSetElement(object->defaults, "list_alloced", "0");
  SetFieldListProt(object, "allocednodes", FIELD_HIDDEN);
  SetFieldListDesc(object, "allocednodes", "number of nodes that are the head of a malloced block");
DirectSetElement(object->defaults, "allocednodes", "0");
  SetFieldListProt(object, "synapse", FIELD_READWRITE);
  SetFieldListDesc(object, "synapse", "synapse buffer");
  object->description = "Synaptically activated channel.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object synchan2 */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "synchan2";
  tobject.type = "Synchan_type";
  tobject.size = sizeof(struct Synchan_type);
  { extern int Synchan(); tobject.function = Synchan; HashFunc("Synchan", Synchan, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("synchannel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("synchan2");
  object->defaults->object = object;
  object->defaults->name = CopyString("synchan2");
  object->author = "Mike Vanier 11/94";
  { extern int Synchan(); AddActionToObject(object, "CREATE", Synchan, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "INIT", Synchan, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "PROCESS", Synchan, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "HPROCESS", Synchan, 0) ? 0 : (Error(), printf("adding action 'HPROCESS' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "RESET", Synchan, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "CHECK", Synchan, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "RECALC", Synchan, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "SAVE2", Synchan, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "RESTORE2", Synchan, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "EVENT", Synchan, 0) ? 0 : (Error(), printf("adding action 'EVENT' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "ADDMSGIN", Synchan, 0) ? 0 : (Error(), printf("adding action 'ADDMSGIN' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "DELETEMSGIN", Synchan, 0) ? 0 : (Error(), printf("adding action 'DELETEMSGIN' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "MSGINDELETED", Synchan, 0) ? 0 : (Error(), printf("adding action 'MSGINDELETED' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "RESETBUFFER", Synchan, 0) ? 0 : (Error(), printf("adding action 'RESETBUFFER' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "DELETE", Synchan, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "COPY", Synchan, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "SET", Synchan, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  { extern int Synchan(); AddActionToObject(object, "SHOW", Synchan, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'synchan2'\n")); HashFunc("Synchan", Synchan, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", synchan2_VOLTAGE, slotnames, 1);
  slotnames[0] = "activation";
  MsgListAdd(object, "ACTIVATION", synchan2_ACTIVATION, slotnames, 1);
  slotnames[0] = "probability";
  slotnames[1] = "amplitude";
  MsgListAdd(object, "RAND_ACTIVATION", synchan2_RAND_ACTIVATION, slotnames, 2);
  slotnames[0] = "modulation";
  MsgListAdd(object, "MOD", synchan2_MOD, slotnames, 1);
  MsgListAdd(object, "SPIKE", synchan2_SPIKE, slotnames, 0);
  SetFieldListProt(object, "activation", FIELD_READONLY);
  SetFieldListDesc(object, "activation", "driving force for channel conductance");
  SetFieldListProt(object, "Ik", FIELD_READONLY);
  SetFieldListDesc(object, "Ik", "channel current");
  SetFieldListProt(object, "Gk", FIELD_READONLY);
  SetFieldListDesc(object, "Gk", "conductance of channel");
  SetFieldListProt(object, "Ek", FIELD_READWRITE);
  SetFieldListDesc(object, "Ek", "reversal potential of channel");
  SetFieldListProt(object, "X", FIELD_HIDDEN);
  SetFieldListDesc(object, "X", "internal variable for implementing synaptic conductance");
  SetFieldListProt(object, "Y", FIELD_HIDDEN);
  SetFieldListDesc(object, "Y", "internal variable for implementing synaptic conductance");
  SetFieldListProt(object, "xconst1", FIELD_HIDDEN);
  SetFieldListDesc(object, "xconst1", "internal variable for synaptic conductances");
  SetFieldListProt(object, "yconst1", FIELD_HIDDEN);
  SetFieldListDesc(object, "yconst1", "internal variable for synaptic conductances");
  SetFieldListProt(object, "xconst2", FIELD_HIDDEN);
  SetFieldListDesc(object, "xconst2", "internal variable for synaptic conductances");
  SetFieldListProt(object, "yconst2", FIELD_HIDDEN);
  SetFieldListDesc(object, "yconst2", "internal variable for synaptic conductances");
  SetFieldListProt(object, "norm", FIELD_HIDDEN);
  SetFieldListDesc(object, "norm", "normalization factor for psp amplitude");
  SetFieldListProt(object, "tau1", FIELD_READWRITE);
  SetFieldListDesc(object, "tau1", "first time constant of channel activation");
  SetFieldListProt(object, "tau2", FIELD_READWRITE);
  SetFieldListDesc(object, "tau2", "second time constant of channel activation");
  SetFieldListProt(object, "gmax", FIELD_READWRITE);
  SetFieldListDesc(object, "gmax", "peak conductance");
  SetFieldListProt(object, "frequency", FIELD_READWRITE);
  SetFieldListDesc(object, "frequency", "random activation frequency");
DirectSetElement(object->defaults, "frequency", "0.0");
  SetFieldListProt(object, "nsynapses", FIELD_READONLY);
  SetFieldListDesc(object, "nsynapses", "Number of incoming spike messages");
  SetFieldListProt(object, "synapse_size", FIELD_HIDDEN);
  SetFieldListDesc(object, "synapse_size", "size of synapse in bytes");
  SetFieldListProt(object, "event_buffer_size", FIELD_READONLY);
  SetFieldListDesc(object, "event_buffer_size", "size of event buffer");
DirectSetElement(object->defaults, "event_buffer_size", "0");
  SetFieldListProt(object, "pending_events", FIELD_READONLY);
  SetFieldListDesc(object, "pending_events", "number of pending spike events in buffer");
DirectSetElement(object->defaults, "pending_events", "0");
  SetFieldListProt(object, "FreeSynapticEvents", FIELD_HIDDEN);
  SetFieldListDesc(object, "FreeSynapticEvents", "free list of synaptic event nodes");
  SetFieldListProt(object, "PendingSynapticEvents", FIELD_HIDDEN);
  SetFieldListDesc(object, "PendingSynapticEvents", "list of pending synaptic events");
  SetFieldListProt(object, "nodes_per_synapse", FIELD_READWRITE);
  SetFieldListDesc(object, "nodes_per_synapse", "number of event nodes to allocate per synapse");
DirectSetElement(object->defaults, "nodes_per_synapse", "1.0");
  SetFieldListProt(object, "list_alloced", FIELD_HIDDEN);
  SetFieldListDesc(object, "list_alloced", "flag for whether the freelist has been allocated");
DirectSetElement(object->defaults, "list_alloced", "0");
  SetFieldListProt(object, "allocednodes", FIELD_HIDDEN);
  SetFieldListDesc(object, "allocednodes", "number of nodes that are the head of a malloced block");
DirectSetElement(object->defaults, "allocednodes", "0");
  SetFieldListProt(object, "synapse", FIELD_READWRITE);
  SetFieldListDesc(object, "synapse", "synapse buffer");
  object->description = "Synaptically activated channel.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object hebbsynchan */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "hebbsynchan";
  tobject.type = "HebbSynchan_type";
  tobject.size = sizeof(struct HebbSynchan_type);
  { extern int HebbSynchan(); tobject.function = HebbSynchan; HashFunc("HebbSynchan", HebbSynchan, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("synchannel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("hebbsynchan");
  object->defaults->object = object;
  object->defaults->name = CopyString("hebbsynchan");
  object->author = "Mike Vanier 4/96 Caltech";
  { extern int HebbSynchan(); AddActionToObject(object, "CREATE", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "INIT", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "PROCESS", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "RESET", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "RECALC", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "CHECK", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "SAVE2", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "RESTORE2", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "EVENT", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'EVENT' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "ADDMSGIN", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'ADDMSGIN' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "DELETEMSGIN", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'DELETEMSGIN' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "MSGINDELETED", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'MSGINDELETED' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "RESETBUFFER", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'RESETBUFFER' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "DELETE", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "COPY", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "SET", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  { extern int HebbSynchan(); AddActionToObject(object, "SHOW", HebbSynchan, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'hebbsynchan'\n")); HashFunc("HebbSynchan", HebbSynchan, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", hebbsynchan_VOLTAGE, slotnames, 1);
  slotnames[0] = "activation";
  MsgListAdd(object, "ACTIVATION", hebbsynchan_ACTIVATION, slotnames, 1);
  slotnames[0] = "probability";
  slotnames[1] = "amplitude";
  MsgListAdd(object, "RAND_ACTIVATION", hebbsynchan_RAND_ACTIVATION, slotnames, 2);
  slotnames[0] = "modulation";
  MsgListAdd(object, "MOD", hebbsynchan_MOD, slotnames, 1);
  slotnames[0] = "modulation";
  MsgListAdd(object, "WEIGHT_CHANGE_MOD", hebbsynchan_WEIGHT_CHANGE_MOD, slotnames, 1);
  MsgListAdd(object, "SPIKE", hebbsynchan_SPIKE, slotnames, 0);
  SetFieldListProt(object, "activation", FIELD_READONLY);
  SetFieldListDesc(object, "activation", "driving force for channel conductance");
  SetFieldListProt(object, "Ik", FIELD_READONLY);
  SetFieldListDesc(object, "Ik", "channel current");
  SetFieldListProt(object, "Gk", FIELD_READONLY);
  SetFieldListDesc(object, "Gk", "conductance of channel");
  SetFieldListProt(object, "Ek", FIELD_READWRITE);
  SetFieldListDesc(object, "Ek", "reversal potential of channel");
  SetFieldListProt(object, "X", FIELD_HIDDEN);
  SetFieldListDesc(object, "X", "internal variable for synaptic conductances");
  SetFieldListProt(object, "Y", FIELD_HIDDEN);
  SetFieldListDesc(object, "Y", "internal variable for synaptic conductances");
  SetFieldListProt(object, "xconst1", FIELD_HIDDEN);
  SetFieldListDesc(object, "xconst1", "internal constant for synaptic conductances");
  SetFieldListProt(object, "xconst2", FIELD_HIDDEN);
  SetFieldListDesc(object, "xconst2", "internal constant for synaptic conductances");
  SetFieldListProt(object, "yconst1", FIELD_HIDDEN);
  SetFieldListDesc(object, "yconst1", "internal constant for synaptic conductances");
  SetFieldListProt(object, "yconst2", FIELD_HIDDEN);
  SetFieldListDesc(object, "yconst2", "internal constant for synaptic conductances");
  SetFieldListProt(object, "norm", FIELD_HIDDEN);
  SetFieldListDesc(object, "norm", "normalization factor for psp amplitude");
  SetFieldListProt(object, "tau1", FIELD_READWRITE);
  SetFieldListDesc(object, "tau1", "first time constant of channel activation");
  SetFieldListProt(object, "tau2", FIELD_READWRITE);
  SetFieldListDesc(object, "tau2", "second time constant of channel activation");
  SetFieldListProt(object, "gmax", FIELD_READWRITE);
  SetFieldListDesc(object, "gmax", "peak conductance");
  SetFieldListProt(object, "frequency", FIELD_READWRITE);
  SetFieldListDesc(object, "frequency", "random activation frequency");
DirectSetElement(object->defaults, "frequency", "0.0");
  SetFieldListProt(object, "nsynapses", FIELD_READONLY);
  SetFieldListDesc(object, "nsynapses", "Number of incoming spike messages");
  SetFieldListProt(object, "synapse_size", FIELD_HIDDEN);
  SetFieldListDesc(object, "synapse_size", "size of synapse in bytes");
  SetFieldListProt(object, "event_buffer_size", FIELD_READONLY);
  SetFieldListDesc(object, "event_buffer_size", "size of event buffer");
DirectSetElement(object->defaults, "event_buffer_size", "0");
  SetFieldListProt(object, "pending_events", FIELD_READONLY);
  SetFieldListDesc(object, "pending_events", "number of pending spike events in event buffer");
DirectSetElement(object->defaults, "pending_events", "0");
  SetFieldListProt(object, "FreeSynapticEvents", FIELD_HIDDEN);
  SetFieldListDesc(object, "FreeSynapticEvents", "free list of synaptic event nodes");
  SetFieldListProt(object, "PendingSynapticEvents", FIELD_HIDDEN);
  SetFieldListDesc(object, "PendingSynapticEvents", "list of pending synaptic events");
  SetFieldListProt(object, "nodes_per_synapse", FIELD_READWRITE);
  SetFieldListDesc(object, "nodes_per_synapse", "number of event nodes to allocate per synapse");
DirectSetElement(object->defaults, "nodes_per_synapse", "1.0");
  SetFieldListProt(object, "list_alloced", FIELD_HIDDEN);
  SetFieldListDesc(object, "list_alloced", "flag for whether the freelist has been allocated");
DirectSetElement(object->defaults, "list_alloced", "0");
  SetFieldListProt(object, "allocednodes", FIELD_HIDDEN);
  SetFieldListDesc(object, "allocednodes", "number of nodes that are the head of a malloced block");
DirectSetElement(object->defaults, "allocednodes", "0");
  SetFieldListProt(object, "synapse", FIELD_READWRITE);
  SetFieldListDesc(object, "synapse", "synapse buffer");
  SetFieldListProt(object, "pre_tau1", FIELD_READWRITE);
  SetFieldListDesc(object, "pre_tau1", "first time constant for presynaptic averaging");
DirectSetElement(object->defaults, "pre_tau1", "0.010");
  SetFieldListProt(object, "pre_tau2", FIELD_READWRITE);
  SetFieldListDesc(object, "pre_tau2", "second time constant for presynaptic averaging");
DirectSetElement(object->defaults, "pre_tau2", "0.100");
  SetFieldListProt(object, "pre_thresh_lo", FIELD_READWRITE);
  SetFieldListDesc(object, "pre_thresh_lo", "lower presynaptic threshold");
DirectSetElement(object->defaults, "pre_thresh_lo", "3.0");
  SetFieldListProt(object, "pre_thresh_hi", FIELD_READWRITE);
  SetFieldListDesc(object, "pre_thresh_hi", "upper presynaptic threshold");
DirectSetElement(object->defaults, "pre_thresh_hi", "3.0");
  SetFieldListProt(object, "pre_xconst", FIELD_HIDDEN);
  SetFieldListDesc(object, "pre_xconst", "internal constant for presynaptic averaging");
  SetFieldListProt(object, "pre_yconst1", FIELD_HIDDEN);
  SetFieldListDesc(object, "pre_yconst1", "internal constant for presynaptic averaging");
  SetFieldListProt(object, "pre_yconst2", FIELD_HIDDEN);
  SetFieldListDesc(object, "pre_yconst2", "internal constant for presynaptic averaging");
  SetFieldListProt(object, "pre_norm", FIELD_HIDDEN);
  SetFieldListDesc(object, "pre_norm", "normalization factor for presynaptic averaging");
  SetFieldListProt(object, "avg_Vm", FIELD_READONLY);
  SetFieldListDesc(object, "avg_Vm", "averaged membrane potential");
  SetFieldListProt(object, "post_tau", FIELD_READWRITE);
  SetFieldListDesc(object, "post_tau", "time constant of postsynaptic averaging");
  SetFieldListProt(object, "post_const", FIELD_HIDDEN);
  SetFieldListDesc(object, "post_const", "internal constant for postsynaptic averaging");
  SetFieldListProt(object, "post_thresh_lo", FIELD_READWRITE);
  SetFieldListDesc(object, "post_thresh_lo", "lower postsynaptic threshold");
DirectSetElement(object->defaults, "post_thresh_lo", "-0.065");
  SetFieldListProt(object, "post_thresh_hi", FIELD_READWRITE);
  SetFieldListDesc(object, "post_thresh_hi", "upper postsynaptic threshold");
DirectSetElement(object->defaults, "post_thresh_hi", "-0.065");
  SetFieldListProt(object, "post_scale", FIELD_READWRITE);
  SetFieldListDesc(object, "post_scale", "scaling factor for postsynaptic activities");
DirectSetElement(object->defaults, "post_scale", "0.002");
  SetFieldListProt(object, "weight_change_rate", FIELD_READWRITE);
  SetFieldListDesc(object, "weight_change_rate", "rate of weight change");
DirectSetElement(object->defaults, "weight_change_rate", "1.0");
  SetFieldListProt(object, "min_weight", FIELD_READWRITE);
  SetFieldListDesc(object, "min_weight", "minimum weight");
DirectSetElement(object->defaults, "min_weight", "0.0");
  SetFieldListProt(object, "max_weight", FIELD_READWRITE);
  SetFieldListDesc(object, "max_weight", "maximum weight");
DirectSetElement(object->defaults, "max_weight", "100.0");
  SetFieldListProt(object, "change_weights", FIELD_READWRITE);
  SetFieldListDesc(object, "change_weights", "flag: nonzero means weights can be changed");
DirectSetElement(object->defaults, "change_weights", "1");
  object->description = "Like synchan, but weights are dynamically modified\naccording to a function of the pre- and postsynaptic\nactivations.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object stdpsynchan */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "stdpsynchan";
  tobject.type = "HebbSynchan_type";
  tobject.size = sizeof(struct HebbSynchan_type);
  { extern int StdpSynchan(); tobject.function = StdpSynchan; HashFunc("StdpSynchan", StdpSynchan, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("synchannel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("stdpsynchan");
  object->defaults->object = object;
  object->defaults->name = CopyString("stdpsynchan");
  object->author = "Mike Vanier 4/96 Caltech";
  { extern int StdpSynchan(); AddActionToObject(object, "CREATE", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "INIT", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "PROCESS", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "RESET", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "RECALC", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "CHECK", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "SAVE2", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "RESTORE2", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "EVENT", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'EVENT' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "ADDMSGIN", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'ADDMSGIN' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "DELETEMSGIN", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'DELETEMSGIN' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "MSGINDELETED", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'MSGINDELETED' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "RESETBUFFER", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'RESETBUFFER' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "DELETE", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "COPY", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "SET", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  { extern int StdpSynchan(); AddActionToObject(object, "SHOW", StdpSynchan, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'stdpsynchan'\n")); HashFunc("StdpSynchan", StdpSynchan, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", stdpsynchan_VOLTAGE, slotnames, 1);
  slotnames[0] = "activation";
  MsgListAdd(object, "ACTIVATION", stdpsynchan_ACTIVATION, slotnames, 1);
  slotnames[0] = "probability";
  slotnames[1] = "amplitude";
  MsgListAdd(object, "RAND_ACTIVATION", stdpsynchan_RAND_ACTIVATION, slotnames, 2);
  slotnames[0] = "modulation";
  MsgListAdd(object, "MOD", stdpsynchan_MOD, slotnames, 1);
  slotnames[0] = "modulation";
  MsgListAdd(object, "WEIGHT_CHANGE_MOD", stdpsynchan_WEIGHT_CHANGE_MOD, slotnames, 1);
  MsgListAdd(object, "SPIKE", stdpsynchan_SPIKE, slotnames, 0);
  slotnames[0] = "Ca";
  MsgListAdd(object, "CALCIUM", stdpsynchan_CALCIUM, slotnames, 1);
  MsgListAdd(object, "AVG_CALCIUM_1", stdpsynchan_AVG_CALCIUM_1, slotnames, 1);
  MsgListAdd(object, "AVG_CALCIUM_2", stdpsynchan_AVG_CALCIUM_2, slotnames, 1);
  MsgListAdd(object, "AVG_CALCIUM_3", stdpsynchan_AVG_CALCIUM_3, slotnames, 1);

  SetFieldListProt(object, "activation", FIELD_READONLY);
  SetFieldListDesc(object, "activation", "driving force for channel conductance");
  SetFieldListProt(object, "Ik", FIELD_READONLY);
  SetFieldListDesc(object, "Ik", "channel current");
  SetFieldListProt(object, "Gk", FIELD_READONLY);
  SetFieldListDesc(object, "Gk", "conductance of channel");
  SetFieldListProt(object, "Ek", FIELD_READWRITE);
  SetFieldListDesc(object, "Ek", "reversal potential of channel");
  SetFieldListProt(object, "X", FIELD_HIDDEN);
  SetFieldListDesc(object, "X", "internal variable for synaptic conductances");
  SetFieldListProt(object, "Y", FIELD_HIDDEN);
  SetFieldListDesc(object, "Y", "internal variable for synaptic conductances");
  SetFieldListProt(object, "xconst1", FIELD_HIDDEN);
  SetFieldListDesc(object, "xconst1", "internal constant for synaptic conductances");
  SetFieldListProt(object, "xconst2", FIELD_HIDDEN);
  SetFieldListDesc(object, "xconst2", "internal constant for synaptic conductances");
  SetFieldListProt(object, "yconst1", FIELD_HIDDEN);
  SetFieldListDesc(object, "yconst1", "internal constant for synaptic conductances");
  SetFieldListProt(object, "yconst2", FIELD_HIDDEN);
  SetFieldListDesc(object, "yconst2", "internal constant for synaptic conductances");
  SetFieldListProt(object, "norm", FIELD_HIDDEN);
  SetFieldListDesc(object, "norm", "normalization factor for psp amplitude");
  SetFieldListProt(object, "tau1", FIELD_READWRITE);
  SetFieldListDesc(object, "tau1", "first time constant of channel activation");
  SetFieldListProt(object, "tau2", FIELD_READWRITE);
  SetFieldListDesc(object, "tau2", "second time constant of channel activation");
  SetFieldListProt(object, "gmax", FIELD_READWRITE);
  SetFieldListDesc(object, "gmax", "peak conductance");
  SetFieldListProt(object, "frequency", FIELD_READWRITE);
  SetFieldListDesc(object, "frequency", "random activation frequency");
DirectSetElement(object->defaults, "frequency", "0.0");
  SetFieldListProt(object, "nsynapses", FIELD_READONLY);
  SetFieldListDesc(object, "nsynapses", "Number of incoming spike messages");
  SetFieldListProt(object, "synapse_size", FIELD_HIDDEN);
  SetFieldListDesc(object, "synapse_size", "size of synapse in bytes");
  SetFieldListProt(object, "event_buffer_size", FIELD_READONLY);
  SetFieldListDesc(object, "event_buffer_size", "size of event buffer");
DirectSetElement(object->defaults, "event_buffer_size", "0");
  SetFieldListProt(object, "pending_events", FIELD_READONLY);
  SetFieldListDesc(object, "pending_events", "number of pending spike events in event buffer");
DirectSetElement(object->defaults, "pending_events", "0");
  SetFieldListProt(object, "FreeSynapticEvents", FIELD_HIDDEN);
  SetFieldListDesc(object, "FreeSynapticEvents", "free list of synaptic event nodes");
  SetFieldListProt(object, "PendingSynapticEvents", FIELD_HIDDEN);
  SetFieldListDesc(object, "PendingSynapticEvents", "list of pending synaptic events");
  SetFieldListProt(object, "nodes_per_synapse", FIELD_READWRITE);
  SetFieldListDesc(object, "nodes_per_synapse", "number of event nodes to allocate per synapse");
DirectSetElement(object->defaults, "nodes_per_synapse", "1.0");
  SetFieldListProt(object, "list_alloced", FIELD_HIDDEN);
  SetFieldListDesc(object, "list_alloced", "flag for whether the freelist has been allocated");
DirectSetElement(object->defaults, "list_alloced", "0");
  SetFieldListProt(object, "allocednodes", FIELD_HIDDEN);
  SetFieldListDesc(object, "allocednodes", "number of nodes that are the head of a malloced block");
DirectSetElement(object->defaults, "allocednodes", "0");
  SetFieldListProt(object, "synapse", FIELD_READWRITE);
  SetFieldListDesc(object, "synapse", "synapse buffer");
  SetFieldListProt(object, "pre_tau1", FIELD_READWRITE);
  SetFieldListDesc(object, "pre_tau1", "first time constant for presynaptic averaging");
DirectSetElement(object->defaults, "pre_tau1", "0.010");
  SetFieldListProt(object, "pre_tau2", FIELD_READWRITE);
  SetFieldListDesc(object, "pre_tau2", "second time constant for presynaptic averaging");
DirectSetElement(object->defaults, "pre_tau2", "0.100");
  SetFieldListProt(object, "pre_thresh_lo", FIELD_READWRITE);
  SetFieldListDesc(object, "pre_thresh_lo", "lower presynaptic threshold");
DirectSetElement(object->defaults, "pre_thresh_lo", "3.0");
  SetFieldListProt(object, "pre_thresh_hi", FIELD_READWRITE);
  SetFieldListDesc(object, "pre_thresh_hi", "upper presynaptic threshold");
DirectSetElement(object->defaults, "pre_thresh_hi", "3.0");
  SetFieldListProt(object, "pre_xconst", FIELD_HIDDEN);
  SetFieldListDesc(object, "pre_xconst", "internal constant for presynaptic averaging");
  SetFieldListProt(object, "pre_yconst1", FIELD_HIDDEN);
  SetFieldListDesc(object, "pre_yconst1", "internal constant for presynaptic averaging");
  SetFieldListProt(object, "pre_yconst2", FIELD_HIDDEN);
  SetFieldListDesc(object, "pre_yconst2", "internal constant for presynaptic averaging");
  SetFieldListProt(object, "pre_norm", FIELD_HIDDEN);
  SetFieldListDesc(object, "pre_norm", "normalization factor for presynaptic averaging");
  SetFieldListProt(object, "avg_Ca", FIELD_READONLY);
  SetFieldListDesc(object, "avg_Ca", "averaged calcium");
DirectSetElement(object->defaults, "avg_Ca", "0");
  SetFieldListProt(object, "post_tau", FIELD_READWRITE);
  SetFieldListDesc(object, "post_tau", "time constant of postsynaptic averaging");
  SetFieldListProt(object, "post_const", FIELD_HIDDEN);
  SetFieldListDesc(object, "post_const", "internal constant for postsynaptic averaging");
  SetFieldListProt(object, "post_thresh_lo", FIELD_READWRITE);
  SetFieldListDesc(object, "post_thresh_lo", "lower postsynaptic threshold");
DirectSetElement(object->defaults, "post_thresh_lo", "-0.065");
  SetFieldListProt(object, "post_thresh_hi", FIELD_READWRITE);
  SetFieldListDesc(object, "post_thresh_hi", "upper postsynaptic threshold");
DirectSetElement(object->defaults, "post_thresh_hi", "-0.065");
  SetFieldListProt(object, "post_scale", FIELD_READWRITE);
  SetFieldListDesc(object, "post_scale", "scaling factor for postsynaptic activities");
DirectSetElement(object->defaults, "post_scale", "0.002");
  SetFieldListProt(object, "weight_change_rate", FIELD_READWRITE);
  SetFieldListDesc(object, "weight_change_rate", "rate of weight change");
DirectSetElement(object->defaults, "weight_change_rate", "1.0");
  SetFieldListProt(object, "min_weight", FIELD_READWRITE);
  SetFieldListDesc(object, "min_weight", "minimum weight");
DirectSetElement(object->defaults, "min_weight", "0.0");
  SetFieldListProt(object, "max_weight", FIELD_READWRITE);
  SetFieldListDesc(object, "max_weight", "maximum weight");
DirectSetElement(object->defaults, "max_weight", "100.0");
  SetFieldListProt(object, "change_weights", FIELD_READWRITE);
  SetFieldListDesc(object, "change_weights", "flag: nonzero means weights can be changed");
DirectSetElement(object->defaults, "change_weights", "1");
  object->description = "Like Hebbsynchan, but weights are dynamically modified\naccording to a function of the pre- and postsynaptic\ncalcium.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object facsynchan */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "facsynchan";
  tobject.type = "fac_synchan_type";
  tobject.size = sizeof(struct fac_synchan_type);
  { extern int FacSynchan(); tobject.function = FacSynchan; HashFunc("FacSynchan", FacSynchan, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("synchannel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("facsynchan");
  object->defaults->object = object;
  object->defaults->name = CopyString("facsynchan");
  object->author = "Mike Vanier";
  { extern int FacSynchan(); AddActionToObject(object, "CREATE", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "PROCESS", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "RESET", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "CHECK", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "RECALC", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "SAVE2", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "RESTORE2", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "EVENT", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'EVENT' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "ADDMSGIN", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'ADDMSGIN' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "DELETEMSGIN", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'DELETEMSGIN' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "MSGINDELETED", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'MSGINDELETED' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "RESETBUFFER", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'RESETBUFFER' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "DELETE", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "COPY", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "SET", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  { extern int FacSynchan(); AddActionToObject(object, "SHOW", FacSynchan, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'facsynchan'\n")); HashFunc("FacSynchan", FacSynchan, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", facsynchan_VOLTAGE, slotnames, 1);
  MsgListAdd(object, "SPIKE", facsynchan_SPIKE, slotnames, 0);
  SetFieldListProt(object, "activation", FIELD_READONLY);
  SetFieldListDesc(object, "activation", "Internal synaptic conductance variable.");
  SetFieldListProt(object, "Ik", FIELD_READONLY);
  SetFieldListDesc(object, "Ik", "Channel current.");
  SetFieldListProt(object, "Gk", FIELD_READONLY);
  SetFieldListDesc(object, "Gk", "Conductance of channel.");
  SetFieldListProt(object, "Ek", FIELD_READWRITE);
  SetFieldListDesc(object, "Ek", "Reversal potential of channel.");
  SetFieldListProt(object, "X", FIELD_HIDDEN);
  SetFieldListDesc(object, "X", "Alpha-function activation variable.");
  SetFieldListProt(object, "Y", FIELD_HIDDEN);
  SetFieldListDesc(object, "Y", "Alpha-function activation variable.");
  SetFieldListProt(object, "xconst1", FIELD_HIDDEN);
  SetFieldListDesc(object, "xconst1", "Internal state variable.");
  SetFieldListProt(object, "yconst1", FIELD_HIDDEN);
  SetFieldListDesc(object, "yconst1", "Internal state variable.");
  SetFieldListProt(object, "xconst2", FIELD_HIDDEN);
  SetFieldListDesc(object, "xconst2", "Internal state variable.");
  SetFieldListProt(object, "yconst2", FIELD_HIDDEN);
  SetFieldListDesc(object, "yconst2", "Internal state variable.");
  SetFieldListProt(object, "norm", FIELD_HIDDEN);
  SetFieldListDesc(object, "norm", "Internal state variable.");
  SetFieldListProt(object, "tau1", FIELD_READWRITE);
  SetFieldListDesc(object, "tau1", "Alpha-function rise time constant.");
  SetFieldListProt(object, "tau2", FIELD_READWRITE);
  SetFieldListDesc(object, "tau2", "Alpha-function fall time constant.");
  SetFieldListProt(object, "gmax", FIELD_READWRITE);
  SetFieldListDesc(object, "gmax", "Maximal conductance of the synchan.");
  SetFieldListProt(object, "frequency", FIELD_HIDDEN);
  SetFieldListDesc(object, "frequency", "Unused; for synchan compatibility.");
  SetFieldListProt(object, "nsynapses", FIELD_READONLY);
  SetFieldListDesc(object, "nsynapses", "Number of synapses.");
  SetFieldListProt(object, "normalize_weights", FIELD_HIDDEN);
  SetFieldListDesc(object, "normalize_weights", "Unused.");
  SetFieldListProt(object, "time_last_event", FIELD_HIDDEN);
  SetFieldListDesc(object, "time_last_event", "Unused.");
  SetFieldListProt(object, "hsolve", FIELD_HIDDEN);
  SetFieldListDesc(object, "hsolve", "Unused.");
  SetFieldListProt(object, "solve_index", FIELD_HIDDEN);
  SetFieldListDesc(object, "solve_index", "Unused.");
  SetFieldListProt(object, "synapse_size", FIELD_HIDDEN);
  SetFieldListDesc(object, "synapse_size", "Size of synapse in bytes.");
  SetFieldListProt(object, "event_buffer_size", FIELD_READONLY);
  SetFieldListDesc(object, "event_buffer_size", "Size of event buffer.");
  SetFieldListProt(object, "pending_events", FIELD_READONLY);
  SetFieldListDesc(object, "pending_events", "Number of pending events.");
  SetFieldListProt(object, "FreeSynapticEvents", FIELD_HIDDEN);
  SetFieldListDesc(object, "FreeSynapticEvents", "Free list of events.");
  SetFieldListProt(object, "PendingSynapticEvents", FIELD_HIDDEN);
  SetFieldListDesc(object, "PendingSynapticEvents", "List of pending events.");
  SetFieldListProt(object, "nodes_per_synapse", FIELD_READWRITE);
  SetFieldListDesc(object, "nodes_per_synapse", "# of nodes per synapse.");
  SetFieldListProt(object, "list_alloced", FIELD_HIDDEN);
  SetFieldListDesc(object, "list_alloced", "Flag: was free list allocated?");
  SetFieldListProt(object, "allocednodes", FIELD_HIDDEN);
  SetFieldListDesc(object, "allocednodes", "Number of allocated event nodes.");
  SetFieldListProt(object, "synapse", FIELD_READWRITE);
  SetFieldListDesc(object, "synapse", "Synapse buffer.");
  SetFieldListProt(object, "fac_depr_on", FIELD_READWRITE);
  SetFieldListDesc(object, "fac_depr_on", "Flag: no fac/depr if 0.");
  SetFieldListProt(object, "max_fac", FIELD_READWRITE);
  SetFieldListDesc(object, "max_fac", "Upper limit on facilitation.");
  SetFieldListProt(object, "fac_per_spike", FIELD_READWRITE);
  SetFieldListDesc(object, "fac_per_spike", "Synaptic facilitation per spike.");
  SetFieldListProt(object, "fac_tau", FIELD_READWRITE);
  SetFieldListDesc(object, "fac_tau", "Time constant of synaptic facilitation.");
  SetFieldListProt(object, "fac_const", FIELD_HIDDEN);
  SetFieldListDesc(object, "fac_const", "= exp(-dt/fac_tau).");
  SetFieldListProt(object, "depr_per_spike", FIELD_READWRITE);
  SetFieldListDesc(object, "depr_per_spike", "Synaptic depression per spike.");
  SetFieldListProt(object, "depr_tau", FIELD_READWRITE);
  SetFieldListDesc(object, "depr_tau", "Time constant of synaptic depression.");
  SetFieldListProt(object, "depr_const", FIELD_HIDDEN);
  SetFieldListDesc(object, "depr_const", "= exp(-dt/depr_tau).");
  object->description = "Synaptically activated channel incorporating \nsynaptic facilitation and/or synaptic depression.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object spikegen */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "spikegen";
  tobject.type = "Spikegen_type";
  tobject.size = sizeof(struct Spikegen_type);
  { extern int Spikegen(); tobject.function = Spikegen; HashFunc("Spikegen", Spikegen, "int"); }
  ObjectAddClass(&tobject,ClassID("spiking"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("spikegen");
  object->defaults->object = object;
  object->defaults->name = CopyString("spikegen");
  object->author = "M.Wilson Caltech 6/88, Dave Bilitch 1/94";
  { extern int Spikegen(); AddActionToObject(object, "PROCESS", Spikegen, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'spikegen'\n")); HashFunc("Spikegen", Spikegen, "int"); }
  { extern int Spikegen(); AddActionToObject(object, "RESET", Spikegen, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'spikegen'\n")); HashFunc("Spikegen", Spikegen, "int"); }
  { extern int Spikegen(); AddActionToObject(object, "CHECK", Spikegen, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'spikegen'\n")); HashFunc("Spikegen", Spikegen, "int"); }
  { extern int Spikegen(); AddActionToObject(object, "SAVE2", Spikegen, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'spikegen'\n")); HashFunc("Spikegen", Spikegen, "int"); }
  { extern int Spikegen(); AddActionToObject(object, "RESTORE2", Spikegen, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'spikegen'\n")); HashFunc("Spikegen", Spikegen, "int"); }
  SetFieldListProt(object, "state", FIELD_READONLY);
  SetFieldListDesc(object, "state", "current state of object");
  SetFieldListProt(object, "thresh", FIELD_READWRITE);
  SetFieldListDesc(object, "thresh", "threshold for spike generation");
  SetFieldListProt(object, "output_amp", FIELD_READWRITE);
  SetFieldListDesc(object, "output_amp", "amplitude of spike event");
DirectSetElement(object->defaults, "output_amp", "1.0");
  SetFieldListProt(object, "abs_refract", FIELD_READWRITE);
  SetFieldListDesc(object, "abs_refract", "absolute refractory period");
  SetFieldListProt(object, "lastevent", FIELD_READWRITE);
  SetFieldListDesc(object, "lastevent", "time of last spike");
  slotnames[0] = "input";
  MsgListAdd(object, "INPUT", spikegen_INPUT, slotnames, 1);
  slotnames[0] = "threshold";
  MsgListAdd(object, "THRESH", spikegen_THRESH, slotnames, 1);
  object->description = "Performs threshold spike discrimination.\nGenerates an impulse each time an input crosses the\nspike threshold at a maximal rate set by abs_refract.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object randomspike */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "randomspike";
  tobject.type = "Randomspike_type";
  tobject.size = sizeof(struct Randomspike_type);
  { extern int Randomspike(); tobject.function = Randomspike; HashFunc("Randomspike", Randomspike, "int"); }
  ObjectAddClass(&tobject,ClassID("spiking"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("randomspike");
  object->defaults->object = object;
  object->defaults->name = CopyString("randomspike");
  object->author = "M.Wilson Caltech 6/88, Dave Bilitch 1/94";
  { extern int Randomspike(); AddActionToObject(object, "INIT", Randomspike, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'randomspike'\n")); HashFunc("Randomspike", Randomspike, "int"); }
  { extern int Randomspike(); AddActionToObject(object, "PROCESS", Randomspike, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'randomspike'\n")); HashFunc("Randomspike", Randomspike, "int"); }
  { extern int Randomspike(); AddActionToObject(object, "RESET", Randomspike, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'randomspike'\n")); HashFunc("Randomspike", Randomspike, "int"); }
  { extern int Randomspike(); AddActionToObject(object, "SET", Randomspike, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'randomspike'\n")); HashFunc("Randomspike", Randomspike, "int"); }
  SetFieldListProt(object, "state", FIELD_READONLY);
  SetFieldListDesc(object, "state", "current state of object");
  SetFieldListProt(object, "rate", FIELD_READWRITE);
  SetFieldListDesc(object, "rate", "rate of generation of events");
  SetFieldListProt(object, "reset", FIELD_READWRITE);
  SetFieldListDesc(object, "reset", "flag for whether to reset after each event");
DirectSetElement(object->defaults, "reset", "1");
  SetFieldListProt(object, "reset_value", FIELD_READWRITE);
  SetFieldListDesc(object, "reset_value", "what to reset state to");
DirectSetElement(object->defaults, "reset_value", "0.0");
  SetFieldListProt(object, "min_amp", FIELD_READWRITE);
  SetFieldListDesc(object, "min_amp", "minimum amplitude of event");
DirectSetElement(object->defaults, "min_amp", "1.0");
  SetFieldListProt(object, "max_amp", FIELD_READWRITE);
  SetFieldListDesc(object, "max_amp", "maximum amplitude of event");
DirectSetElement(object->defaults, "max_amp", "1.0");
  SetFieldListProt(object, "abs_refract", FIELD_READWRITE);
  SetFieldListDesc(object, "abs_refract", "absolute refractory period");
DirectSetElement(object->defaults, "abs_refract", "0.0");
  SetFieldListProt(object, "lastevent", FIELD_HIDDEN);
  SetFieldListDesc(object, "lastevent", "time of last spike");
  SetFieldListProt(object, "realrate", FIELD_HIDDEN);
  SetFieldListDesc(object, "realrate", "rate corrected for refractory period");
  slotnames[0] = "rate";
  MsgListAdd(object, "RATE", randomspike_RATE, slotnames, 1);
  slotnames[0] = "min";
  slotnames[1] = "max";
  MsgListAdd(object, "MINMAX", randomspike_MINMAX, slotnames, 2);
  object->description = "Generates a time series of events at a rate\ngiven by the rate parameter. The probability\nof an event for a single time step is adjusted\nbased on the setting of abs_refract such that\nthe requested rate is maintained.  No event will\nbe generated during the refractory period defined\nby abs_refract.  When an event has been generated\nthe amplitude of the event is a random variable\nuniformly distributed between min_amp and max_amp.\nThe state field has the value of the event amplitude\nif an event has been generated. If an event is not\ngenerated then the value of the state field\ndepends on the reset field. If reset is non-zero\n(the default) then the state takes on the value given in\nreset_value. Otherwise the state will behave like a\nlatch containing the amplitude of the previous event.\nA reset time, randomspike is initialized to a random\nphase of the refractory period to avoid artificial\nsynchronization at high rate settings.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object SynS_object */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "SynS_object";
  tobject.type = "SynS_type";
  tobject.size = sizeof(struct SynS_type);
  { extern int SynS_f(); tobject.function = SynS_f; HashFunc("SynS_f", SynS_f, "int"); }
  ObjectAddClass(&tobject,ClassID("synchannel"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("SynS_object");
  object->defaults->object = object;
  object->defaults->name = CopyString("SynS_object");
  object->author = "ron  lab, 3/97 ";
  { extern int SynS_f(); AddActionToObject(object, "INIT", SynS_f, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'SynS_object'\n")); HashFunc("SynS_f", SynS_f, "int"); }
  { extern int SynS_f(); AddActionToObject(object, "PROCESS", SynS_f, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'SynS_object'\n")); HashFunc("SynS_f", SynS_f, "int"); }
  { extern int SynS_f(); AddActionToObject(object, "RESET", SynS_f, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'SynS_object'\n")); HashFunc("SynS_f", SynS_f, "int"); }
  { extern int SynS_f(); AddActionToObject(object, "CHECK", SynS_f, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'SynS_object'\n")); HashFunc("SynS_f", SynS_f, "int"); }
  { extern int SynS_f(); AddActionToObject(object, "SAVE2", SynS_f, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'SynS_object'\n")); HashFunc("SynS_f", SynS_f, "int"); }
  { extern int SynS_f(); AddActionToObject(object, "RESTORE2", SynS_f, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'SynS_object'\n")); HashFunc("SynS_f", SynS_f, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", SynS_object_VOLTAGE, slotnames, 1);
  SetFieldListProt(object, "m_SynS", FIELD_READWRITE);
  SetFieldListDesc(object, "m_SynS", "modulation factor");
  SetFieldListProt(object, "A", FIELD_READWRITE);
  SetFieldListDesc(object, "A", "A");
  SetFieldListProt(object, "B", FIELD_READWRITE);
  SetFieldListDesc(object, "B", "B");
  SetFieldListProt(object, "C", FIELD_READWRITE);
  SetFieldListDesc(object, "C", "C");
  SetFieldListProt(object, "D", FIELD_READWRITE);
  SetFieldListDesc(object, "D", "D");
  SetFieldListProt(object, "E", FIELD_READWRITE);
  SetFieldListDesc(object, "E", "E");
  SetFieldListProt(object, "Ek", FIELD_HIDDEN);
  SetFieldListDesc(object, "Ek", "Ek not used ");
  SetFieldListProt(object, "Ik", FIELD_HIDDEN);
  SetFieldListDesc(object, "Ik", "Ik not used ");
  SetFieldListProt(object, "Gk", FIELD_HIDDEN);
  SetFieldListDesc(object, "Gk", "Gk not used ");
  SetFieldListProt(object, "activation", FIELD_HIDDEN);
  SetFieldListDesc(object, "activation", "activation not used");
  object->description = "a new object for voltage-dependent modulation \nof spike-mediated synaptic transmission.\nModulation is a sigmoidal function of membrane\npotential given by \nModInf=A+B/(1+exp(C*(Vm+D)))\nE is the time constant\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object SynG_object */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "SynG_object";
  tobject.type = "SynG_type";
  tobject.size = sizeof(struct SynG_type);
  { extern int SynG(); tobject.function = SynG; HashFunc("SynG", SynG, "int"); }
  ObjectAddClass(&tobject,ClassID("synchannel"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("SynG_object");
  object->defaults->object = object;
  object->defaults->name = CopyString("SynG_object");
  object->author = "ron  lab,3/97 ";
  { extern int SynG(); AddActionToObject(object, "INIT", SynG, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'SynG_object'\n")); HashFunc("SynG", SynG, "int"); }
  { extern int SynG(); AddActionToObject(object, "PROCESS", SynG, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'SynG_object'\n")); HashFunc("SynG", SynG, "int"); }
  { extern int SynG(); AddActionToObject(object, "RESET", SynG, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'SynG_object'\n")); HashFunc("SynG", SynG, "int"); }
  { extern int SynG(); AddActionToObject(object, "CHECK", SynG, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'SynG_object'\n")); HashFunc("SynG", SynG, "int"); }
  { extern int SynG(); AddActionToObject(object, "SAVE2", SynG, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'SynG_object'\n")); HashFunc("SynG", SynG, "int"); }
  { extern int SynG(); AddActionToObject(object, "RESTORE2", SynG, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'SynG_object'\n")); HashFunc("SynG", SynG, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", SynG_object_VOLTAGE, slotnames, 1);
  slotnames[0] = "FastCa";
  MsgListAdd(object, "CAF", SynG_object_CAF, slotnames, 1);
  slotnames[0] = "SlowCa";
  MsgListAdd(object, "CAS", SynG_object_CAS, slotnames, 1);
  slotnames[0] = "postvoltage";
  MsgListAdd(object, "POSTVOLTAGE", SynG_object_POSTVOLTAGE, slotnames, 1);
  SetFieldListProt(object, "A", FIELD_READWRITE);
  SetFieldListDesc(object, "A", "shunts effective Ca current");
  SetFieldListProt(object, "B", FIELD_READWRITE);
  SetFieldListDesc(object, "B", "buffering parameter ");
  SetFieldListProt(object, "P", FIELD_READWRITE);
  SetFieldListDesc(object, "P", "Ca factor governing transmitter release");
  SetFieldListProt(object, "C", FIELD_READWRITE);
  SetFieldListDesc(object, "C", "limit parameter(limits release to Gbar)");
  SetFieldListProt(object, "R", FIELD_READWRITE);
  SetFieldListDesc(object, "R", "release = p^3/(p^3+C)");
  SetFieldListProt(object, "Gbar", FIELD_READWRITE);
  SetFieldListDesc(object, "Gbar", "maximal conductance");
  SetFieldListProt(object, "A1", FIELD_READWRITE);
  SetFieldListDesc(object, "A1", "A1 in Ainf=A1+A2/(1+exp(A3+(Vm+A4)))");
  SetFieldListProt(object, "A2", FIELD_READWRITE);
  SetFieldListDesc(object, "A2", "A2");
  SetFieldListProt(object, "A3", FIELD_READWRITE);
  SetFieldListDesc(object, "A3", "A3");
  SetFieldListProt(object, "A4", FIELD_READWRITE);
  SetFieldListDesc(object, "A4", "A4");
  SetFieldListProt(object, "A5", FIELD_READWRITE);
  SetFieldListDesc(object, "A5", "A5 is the time constant");
  SetFieldListProt(object, "POWER", FIELD_READWRITE);
  SetFieldListDesc(object, "POWER", "POWER");
  SetFieldListProt(object, "Ik", FIELD_READONLY);
  SetFieldListDesc(object, "Ik", "Ik");
  SetFieldListProt(object, "activation", FIELD_HIDDEN);
  SetFieldListDesc(object, "activation", "activation not used");
  object->description = "A new object specifically for\ngraded synaptic inhibition in the leech\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object SynE_object */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "SynE_object";
  tobject.type = "SynE_type";
  tobject.size = sizeof(struct SynE_type);
  { extern int SynE(); tobject.function = SynE; HashFunc("SynE", SynE, "int"); }
  ObjectAddClass(&tobject,ClassID("synchannel"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("SynE_object");
  object->defaults->object = object;
  object->defaults->name = CopyString("SynE_object");
  object->author = "ron  lab,5/99 ";
  { extern int SynE(); AddActionToObject(object, "INIT", SynE, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'SynE_object'\n")); HashFunc("SynE", SynE, "int"); }
  { extern int SynE(); AddActionToObject(object, "PROCESS", SynE, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'SynE_object'\n")); HashFunc("SynE", SynE, "int"); }
  { extern int SynE(); AddActionToObject(object, "RESET", SynE, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'SynE_object'\n")); HashFunc("SynE", SynE, "int"); }
  { extern int SynE(); AddActionToObject(object, "CHECK", SynE, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'SynE_object'\n")); HashFunc("SynE", SynE, "int"); }
  { extern int SynE(); AddActionToObject(object, "SAVE2", SynE, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'SynE_object'\n")); HashFunc("SynE", SynE, "int"); }
  { extern int SynE(); AddActionToObject(object, "RESTORE2", SynE, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'SynE_object'\n")); HashFunc("SynE", SynE, "int"); }
  slotnames[0] = "voltage";
  MsgListAdd(object, "VOLTAGE", SynE_object_VOLTAGE, slotnames, 1);
  slotnames[0] = "postvoltage";
  MsgListAdd(object, "POSTVOLTAGE", SynE_object_POSTVOLTAGE, slotnames, 1);
  SetFieldListProt(object, "TauPre", FIELD_READWRITE);
  SetFieldListDesc(object, "TauPre", "Tau for RC filter of presynaptic Vm");
  SetFieldListProt(object, "TauPost", FIELD_READWRITE);
  SetFieldListDesc(object, "TauPost", "Tau for RC filter of presynaptic Vm");
  SetFieldListProt(object, "Vpre", FIELD_READWRITE);
  SetFieldListDesc(object, "Vpre", "RC filtered presynaptic Vm");
  SetFieldListProt(object, "Vpost", FIELD_READWRITE);
  SetFieldListDesc(object, "Vpost", "RC filtered postsynaptic Vm");
  SetFieldListProt(object, "rectify", FIELD_READWRITE);
  SetFieldListDesc(object, "rectify", "0 no rectify, 1 pass pos., 1 pass neg.");
  SetFieldListProt(object, "Gbar", FIELD_READWRITE);
  SetFieldListDesc(object, "Gbar", "maximal conductance");
  SetFieldListProt(object, "Ik", FIELD_READONLY);
  SetFieldListDesc(object, "Ik", "Ik");
  SetFieldListProt(object, "Ek", FIELD_HIDDEN);
  SetFieldListDesc(object, "Ek", "Ek not used ");
  SetFieldListProt(object, "Gk", FIELD_HIDDEN);
  SetFieldListDesc(object, "Gk", "Gk not used ");
  SetFieldListProt(object, "activation", FIELD_HIDDEN);
  SetFieldListDesc(object, "activation", "activation not used");
  object->description = "A new object specifically for\nelectrical synaptic transmission in the leech\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);
  { extern void PlanarDelay(); AddFunc("planardelay", PlanarDelay, "void");   HashFunc("PlanarDelay", PlanarDelay, "void"); }
  { extern void VolumeDelay(); AddFunc("volumedelay", VolumeDelay, "void");   HashFunc("VolumeDelay", VolumeDelay, "void"); }
  { extern void SynDelay(); AddFunc("syndelay", SynDelay, "void");   HashFunc("SynDelay", SynDelay, "void"); }
  { extern void PlanarWeight(); AddFunc("planarweight", PlanarWeight, "void");   HashFunc("PlanarWeight", PlanarWeight, "void"); }
  { extern void VolumeWeight(); AddFunc("volumeweight", VolumeWeight, "void");   HashFunc("VolumeWeight", VolumeWeight, "void"); }
  { extern void do_planarconnect(); AddFunc("planarconnect", do_planarconnect, "void");   HashFunc("do_planarconnect", do_planarconnect, "void"); }
  { extern void do_volumeconnect(); AddFunc("volumeconnect", do_volumeconnect, "void");   HashFunc("do_volumeconnect", do_volumeconnect, "void"); }
  { extern void NormalizeWeights(); AddFunc("normalizeweights", NormalizeWeights, "void");   HashFunc("NormalizeWeights", NormalizeWeights, "void"); }
  { extern int do_getsynindex(); AddFunc("getsynindex", do_getsynindex, "int");   HashFunc("do_getsynindex", do_getsynindex, "int"); }
  { extern int do_getsyncount(); AddFunc("getsyncount", do_getsyncount, "int");   HashFunc("do_getsyncount", do_getsyncount, "int"); }
  { extern char* do_getsynsrc(); AddFunc("getsynsrc", do_getsynsrc, "char*");   HashFunc("do_getsynsrc", do_getsynsrc, "char*"); }
  { extern char* do_getsyndest(); AddFunc("getsyndest", do_getsyndest, "char*");   HashFunc("do_getsyndest", do_getsyndest, "char*"); }
  { extern void ResetSynchanBuffers(); AddFunc("resetsynchanbuffers", ResetSynchanBuffers, "void");   HashFunc("ResetSynchanBuffers", ResetSynchanBuffers, "void"); }
  { extern void PlanarWeight2(); AddFunc("planarweight2", PlanarWeight2, "void");   HashFunc("PlanarWeight2", PlanarWeight2, "void"); }
  { extern void PlanarDelay2(); AddFunc("planardelay2", PlanarDelay2, "void");   HashFunc("PlanarDelay2", PlanarDelay2, "void"); }
  { extern void VolumeDelay2(); AddFunc("volumedelay2", VolumeDelay2, "void");   HashFunc("VolumeDelay2", VolumeDelay2, "void"); }
  { extern void VolumeWeight2(); AddFunc("volumeweight2", VolumeWeight2, "void");   HashFunc("VolumeWeight2", VolumeWeight2, "void"); }
  { extern void do_fileconnect(); AddFunc("fileconnect", do_fileconnect, "void");   HashFunc("do_fileconnect", do_fileconnect, "void"); }

/* Script variables */

} /* STARTUP_newconn */
