#include <stdio.h>
#include "out_ext.h"
#include "output_g@.h"

void STARTUP_output() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  argv[0] = "newclass";
  argv[1] = "output";
  do_add_class(2, argv);
  AddAction("FLUSH", 1001);
  AddAction("OUT_OPEN", 1002);
  AddAction("OUT_WRITE", 1003);

  /* Definition of object print_out */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "print_out";
  tobject.type = "output_type";
  tobject.size = sizeof(struct output_type);
  { extern int PrintOutput(); tobject.function = PrintOutput; HashFunc("PrintOutput", PrintOutput, "int"); }
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("print_out");
  object->defaults->object = object;
  object->defaults->name = CopyString("print_out");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object disk_out */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "disk_out";
  tobject.type = "file_type";
  tobject.size = sizeof(struct file_type);
  { extern int FileOutput(); tobject.function = FileOutput; HashFunc("FileOutput", FileOutput, "int"); }
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("disk_out");
  object->defaults->object = object;
  object->defaults->name = CopyString("disk_out");
  object->author = "M.Wilson Caltech 6/88";
  slotnames[0] = "data";
  MsgListAdd(object, "SAVE", disk_out_SAVE, slotnames, 1);
  { extern int FileOutput(); AddActionToObject(object, "RESET", FileOutput, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'disk_out'\n")); HashFunc("FileOutput", FileOutput, "int"); }
  { extern int FileOutput(); AddActionToObject(object, "PROCESS", FileOutput, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'disk_out'\n")); HashFunc("FileOutput", FileOutput, "int"); }
  { extern int FileOutput(); AddActionToObject(object, "DELETE", FileOutput, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'disk_out'\n")); HashFunc("FileOutput", FileOutput, "int"); }
  { extern int FileOutput(); AddActionToObject(object, "SAVE", FileOutput, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'disk_out'\n")); HashFunc("FileOutput", FileOutput, "int"); }
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object par_disk_out */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "par_disk_out";
  tobject.type = "file_type";
  tobject.size = sizeof(struct file_type);
  { extern int ParFileOutput(); tobject.function = ParFileOutput; HashFunc("ParFileOutput", ParFileOutput, "int"); }
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("par_disk_out");
  object->defaults->object = object;
  object->defaults->name = CopyString("par_disk_out");
  object->author = "G.Hood PSC 5/96";
  slotnames[0] = "index";
  slotnames[1] = "data";
  MsgListAdd(object, "SAVE", par_disk_out_SAVE, slotnames, 2);
  { extern int ParFileOutput(); AddActionToObject(object, "RESET", ParFileOutput, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'par_disk_out'\n")); HashFunc("ParFileOutput", ParFileOutput, "int"); }
  { extern int ParFileOutput(); AddActionToObject(object, "PROCESS", ParFileOutput, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'par_disk_out'\n")); HashFunc("ParFileOutput", ParFileOutput, "int"); }
  { extern int ParFileOutput(); AddActionToObject(object, "DELETE", ParFileOutput, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'par_disk_out'\n")); HashFunc("ParFileOutput", ParFileOutput, "int"); }
  { extern int ParFileOutput(); AddActionToObject(object, "SAVE", ParFileOutput, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'par_disk_out'\n")); HashFunc("ParFileOutput", ParFileOutput, "int"); }
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xviewdata */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xviewdata";
  tobject.type = "xviewfile_type";
  tobject.size = sizeof(struct xviewfile_type);
  { extern int XviewFileOutput(); tobject.function = XviewFileOutput; HashFunc("XviewFileOutput", XviewFileOutput, "int"); }
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xviewdata");
  object->defaults->object = object;
  object->defaults->name = CopyString("xviewdata");
  object->author = "M.Wilson Caltech 2/89";
  slotnames[0] = "data";
  MsgListAdd(object, "SAVE", xviewdata_SAVE, slotnames, 1);
  { extern int XviewFileOutput(); AddActionToObject(object, "RESET", XviewFileOutput, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xviewdata'\n")); HashFunc("XviewFileOutput", XviewFileOutput, "int"); }
  { extern int XviewFileOutput(); AddActionToObject(object, "PROCESS", XviewFileOutput, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xviewdata'\n")); HashFunc("XviewFileOutput", XviewFileOutput, "int"); }
  { extern int XviewFileOutput(); AddActionToObject(object, "DELETE", XviewFileOutput, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xviewdata'\n")); HashFunc("XviewFileOutput", XviewFileOutput, "int"); }
  { extern int XviewFileOutput(); AddActionToObject(object, "SAVE", XviewFileOutput, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'xviewdata'\n")); HashFunc("XviewFileOutput", XviewFileOutput, "int"); }
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object script_out */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "script_out";
  tobject.type = "script_output_type";
  tobject.size = sizeof(struct script_output_type);
  { extern int ScriptOutput(); tobject.function = ScriptOutput; HashFunc("ScriptOutput", ScriptOutput, "int"); }
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("script_out");
  object->defaults->object = object;
  object->defaults->name = CopyString("script_out");
  object->author = "M.Wilson Caltech 2/89";
  { extern int ScriptOutput(); AddActionToObject(object, "PROCESS", ScriptOutput, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'script_out'\n")); HashFunc("ScriptOutput", ScriptOutput, "int"); }
  { extern int ScriptOutput(); AddActionToObject(object, "RESET", ScriptOutput, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'script_out'\n")); HashFunc("ScriptOutput", ScriptOutput, "int"); }
  { extern int ScriptOutput(); AddActionToObject(object, "RECALC", ScriptOutput, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'script_out'\n")); HashFunc("ScriptOutput", ScriptOutput, "int"); }
  { extern int ScriptOutput(); AddActionToObject(object, "SET", ScriptOutput, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'script_out'\n")); HashFunc("ScriptOutput", ScriptOutput, "int"); }
  SetFieldListProt(object, "command", FIELD_READWRITE);
  SetFieldListDesc(object, "command", "Command to execute when the object is scheduled");
  SetFieldListProt(object, "argc", FIELD_READONLY);
  SetFieldListDesc(object, "argc", "Internal use only");
  SetFieldListProt(object, "argv", FIELD_READONLY);
  SetFieldListDesc(object, "argv", "Internal use only");
  object->description = "executes a script command during a simulation\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object asc_file */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "asc_file";
  tobject.type = "ascfile_type";
  tobject.size = sizeof(struct ascfile_type);
  { extern int AscFileOutput(); tobject.function = AscFileOutput; HashFunc("AscFileOutput", AscFileOutput, "int"); }
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("asc_file");
  object->defaults->object = object;
  object->defaults->name = CopyString("asc_file");
  object->author = "M.Wilson Caltech 4/89";
  slotnames[0] = "data";
  MsgListAdd(object, "SAVE", asc_file_SAVE, slotnames, 1);
  { extern int AscFileOutput(); AddActionToObject(object, "CREATE", AscFileOutput, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'asc_file'\n")); HashFunc("AscFileOutput", AscFileOutput, "int"); }
  { extern int AscFileOutput(); AddActionToObject(object, "RESET", AscFileOutput, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'asc_file'\n")); HashFunc("AscFileOutput", AscFileOutput, "int"); }
  { extern int AscFileOutput(); AddActionToObject(object, "PROCESS", AscFileOutput, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'asc_file'\n")); HashFunc("AscFileOutput", AscFileOutput, "int"); }
  { extern int AscFileOutput(); AddActionToObject(object, "DELETE", AscFileOutput, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'asc_file'\n")); HashFunc("AscFileOutput", AscFileOutput, "int"); }
  { extern int AscFileOutput(); AddActionToObject(object, "SAVE", AscFileOutput, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'asc_file'\n")); HashFunc("AscFileOutput", AscFileOutput, "int"); }
  { extern int AscFileOutput(); AddActionToObject(object, "FLUSH", AscFileOutput, 0) ? 0 : (Error(), printf("adding action 'FLUSH' to object 'asc_file'\n")); HashFunc("AscFileOutput", AscFileOutput, "int"); }
  { extern int AscFileOutput(); AddActionToObject(object, "OUT_OPEN", AscFileOutput, 0) ? 0 : (Error(), printf("adding action 'OUT_OPEN' to object 'asc_file'\n")); HashFunc("AscFileOutput", AscFileOutput, "int"); }
  { extern int AscFileOutput(); AddActionToObject(object, "OUT_WRITE", AscFileOutput, 0) ? 0 : (Error(), printf("adding action 'OUT_WRITE' to object 'asc_file'\n")); HashFunc("AscFileOutput", AscFileOutput, "int"); }
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object par_asc_file */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "par_asc_file";
  tobject.type = "ascfile_type";
  tobject.size = sizeof(struct ascfile_type);
  { extern int ParAscFileOutput(); tobject.function = ParAscFileOutput; HashFunc("ParAscFileOutput", ParAscFileOutput, "int"); }
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("par_asc_file");
  object->defaults->object = object;
  object->defaults->name = CopyString("par_asc_file");
  object->author = "G.Hood PSC 5/96";
  slotnames[0] = "index";
  slotnames[1] = "data";
  MsgListAdd(object, "SAVE", par_asc_file_SAVE, slotnames, 2);
  { extern int ParAscFileOutput(); AddActionToObject(object, "CREATE", ParAscFileOutput, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'par_asc_file'\n")); HashFunc("ParAscFileOutput", ParAscFileOutput, "int"); }
  { extern int ParAscFileOutput(); AddActionToObject(object, "RESET", ParAscFileOutput, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'par_asc_file'\n")); HashFunc("ParAscFileOutput", ParAscFileOutput, "int"); }
  { extern int ParAscFileOutput(); AddActionToObject(object, "PROCESS", ParAscFileOutput, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'par_asc_file'\n")); HashFunc("ParAscFileOutput", ParAscFileOutput, "int"); }
  { extern int ParAscFileOutput(); AddActionToObject(object, "DELETE", ParAscFileOutput, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'par_asc_file'\n")); HashFunc("ParAscFileOutput", ParAscFileOutput, "int"); }
  { extern int ParAscFileOutput(); AddActionToObject(object, "SAVE", ParAscFileOutput, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'par_asc_file'\n")); HashFunc("ParAscFileOutput", ParAscFileOutput, "int"); }
  { extern int ParAscFileOutput(); AddActionToObject(object, "FLUSH", ParAscFileOutput, 0) ? 0 : (Error(), printf("adding action 'FLUSH' to object 'par_asc_file'\n")); HashFunc("ParAscFileOutput", ParAscFileOutput, "int"); }
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object res_asc_file */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "res_asc_file";
  tobject.type = "res_ascfile_type";
  tobject.size = sizeof(struct res_ascfile_type);
  { extern int ResAscFileOutput(); tobject.function = ResAscFileOutput; HashFunc("ResAscFileOutput", ResAscFileOutput, "int"); }
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("res_asc_file");
  object->defaults->object = object;
  object->defaults->name = CopyString("res_asc_file");
  object->author = "E. De Schutter Caltech 11/92";
  slotnames[0] = "data";
  MsgListAdd(object, "SAVE", res_asc_file_SAVE, slotnames, 1);
  { extern int ResAscFileOutput(); AddActionToObject(object, "CREATE", ResAscFileOutput, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'res_asc_file'\n")); HashFunc("ResAscFileOutput", ResAscFileOutput, "int"); }
  { extern int ResAscFileOutput(); AddActionToObject(object, "RESET", ResAscFileOutput, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'res_asc_file'\n")); HashFunc("ResAscFileOutput", ResAscFileOutput, "int"); }
  { extern int ResAscFileOutput(); AddActionToObject(object, "PROCESS", ResAscFileOutput, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'res_asc_file'\n")); HashFunc("ResAscFileOutput", ResAscFileOutput, "int"); }
  { extern int ResAscFileOutput(); AddActionToObject(object, "DELETE", ResAscFileOutput, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'res_asc_file'\n")); HashFunc("ResAscFileOutput", ResAscFileOutput, "int"); }
  { extern int ResAscFileOutput(); AddActionToObject(object, "SAVE", ResAscFileOutput, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'res_asc_file'\n")); HashFunc("ResAscFileOutput", ResAscFileOutput, "int"); }
  object->description = "asc_file that outputs points separated by at least\ntime_res (X-axis) or value_res (Y-axis)\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object spikehistory */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "spikehistory";
  tobject.type = "spikehistory_type";
  tobject.size = sizeof(struct spikehistory_type);
  { extern int SpikeHistory(); tobject.function = SpikeHistory; HashFunc("SpikeHistory", SpikeHistory, "int"); }
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("spikehistory");
  object->defaults->object = object;
  object->defaults->name = CopyString("spikehistory");
  object->author = "R. Maex BBF-UIA 1/96";
  MsgListAdd(object, "SPIKESAVE", spikehistory_SPIKESAVE, slotnames, 0);
  { extern int SpikeHistory(); AddActionToObject(object, "RESET", SpikeHistory, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'spikehistory'\n")); HashFunc("SpikeHistory", SpikeHistory, "int"); }
  { extern int SpikeHistory(); AddActionToObject(object, "EVENT", SpikeHistory, 0) ? 0 : (Error(), printf("adding action 'EVENT' to object 'spikehistory'\n")); HashFunc("SpikeHistory", SpikeHistory, "int"); }
  { extern int SpikeHistory(); AddActionToObject(object, "SAVE", SpikeHistory, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'spikehistory'\n")); HashFunc("SpikeHistory", SpikeHistory, "int"); }
  { extern int SpikeHistory(); AddActionToObject(object, "FLUSH", SpikeHistory, 0) ? 0 : (Error(), printf("adding action 'FLUSH' to object 'spikehistory'\n")); HashFunc("SpikeHistory", SpikeHistory, "int"); }
  object->description = "Records the simulation time and a neuron identification\nlabel into an ascii file each time a spike event is\nreceived.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);
  { extern void do_ascii_convert(); AddFunc("asciidata", do_ascii_convert, "void");   HashFunc("do_ascii_convert", do_ascii_convert, "void"); }

/* Script variables */

} /* STARTUP_output */
