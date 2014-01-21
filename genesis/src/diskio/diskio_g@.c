#include <stdio.h>
#include "diskio_ext.h"
#include "diskio_g@.h"

void STARTUP_diskio() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];
  { extern void copyright_fileformats(); copyright_fileformats(); }
  AddAction("FLUSH", 1001);
  AddAction("UPDATE", 10010);

  /* Definition of object diskio */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "diskio";
  tobject.type = "Gen_Diskio_Type";
  tobject.size = sizeof(struct Gen_Diskio_Type);
  { extern int Gen_Diskio(); tobject.function = Gen_Diskio; HashFunc("Gen_Diskio", Gen_Diskio, "int"); }
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("diskio");
  object->defaults->object = object;
  object->defaults->name = CopyString("diskio");
  object->author = "V.Jagadish Caltech 9/96";
  slotnames[0] = "data";
  MsgListAdd(object, "SAVE", diskio_SAVE, slotnames, 1);
  { extern int Gen_Diskio(); AddActionToObject(object, "CREATE", Gen_Diskio, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'diskio'\n")); HashFunc("Gen_Diskio", Gen_Diskio, "int"); }
  { extern int Gen_Diskio(); AddActionToObject(object, "SET", Gen_Diskio, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'diskio'\n")); HashFunc("Gen_Diskio", Gen_Diskio, "int"); }
  { extern int Gen_Diskio(); AddActionToObject(object, "RESET", Gen_Diskio, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'diskio'\n")); HashFunc("Gen_Diskio", Gen_Diskio, "int"); }
  { extern int Gen_Diskio(); AddActionToObject(object, "PROCESS", Gen_Diskio, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'diskio'\n")); HashFunc("Gen_Diskio", Gen_Diskio, "int"); }
  { extern int Gen_Diskio(); AddActionToObject(object, "DELETE", Gen_Diskio, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'diskio'\n")); HashFunc("Gen_Diskio", Gen_Diskio, "int"); }
  { extern int Gen_Diskio(); AddActionToObject(object, "UPDATE", Gen_Diskio, 0) ? 0 : (Error(), printf("adding action 'UPDATE' to object 'diskio'\n")); HashFunc("Gen_Diskio", Gen_Diskio, "int"); }
  { extern int Gen_Diskio(); AddActionToObject(object, "FLUSH", Gen_Diskio, 0) ? 0 : (Error(), printf("adding action 'FLUSH' to object 'diskio'\n")); HashFunc("Gen_Diskio", Gen_Diskio, "int"); }
  { extern int Gen_Diskio(); AddActionToObject(object, "ADDMSGIN", Gen_Diskio, 0) ? 0 : (Error(), printf("adding action 'ADDMSGIN' to object 'diskio'\n")); HashFunc("Gen_Diskio", Gen_Diskio, "int"); }
  { extern int Gen_Diskio(); AddActionToObject(object, "DELETEMSGIN", Gen_Diskio, 0) ? 0 : (Error(), printf("adding action 'DELETEMSGIN' to object 'diskio'\n")); HashFunc("Gen_Diskio", Gen_Diskio, "int"); }
  { extern int Gen_Diskio(); AddActionToObject(object, "SHOW", Gen_Diskio, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'diskio'\n")); HashFunc("Gen_Diskio", Gen_Diskio, "int"); }
  { extern int Gen_Diskio(); AddActionToObject(object, "QUIT", Gen_Diskio, 0) ? 0 : (Error(), printf("adding action 'QUIT' to object 'diskio'\n")); HashFunc("Gen_Diskio", Gen_Diskio, "int"); }
  SetFieldListProt(object, "is_open", FIELD_READONLY);
  SetFieldListDesc(object, "is_open", "Open state of file");
  SetFieldListProt(object, "is_writable", FIELD_READONLY);
  SetFieldListDesc(object, "is_writable", "Writable state of file");
  SetFieldListProt(object, "accessmode", FIELD_READONLY);
  SetFieldListDesc(object, "accessmode", "Mode with which file is accessed");
  SetFieldListProt(object, "adi", FIELD_HIDDEN);
  SetFieldListDesc(object, "adi", "Hidden handle to the diskio interface struct");
  SetFieldListProt(object, "coordi", FIELD_HIDDEN);
  SetFieldListDesc(object, "coordi", "Hidden handle to the coordinate variable");
  SetFieldListProt(object, "start_time_index", FIELD_HIDDEN);
  SetFieldListDesc(object, "start_time_index", "Hidden count of time step");
  SetFieldListProt(object, "currenttime", FIELD_HIDDEN);
  SetFieldListDesc(object, "currenttime", "Hidden cache of time value");
  SetFieldListProt(object, "autoSAVEavi", FIELD_HIDDEN);
  SetFieldListDesc(object, "autoSAVEavi", "Hidden array of handles to the auto generated BC vars");
  SetFieldListProt(object, "autoSAVEamdi", FIELD_HIDDEN);
  SetFieldListDesc(object, "autoSAVEamdi", "Hidden array of handles to the auto generated BC 3-D position attribs");
  SetFieldListProt(object, "valsallocated", FIELD_HIDDEN);
  SetFieldListDesc(object, "valsallocated", "flag - indicates whether the vals and autoSAVEavi arrays are allocated");
  SetFieldListProt(object, "already_reset", FIELD_HIDDEN);
  SetFieldListDesc(object, "already_reset", "flag - indicates whether this has been reset: Additions/Deletions of messages are not allowed after a reset");
  object->description = "Portable binary file reading/writing Interface\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object variable */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "variable";
  tobject.type = "Gen_Variable_Type";
  tobject.size = sizeof(struct Gen_Variable_Type);
  { extern int Gen_Variable(); tobject.function = Gen_Variable; HashFunc("Gen_Variable", Gen_Variable, "int"); }
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("variable");
  object->defaults->object = object;
  object->defaults->name = CopyString("variable");
  object->author = "V.Jagadish Caltech 9/96";
  slotnames[0] = "data";
  MsgListAdd(object, "SAVE", variable_SAVE, slotnames, 1);
  { extern int Gen_Variable(); AddActionToObject(object, "CREATE", Gen_Variable, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'variable'\n")); HashFunc("Gen_Variable", Gen_Variable, "int"); }
  { extern int Gen_Variable(); AddActionToObject(object, "RESET", Gen_Variable, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'variable'\n")); HashFunc("Gen_Variable", Gen_Variable, "int"); }
  { extern int Gen_Variable(); AddActionToObject(object, "PROCESS", Gen_Variable, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'variable'\n")); HashFunc("Gen_Variable", Gen_Variable, "int"); }
  { extern int Gen_Variable(); AddActionToObject(object, "DELETE", Gen_Variable, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'variable'\n")); HashFunc("Gen_Variable", Gen_Variable, "int"); }
  { extern int Gen_Variable(); AddActionToObject(object, "SET", Gen_Variable, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'variable'\n")); HashFunc("Gen_Variable", Gen_Variable, "int"); }
  { extern int Gen_Variable(); AddActionToObject(object, "SHOW", Gen_Variable, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'variable'\n")); HashFunc("Gen_Variable", Gen_Variable, "int"); }
  { extern int Gen_Variable(); AddActionToObject(object, "ADDMSGIN", Gen_Variable, 0) ? 0 : (Error(), printf("adding action 'ADDMSGIN' to object 'variable'\n")); HashFunc("Gen_Variable", Gen_Variable, "int"); }
  { extern int Gen_Variable(); AddActionToObject(object, "UPDATE", Gen_Variable, 0) ? 0 : (Error(), printf("adding action 'UPDATE' to object 'variable'\n")); HashFunc("Gen_Variable", Gen_Variable, "int"); }
  { extern int Gen_Variable(); AddActionToObject(object, "FLUSH", Gen_Variable, 0) ? 0 : (Error(), printf("adding action 'FLUSH' to object 'variable'\n")); HashFunc("Gen_Variable", Gen_Variable, "int"); }
  SetFieldListProt(object, "output", FIELD_READONLY);
  SetFieldListDesc(object, "output", "The value of the variable for a particular input");
  SetFieldListProt(object, "avi", FIELD_HIDDEN);
  SetFieldListDesc(object, "avi", "Hidden handle to the variable interface struct");
  SetFieldListProt(object, "coordi", FIELD_HIDDEN);
  SetFieldListDesc(object, "coordi", "Hidden handle to the coordinate variable");
  SetFieldListProt(object, "start_time_index", FIELD_HIDDEN);
  SetFieldListDesc(object, "start_time_index", "Hidden count of time step");
  object->description = "Portable binary file data manipulator\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object metadata */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "metadata";
  tobject.type = "Gen_Metadata_Type";
  tobject.size = sizeof(struct Gen_Metadata_Type);
  { extern int Gen_Metadata(); tobject.function = Gen_Metadata; HashFunc("Gen_Metadata", Gen_Metadata, "int"); }
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("metadata");
  object->defaults->object = object;
  object->defaults->name = CopyString("metadata");
  object->author = "V.Jagadish Caltech 9/96";
  slotnames[0] = "data";
  MsgListAdd(object, "SAVE", metadata_SAVE, slotnames, 1);
  { extern int Gen_Metadata(); AddActionToObject(object, "CREATE", Gen_Metadata, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'metadata'\n")); HashFunc("Gen_Metadata", Gen_Metadata, "int"); }
  { extern int Gen_Metadata(); AddActionToObject(object, "RESET", Gen_Metadata, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'metadata'\n")); HashFunc("Gen_Metadata", Gen_Metadata, "int"); }
  { extern int Gen_Metadata(); AddActionToObject(object, "PROCESS", Gen_Metadata, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'metadata'\n")); HashFunc("Gen_Metadata", Gen_Metadata, "int"); }
  { extern int Gen_Metadata(); AddActionToObject(object, "DELETE", Gen_Metadata, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'metadata'\n")); HashFunc("Gen_Metadata", Gen_Metadata, "int"); }
  { extern int Gen_Metadata(); AddActionToObject(object, "SET", Gen_Metadata, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'metadata'\n")); HashFunc("Gen_Metadata", Gen_Metadata, "int"); }
  { extern int Gen_Metadata(); AddActionToObject(object, "SHOW", Gen_Metadata, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'metadata'\n")); HashFunc("Gen_Metadata", Gen_Metadata, "int"); }
  { extern int Gen_Metadata(); AddActionToObject(object, "ADDMSGIN", Gen_Metadata, 0) ? 0 : (Error(), printf("adding action 'ADDMSGIN' to object 'metadata'\n")); HashFunc("Gen_Metadata", Gen_Metadata, "int"); }
  { extern int Gen_Metadata(); AddActionToObject(object, "UPDATE", Gen_Metadata, 0) ? 0 : (Error(), printf("adding action 'UPDATE' to object 'metadata'\n")); HashFunc("Gen_Metadata", Gen_Metadata, "int"); }
  { extern int Gen_Metadata(); AddActionToObject(object, "FLUSH", Gen_Metadata, 0) ? 0 : (Error(), printf("adding action 'FLUSH' to object 'metadata'\n")); HashFunc("Gen_Metadata", Gen_Metadata, "int"); }
  SetFieldListProt(object, "amdi", FIELD_HIDDEN);
  SetFieldListDesc(object, "amdi", "Hidden handle to the metadata interface struct ");
  object->description = "Portable binary file metadata manipulator\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */

} /* STARTUP_diskio */
