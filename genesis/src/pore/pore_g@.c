#include <stdio.h>
#include "pore_ext.h"
#include "pore_g@.h"

void STARTUP_pore() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  /* Definition of object Napores */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "Napores";
  tobject.type = "Na_pore_type";
  tobject.size = sizeof(struct Na_pore_type);
  { extern int NaPorePop(); tobject.function = NaPorePop; HashFunc("NaPorePop", NaPorePop, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("Napores");
  object->defaults->object = object;
  object->defaults->name = CopyString("Napores");
  { extern int NaPorePop(); AddActionToObject(object, "INIT", NaPorePop, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'Napores'\n")); HashFunc("NaPorePop", NaPorePop, "int"); }
  { extern int NaPorePop(); AddActionToObject(object, "PROCESS", NaPorePop, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'Napores'\n")); HashFunc("NaPorePop", NaPorePop, "int"); }
  { extern int NaPorePop(); AddActionToObject(object, "RESET", NaPorePop, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'Napores'\n")); HashFunc("NaPorePop", NaPorePop, "int"); }
  { extern int NaPorePop(); AddActionToObject(object, "CHECK", NaPorePop, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'Napores'\n")); HashFunc("NaPorePop", NaPorePop, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", Napores_VOLTAGE, slotnames, 1);
  object->author = "Adam Strassberg";
  object->description = "Sodium pore population represented through eight state Markov kinetic scheme (see Strassberg and DeFelice, 1992).\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object Kpores */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "Kpores";
  tobject.type = "K_pore_type";
  tobject.size = sizeof(struct K_pore_type);
  { extern int KPorePop(); tobject.function = KPorePop; HashFunc("KPorePop", KPorePop, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("Kpores");
  object->defaults->object = object;
  object->defaults->name = CopyString("Kpores");
  { extern int KPorePop(); AddActionToObject(object, "INIT", KPorePop, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'Kpores'\n")); HashFunc("KPorePop", KPorePop, "int"); }
  { extern int KPorePop(); AddActionToObject(object, "PROCESS", KPorePop, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'Kpores'\n")); HashFunc("KPorePop", KPorePop, "int"); }
  { extern int KPorePop(); AddActionToObject(object, "RESET", KPorePop, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'Kpores'\n")); HashFunc("KPorePop", KPorePop, "int"); }
  { extern int KPorePop(); AddActionToObject(object, "CHECK", KPorePop, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'Kpores'\n")); HashFunc("KPorePop", KPorePop, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", Kpores_VOLTAGE, slotnames, 1);
  object->author = "Adam Strassberg";
  object->description = "Potassium pore population represented through five state Markov kinetic scheme (see Strassberg and DeFelice, 1992).\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */

} /* STARTUP_pore */
