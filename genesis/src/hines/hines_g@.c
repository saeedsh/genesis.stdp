#include <stdio.h>
#include "hines_ext.h"
#include "hines_g@.h"

void STARTUP_hines() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  argv[0] = "newclass";
  argv[1] = "hsolver";
  do_add_class(2, argv);
  AddAction("DUPLICATE", 202);
  AddAction("HPUT", 300);
  AddAction("HGET", 301);
  AddAction("HRESTORE", 302);
  AddAction("HSAVE", 303);
  AddAction("HCHANGE", 304);
  AddAction("HPROCESS", 250);
  AddAction("HSEVENT", 251);
  { extern char* do_findsolvefield(); AddFunc("findsolvefield", do_findsolvefield, "char*");   HashFunc("do_findsolvefield", do_findsolvefield, "char*"); }
  { extern char* do_solvecompname(); AddFunc("getsolvecompname", do_solvecompname, "char*");   HashFunc("do_solvecompname", do_solvecompname, "char*"); }
  { extern char* do_solvechildname(); AddFunc("getsolvechildname", do_solvechildname, "char*");   HashFunc("do_solvechildname", do_solvechildname, "char*"); }

  /* Definition of object hsolve */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "hsolve";
  tobject.type = "hsolve_type";
  tobject.size = sizeof(struct hsolve_type);
  { extern int HinesSolver(); tobject.function = HinesSolver; HashFunc("HinesSolver", HinesSolver, "int"); }
  ObjectAddClass(&tobject,ClassID("hsolver"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("hsolve");
  object->defaults->object = object;
  object->defaults->name = CopyString("hsolve");
  object->author = "U.S.Bhalla and E. De Schutter Caltech 91-93, E. De Schutter BBF-UIA 94-96";
  { extern int HinesSolver(); AddActionToObject(object, "RESET", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "DELETE", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "PROCESS", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "CREATE", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "SETUP", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'SETUP' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "DUPLICATE", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'DUPLICATE' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "HPUT", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'HPUT' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "HGET", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'HGET' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "HRESTORE", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'HRESTORE' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "HSAVE", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'HSAVE' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "HCHANGE", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'HCHANGE' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "HSEVENT", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'HSEVENT' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "SAVE2", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  { extern int HinesSolver(); AddActionToObject(object, "RESTORE2", HinesSolver, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'hsolve'\n")); HashFunc("HinesSolver", HinesSolver, "int"); }
  object->description = "uses Hines' method to solve cells\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */

} /* STARTUP_hines */
