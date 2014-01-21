#include <stdio.h>
#include "olf_ext.h"
#include "olf_g@.h"

void STARTUP_olf() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];
  { extern void SetupAlpha(); AddFunc("setupalpha", SetupAlpha, "void");   HashFunc("SetupAlpha", SetupAlpha, "void"); }
  { extern void SetupTau(); AddFunc("setuptau", SetupTau, "void");   HashFunc("SetupTau", SetupTau, "void"); }
  { extern void SetupGate(); AddFunc("setupgate", SetupGate, "void");   HashFunc("SetupGate", SetupGate, "void"); }
  { extern void SetupGHK(); AddFunc("setupghk", SetupGHK, "void");   HashFunc("SetupGHK", SetupGHK, "void"); }
  { extern void SetupNaCa(); AddFunc("setupNaCa", SetupNaCa, "void");   HashFunc("SetupNaCa", SetupNaCa, "void"); }
  { extern void TweakAlpha(); AddFunc("tweakalpha", TweakAlpha, "void");   HashFunc("TweakAlpha", TweakAlpha, "void"); }
  { extern void TweakTau(); AddFunc("tweaktau", TweakTau, "void");   HashFunc("TweakTau", TweakTau, "void"); }
  { extern void ScaleTabchan(); AddFunc("scaletabchan", ScaleTabchan, "void");   HashFunc("ScaleTabchan", ScaleTabchan, "void"); }
  { extern void DuplicateTable(); AddFunc("duplicatetable", DuplicateTable, "void");   HashFunc("DuplicateTable", DuplicateTable, "void"); }
  { extern void FileToTab(); AddFunc("file2tab", FileToTab, "void");   HashFunc("FileToTab", FileToTab, "void"); }
  { extern void TabToFile(); AddFunc("tab2file", TabToFile, "void");   HashFunc("TabToFile", TabToFile, "void"); }
  { extern void LoadTab(); AddFunc("loadtab", LoadTab, "void");   HashFunc("LoadTab", LoadTab, "void"); }
  AddAction("TABCREATE", 200);
  AddAction("TABFILL", 201);
  AddAction("TABDELETE", 202);
  AddAction("TABSAVE", 203);
  AddAction("TABREAD", 204);
  AddAction("TAB2FIELDS", 207);
  AddAction("TABOP", 208);

  /* Definition of object receptor */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "receptor";
  tobject.type = "olf_receptor_type";
  tobject.size = sizeof(struct olf_receptor_type);
  { extern int OlfReceptor(); tobject.function = OlfReceptor; HashFunc("OlfReceptor", OlfReceptor, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("receptor");
  object->defaults->object = object;
  object->defaults->name = CopyString("receptor");
  object->author = "U.S.Bhalla Caltech Jan/90";
  { extern int OlfReceptor(); AddActionToObject(object, "INIT", OlfReceptor, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'receptor'\n")); HashFunc("OlfReceptor", OlfReceptor, "int"); }
  { extern int OlfReceptor(); AddActionToObject(object, "PROCESS", OlfReceptor, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'receptor'\n")); HashFunc("OlfReceptor", OlfReceptor, "int"); }
  { extern int OlfReceptor(); AddActionToObject(object, "RESET", OlfReceptor, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'receptor'\n")); HashFunc("OlfReceptor", OlfReceptor, "int"); }
  { extern int OlfReceptor(); AddActionToObject(object, "CHECK", OlfReceptor, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'receptor'\n")); HashFunc("OlfReceptor", OlfReceptor, "int"); }
  { extern int OlfReceptor(); AddActionToObject(object, "RECALC", OlfReceptor, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'receptor'\n")); HashFunc("OlfReceptor", OlfReceptor, "int"); }
  { extern int OlfReceptor(); AddActionToObject(object, "SAVE2", OlfReceptor, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'receptor'\n")); HashFunc("OlfReceptor", OlfReceptor, "int"); }
  { extern int OlfReceptor(); AddActionToObject(object, "RESTORE2", OlfReceptor, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'receptor'\n")); HashFunc("OlfReceptor", OlfReceptor, "int"); }
  slotnames[0] = "strength";
  MsgListAdd(object, "ODOR", receptor_ODOR, slotnames, 1);
  slotnames[0] = "sensitivity";
  MsgListAdd(object, "GAIN", receptor_GAIN, slotnames, 1);
  object->description = "Does weighted sum of odors to get activity.\nGenerates both a memb voltage and a spike\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object receptor2 */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "receptor2";
  tobject.type = "olf_receptor2_type";
  tobject.size = sizeof(struct olf_receptor2_type);
  { extern int OlfReceptor2(); tobject.function = OlfReceptor2; HashFunc("OlfReceptor2", OlfReceptor2, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("receptor2");
  object->defaults->object = object;
  object->defaults->name = CopyString("receptor2");
  object->author = "U.S.Bhalla Caltech Jan/90";
  { extern int OlfReceptor2(); AddActionToObject(object, "INIT", OlfReceptor2, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'receptor2'\n")); HashFunc("OlfReceptor2", OlfReceptor2, "int"); }
  { extern int OlfReceptor2(); AddActionToObject(object, "PROCESS", OlfReceptor2, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'receptor2'\n")); HashFunc("OlfReceptor2", OlfReceptor2, "int"); }
  { extern int OlfReceptor2(); AddActionToObject(object, "RESET", OlfReceptor2, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'receptor2'\n")); HashFunc("OlfReceptor2", OlfReceptor2, "int"); }
  { extern int OlfReceptor2(); AddActionToObject(object, "SET", OlfReceptor2, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'receptor2'\n")); HashFunc("OlfReceptor2", OlfReceptor2, "int"); }
  { extern int OlfReceptor2(); AddActionToObject(object, "CHECK", OlfReceptor2, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'receptor2'\n")); HashFunc("OlfReceptor2", OlfReceptor2, "int"); }
  { extern int OlfReceptor2(); AddActionToObject(object, "RECALC", OlfReceptor2, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'receptor2'\n")); HashFunc("OlfReceptor2", OlfReceptor2, "int"); }
  { extern int OlfReceptor2(); AddActionToObject(object, "SAVE2", OlfReceptor2, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'receptor2'\n")); HashFunc("OlfReceptor2", OlfReceptor2, "int"); }
  { extern int OlfReceptor2(); AddActionToObject(object, "RESTORE2", OlfReceptor2, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'receptor2'\n")); HashFunc("OlfReceptor2", OlfReceptor2, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", receptor2_VOLTAGE, slotnames, 1);
  slotnames[0] = "activation";
  slotnames[1] = "odor_no";
  MsgListAdd(object, "ODOR", receptor2_ODOR, slotnames, 2);
  slotnames[0] = "modulation";
  MsgListAdd(object, "MODULATION", receptor2_MODULATION, slotnames, 1);
  object->description = "Does weighted sum of odors to get activation\nof a channel with usual conductance properties\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object disk_in */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "disk_in";
  tobject.type = "disk_in_type";
  tobject.size = sizeof(struct disk_in_type);
  { extern int DiskIn(); tobject.function = DiskIn; HashFunc("DiskIn", DiskIn, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("disk_in");
  object->defaults->object = object;
  object->defaults->name = CopyString("disk_in");
  object->author = "U.S.Bhalla Caltech Jan/90";
  { extern int DiskIn(); AddActionToObject(object, "INIT", DiskIn, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'disk_in'\n")); HashFunc("DiskIn", DiskIn, "int"); }
  { extern int DiskIn(); AddActionToObject(object, "PROCESS", DiskIn, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'disk_in'\n")); HashFunc("DiskIn", DiskIn, "int"); }
  { extern int DiskIn(); AddActionToObject(object, "RESET", DiskIn, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'disk_in'\n")); HashFunc("DiskIn", DiskIn, "int"); }
  { extern int DiskIn(); AddActionToObject(object, "SET", DiskIn, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'disk_in'\n")); HashFunc("DiskIn", DiskIn, "int"); }
  { extern int DiskIn(); AddActionToObject(object, "CHECK", DiskIn, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'disk_in'\n")); HashFunc("DiskIn", DiskIn, "int"); }
  { extern int DiskIn(); AddActionToObject(object, "RECALC", DiskIn, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'disk_in'\n")); HashFunc("DiskIn", DiskIn, "int"); }
  { extern int DiskIn(); AddActionToObject(object, "SHOW", DiskIn, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'disk_in'\n")); HashFunc("DiskIn", DiskIn, "int"); }
  SetFieldListProt(object, "tempdata", FIELD_HIDDEN);
  SetFieldListDesc(object, "tempdata", "temporary buffer for data");
  object->description = "Reads in a 2-d array of data from an ascii file.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object tabgate */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "tabgate";
  tobject.type = "tab_gate_type";
  tobject.size = sizeof(struct tab_gate_type);
  { extern int TabGate(); tobject.function = TabGate; HashFunc("TabGate", TabGate, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("gate"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("tabgate");
  object->defaults->object = object;
  object->defaults->name = CopyString("tabgate");
  object->author = "U.S.Bhalla Caltech Feb/90";
  { extern int TabGate(); AddActionToObject(object, "RESET", TabGate, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'tabgate'\n")); HashFunc("TabGate", TabGate, "int"); }
  { extern int TabGate(); AddActionToObject(object, "PROCESS", TabGate, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'tabgate'\n")); HashFunc("TabGate", TabGate, "int"); }
  { extern int TabGate(); AddActionToObject(object, "TABCREATE", TabGate, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'tabgate'\n")); HashFunc("TabGate", TabGate, "int"); }
  { extern int TabGate(); AddActionToObject(object, "TABFILL", TabGate, 0) ? 0 : (Error(), printf("adding action 'TABFILL' to object 'tabgate'\n")); HashFunc("TabGate", TabGate, "int"); }
  { extern int TabGate(); AddActionToObject(object, "SET", TabGate, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'tabgate'\n")); HashFunc("TabGate", TabGate, "int"); }
  { extern int TabGate(); AddActionToObject(object, "SAVE2", TabGate, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'tabgate'\n")); HashFunc("TabGate", TabGate, "int"); }
  { extern int TabGate(); AddActionToObject(object, "RESTORE2", TabGate, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'tabgate'\n")); HashFunc("TabGate", TabGate, "int"); }
  { extern int TabGate(); AddActionToObject(object, "DUMP", TabGate, 0) ? 0 : (Error(), printf("adding action 'DUMP' to object 'tabgate'\n")); HashFunc("TabGate", TabGate, "int"); }
  { extern int TabGate_CALC_MINF(); AddActionToObject(object, "CALC_MINF", TabGate_CALC_MINF, 0) ? 0 : (Error(), printf("adding action 'CALC_MINF' to object 'tabgate'\n")); HashFunc("TabGate_CALC_MINF", TabGate_CALC_MINF, "int"); }
  { extern int TabGate_CALC_ALPHA(); AddActionToObject(object, "CALC_ALPHA", TabGate_CALC_ALPHA, 0) ? 0 : (Error(), printf("adding action 'CALC_ALPHA' to object 'tabgate'\n")); HashFunc("TabGate_CALC_ALPHA", TabGate_CALC_ALPHA, "int"); }
  { extern int TabGate_CALC_BETA(); AddActionToObject(object, "CALC_BETA", TabGate_CALC_BETA, 0) ? 0 : (Error(), printf("adding action 'CALC_BETA' to object 'tabgate'\n")); HashFunc("TabGate_CALC_BETA", TabGate_CALC_BETA, "int"); }
  slotnames[0] = "voltage";
  MsgListAdd(object, "VOLTAGE", tabgate_VOLTAGE, slotnames, 1);
  slotnames[0] = "sum onto alpha func";
  MsgListAdd(object, "SUM_ALPHA", tabgate_SUM_ALPHA, slotnames, 1);
  slotnames[0] = "multiply onto alpha func";
  MsgListAdd(object, "PRD_ALPHA", tabgate_PRD_ALPHA, slotnames, 1);
  slotnames[0] = "sum onto beta func";
  MsgListAdd(object, "SUM_BETA", tabgate_SUM_BETA, slotnames, 1);
  slotnames[0] = "multiply onto beta func";
  MsgListAdd(object, "PRD_BETA", tabgate_PRD_BETA, slotnames, 1);
  slotnames[0] = "resting potl for resets";
  MsgListAdd(object, "EREST", tabgate_EREST, slotnames, 1);
  object->description = "A gate with tabulated dependencies on any field for\nopening and closing. Voltage and ion conc most\ncommon fields for dependencies.\nThe table for the object is created using tabcreate.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object table */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "table";
  tobject.type = "table_type";
  tobject.size = sizeof(struct table_type);
  { extern int TableFunc(); tobject.function = TableFunc; HashFunc("TableFunc", TableFunc, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("table");
  object->defaults->object = object;
  object->defaults->name = CopyString("table");
  object->author = "U.S.Bhalla Caltech Feb/90";
  { extern int TableFunc(); AddActionToObject(object, "RESET", TableFunc, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'table'\n")); HashFunc("TableFunc", TableFunc, "int"); }
  { extern int TableFunc(); AddActionToObject(object, "PROCESS", TableFunc, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'table'\n")); HashFunc("TableFunc", TableFunc, "int"); }
  { extern int TableFunc(); AddActionToObject(object, "TABCREATE", TableFunc, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'table'\n")); HashFunc("TableFunc", TableFunc, "int"); }
  { extern int TableFunc(); AddActionToObject(object, "TABFILL", TableFunc, 0) ? 0 : (Error(), printf("adding action 'TABFILL' to object 'table'\n")); HashFunc("TableFunc", TableFunc, "int"); }
  { extern int TableFunc(); AddActionToObject(object, "TAB2FIELDS", TableFunc, 0) ? 0 : (Error(), printf("adding action 'TAB2FIELDS' to object 'table'\n")); HashFunc("TableFunc", TableFunc, "int"); }
  { extern int TableFunc(); AddActionToObject(object, "TABOP", TableFunc, 0) ? 0 : (Error(), printf("adding action 'TABOP' to object 'table'\n")); HashFunc("TableFunc", TableFunc, "int"); }
  { extern int TableFunc(); AddActionToObject(object, "SET", TableFunc, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'table'\n")); HashFunc("TableFunc", TableFunc, "int"); }
  { extern int TableFunc(); AddActionToObject(object, "SHOW", TableFunc, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'table'\n")); HashFunc("TableFunc", TableFunc, "int"); }
  { extern int TableFunc(); AddActionToObject(object, "DUMP", TableFunc, 0) ? 0 : (Error(), printf("adding action 'DUMP' to object 'table'\n")); HashFunc("TableFunc", TableFunc, "int"); }
  slotnames[0] = "input";
  MsgListAdd(object, "INPUT", table_INPUT, slotnames, 1);
  slotnames[0] = "sum onto table";
  MsgListAdd(object, "SUM", table_SUM, slotnames, 1);
  slotnames[0] = "multiply onto table";
  MsgListAdd(object, "PRD", table_PRD, slotnames, 1);
  slotnames[0] = "input";
  slotnames[1] = "index";
  MsgListAdd(object, "INPUT2", table_INPUT2, slotnames, 2);
  object->description = "A table with a couple of message slots for adding\ndependencies on other fields.\nThe table for the object is created using tabcreate.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object table2D */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "table2D";
  tobject.type = "table2d_type";
  tobject.size = sizeof(struct table2d_type);
  { extern int Table2DFunc(); tobject.function = Table2DFunc; HashFunc("Table2DFunc", Table2DFunc, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("table2D");
  object->defaults->object = object;
  object->defaults->name = CopyString("table2D");
  object->author = "U.S.Bhalla MSSM May/93";
  { extern int Table2DFunc(); AddActionToObject(object, "RESET", Table2DFunc, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'table2D'\n")); HashFunc("Table2DFunc", Table2DFunc, "int"); }
  { extern int Table2DFunc(); AddActionToObject(object, "PROCESS", Table2DFunc, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'table2D'\n")); HashFunc("Table2DFunc", Table2DFunc, "int"); }
  { extern int Table2DFunc(); AddActionToObject(object, "TABCREATE", Table2DFunc, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'table2D'\n")); HashFunc("Table2DFunc", Table2DFunc, "int"); }
  { extern int Table2DFunc(); AddActionToObject(object, "TABFILL", Table2DFunc, 0) ? 0 : (Error(), printf("adding action 'TABFILL' to object 'table2D'\n")); HashFunc("Table2DFunc", Table2DFunc, "int"); }
  { extern int Table2DFunc(); AddActionToObject(object, "SET", Table2DFunc, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'table2D'\n")); HashFunc("Table2DFunc", Table2DFunc, "int"); }
  slotnames[0] = "inputx";
  slotnames[1] = "inputy";
  MsgListAdd(object, "INPUT", table2D_INPUT, slotnames, 2);
  slotnames[0] = "sum onto table";
  MsgListAdd(object, "SUM", table2D_SUM, slotnames, 1);
  slotnames[0] = "multiply onto table";
  MsgListAdd(object, "PRD", table2D_PRD, slotnames, 1);
  slotnames[0] = "inputx";
  MsgListAdd(object, "X", table2D_X, slotnames, 1);
  slotnames[0] = "inputy";
  MsgListAdd(object, "Y", table2D_Y, slotnames, 1);
  object->description = "A 2-d interpolation table \nThe table for the object is created using tabcreate.\nTABCREATE xdivs xmin xmax [ydivs ymin ymax]\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object tabchannel */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "tabchannel";
  tobject.type = "tab_channel_type";
  tobject.size = sizeof(struct tab_channel_type);
  { extern int TabChannel(); tobject.function = TabChannel; HashFunc("TabChannel", TabChannel, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("tabchannel");
  object->defaults->object = object;
  object->defaults->name = CopyString("tabchannel");
  object->author = "E. De Schutter Caltech Jan 91";
  { extern int TabChannel(); AddActionToObject(object, "CREATE", TabChannel, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel(); AddActionToObject(object, "INIT", TabChannel, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel(); AddActionToObject(object, "RESET", TabChannel, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel(); AddActionToObject(object, "PROCESS", TabChannel, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel(); AddActionToObject(object, "CHECK", TabChannel, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel(); AddActionToObject(object, "TABCREATE", TabChannel, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel(); AddActionToObject(object, "TABFILL", TabChannel, 0) ? 0 : (Error(), printf("adding action 'TABFILL' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel(); AddActionToObject(object, "TABDELETE", TabChannel, 0) ? 0 : (Error(), printf("adding action 'TABDELETE' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel_SAVE(); AddActionToObject(object, "TABSAVE", TabChannel_SAVE, 0) ? 0 : (Error(), printf("adding action 'TABSAVE' to object 'tabchannel'\n")); HashFunc("TabChannel_SAVE", TabChannel_SAVE, "int"); }
  { extern int TabChannel_READ(); AddActionToObject(object, "TABREAD", TabChannel_READ, 0) ? 0 : (Error(), printf("adding action 'TABREAD' to object 'tabchannel'\n")); HashFunc("TabChannel_READ", TabChannel_READ, "int"); }
  { extern int TabChannel(); AddActionToObject(object, "SET", TabChannel, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel(); AddActionToObject(object, "SHOW", TabChannel, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel(); AddActionToObject(object, "SAVE2", TabChannel, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel(); AddActionToObject(object, "RESTORE2", TabChannel, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel(); AddActionToObject(object, "DUMP", TabChannel, 0) ? 0 : (Error(), printf("adding action 'DUMP' to object 'tabchannel'\n")); HashFunc("TabChannel", TabChannel, "int"); }
  { extern int TabChannel_CALC_MINF(); AddActionToObject(object, "CALC_MINF", TabChannel_CALC_MINF, 0) ? 0 : (Error(), printf("adding action 'CALC_MINF' to object 'tabchannel'\n")); HashFunc("TabChannel_CALC_MINF", TabChannel_CALC_MINF, "int"); }
  { extern int TabChannel_CALC_ALPHA(); AddActionToObject(object, "CALC_ALPHA", TabChannel_CALC_ALPHA, 0) ? 0 : (Error(), printf("adding action 'CALC_ALPHA' to object 'tabchannel'\n")); HashFunc("TabChannel_CALC_ALPHA", TabChannel_CALC_ALPHA, "int"); }
  { extern int TabChannel_CALC_BETA(); AddActionToObject(object, "CALC_BETA", TabChannel_CALC_BETA, 0) ? 0 : (Error(), printf("adding action 'CALC_BETA' to object 'tabchannel'\n")); HashFunc("TabChannel_CALC_BETA", TabChannel_CALC_BETA, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", tabchannel_VOLTAGE, slotnames, 1);
  slotnames[0] = "C";
  MsgListAdd(object, "CONCEN", tabchannel_CONCEN, slotnames, 1);
  slotnames[0] = "Ik";
  slotnames[1] = "scaling_factor";
  MsgListAdd(object, "DOMAINCONC", tabchannel_DOMAINCONC, slotnames, 2);
  slotnames[0] = "Ek";
  MsgListAdd(object, "EK", tabchannel_EK, slotnames, 1);
  slotnames[0] = "offset";
  MsgListAdd(object, "ADD_GBAR", tabchannel_ADD_GBAR, slotnames, 1);
  object->description = "channel with tabulated equations\nThe table for the object is created using tabcreate,\nA-table contains alpha, B-table contains 1/tau,\nto minimize calculation time.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object tab2Dchannel */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "tab2Dchannel";
  tobject.type = "tab2channel_type";
  tobject.size = sizeof(struct tab2channel_type);
  { extern int Tab2DChannel(); tobject.function = Tab2DChannel; HashFunc("Tab2DChannel", Tab2DChannel, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("tab2Dchannel");
  object->defaults->object = object;
  object->defaults->name = CopyString("tab2Dchannel");
  object->author = "E. De Schutter, BBF-UIA Aug 94";
  { extern int Tab2DChannel(); AddActionToObject(object, "INIT", Tab2DChannel, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'tab2Dchannel'\n")); HashFunc("Tab2DChannel", Tab2DChannel, "int"); }
  { extern int Tab2DChannel(); AddActionToObject(object, "RESET", Tab2DChannel, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'tab2Dchannel'\n")); HashFunc("Tab2DChannel", Tab2DChannel, "int"); }
  { extern int Tab2DChannel(); AddActionToObject(object, "PROCESS", Tab2DChannel, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'tab2Dchannel'\n")); HashFunc("Tab2DChannel", Tab2DChannel, "int"); }
  { extern int Tab2DChannel(); AddActionToObject(object, "CHECK", Tab2DChannel, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'tab2Dchannel'\n")); HashFunc("Tab2DChannel", Tab2DChannel, "int"); }
  { extern int Tab2DChannel(); AddActionToObject(object, "TABCREATE", Tab2DChannel, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'tab2Dchannel'\n")); HashFunc("Tab2DChannel", Tab2DChannel, "int"); }
  { extern int Tab2DChannel(); AddActionToObject(object, "SET", Tab2DChannel, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'tab2Dchannel'\n")); HashFunc("Tab2DChannel", Tab2DChannel, "int"); }
  { extern int Tab2DChannel(); AddActionToObject(object, "SHOW", Tab2DChannel, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'tab2Dchannel'\n")); HashFunc("Tab2DChannel", Tab2DChannel, "int"); }
  { extern int Tab2DChannel(); AddActionToObject(object, "SAVE2", Tab2DChannel, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'tab2Dchannel'\n")); HashFunc("Tab2DChannel", Tab2DChannel, "int"); }
  { extern int Tab2DChannel(); AddActionToObject(object, "RESTORE2", Tab2DChannel, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'tab2Dchannel'\n")); HashFunc("Tab2DChannel", Tab2DChannel, "int"); }
  { extern int TabChannel_SAVE(); AddActionToObject(object, "TABSAVE", TabChannel_SAVE, 0) ? 0 : (Error(), printf("adding action 'TABSAVE' to object 'tab2Dchannel'\n")); HashFunc("TabChannel_SAVE", TabChannel_SAVE, "int"); }
  { extern int TabChannel_READ(); AddActionToObject(object, "TABREAD", TabChannel_READ, 0) ? 0 : (Error(), printf("adding action 'TABREAD' to object 'tab2Dchannel'\n")); HashFunc("TabChannel_READ", TabChannel_READ, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", tab2Dchannel_VOLTAGE, slotnames, 1);
  slotnames[0] = "C";
  MsgListAdd(object, "CONCEN", tab2Dchannel_CONCEN, slotnames, 1);
  slotnames[0] = "C";
  MsgListAdd(object, "CONCEN1", tab2Dchannel_CONCEN1, slotnames, 1);
  slotnames[0] = "C";
  MsgListAdd(object, "CONCEN2", tab2Dchannel_CONCEN2, slotnames, 1);
  slotnames[0] = "Ik";
  slotnames[1] = "scaling_factor";
  MsgListAdd(object, "DOMAINCONC", tab2Dchannel_DOMAINCONC, slotnames, 2);
  slotnames[0] = "Ek";
  MsgListAdd(object, "EK", tab2Dchannel_EK, slotnames, 1);
  slotnames[0] = "offset";
  MsgListAdd(object, "ADD_GBAR", tab2Dchannel_ADD_GBAR, slotnames, 1);
  object->description = "channel with 2D tabulated equations\nThe table for the object is created using tabcreate,\nA-table contains alpha, B-table contains 1/tau,\nto minimize calculation time.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object tabcurrent */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "tabcurrent";
  tobject.type = "tab_current_type";
  tobject.size = sizeof(struct tab_current_type);
  { extern int TabCurrent(); tobject.function = TabCurrent; HashFunc("TabCurrent", TabCurrent, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("tabcurrent");
  object->defaults->object = object;
  object->defaults->name = CopyString("tabcurrent");
  object->author = "E. De Schutter, BBF-UIA Feb 95";
  { extern int TabCurrent(); AddActionToObject(object, "RESET", TabCurrent, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'tabcurrent'\n")); HashFunc("TabCurrent", TabCurrent, "int"); }
  { extern int TabCurrent(); AddActionToObject(object, "PROCESS", TabCurrent, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'tabcurrent'\n")); HashFunc("TabCurrent", TabCurrent, "int"); }
  { extern int TabCurrent(); AddActionToObject(object, "CHECK", TabCurrent, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'tabcurrent'\n")); HashFunc("TabCurrent", TabCurrent, "int"); }
  { extern int TabCurrent(); AddActionToObject(object, "SHOW", TabCurrent, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'tabcurrent'\n")); HashFunc("TabCurrent", TabCurrent, "int"); }
  { extern int TabCurrent(); AddActionToObject(object, "TABCREATE", TabCurrent, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'tabcurrent'\n")); HashFunc("TabCurrent", TabCurrent, "int"); }
  { extern int TabChannel_SAVE(); AddActionToObject(object, "TABSAVE", TabChannel_SAVE, 0) ? 0 : (Error(), printf("adding action 'TABSAVE' to object 'tabcurrent'\n")); HashFunc("TabChannel_SAVE", TabChannel_SAVE, "int"); }
  { extern int TabChannel_READ(); AddActionToObject(object, "TABREAD", TabChannel_READ, 0) ? 0 : (Error(), printf("adding action 'TABREAD' to object 'tabcurrent'\n")); HashFunc("TabChannel_READ", TabChannel_READ, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", tabcurrent_VOLTAGE, slotnames, 1);
  slotnames[0] = "C";
  MsgListAdd(object, "CONCEN", tabcurrent_CONCEN, slotnames, 1);
  slotnames[0] = "C";
  MsgListAdd(object, "CONCEN1", tabcurrent_CONCEN1, slotnames, 1);
  slotnames[0] = "C";
  MsgListAdd(object, "CONCEN2", tabcurrent_CONCEN2, slotnames, 1);
  slotnames[0] = "Ik";
  slotnames[1] = "scaling_factor";
  MsgListAdd(object, "DOMAINCONC", tabcurrent_DOMAINCONC, slotnames, 2);
  slotnames[0] = "permeability";
  MsgListAdd(object, "ADD_GBAR", tabcurrent_ADD_GBAR, slotnames, 1);
  object->description = "tabulated ionic current.\nThis requires values for Ik and for the slope conductance\nGk'.  Ek is computed assuming linearity over one timestep.\nChanges are instantenous.  Can also be used to compute\nthe Goldman-Hodgkin-Katz equation using the ADD_GBAR\nmessage to change the calcium permeability.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object ddsyn */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "ddsyn";
  tobject.type = "dd_syn_type";
  tobject.size = sizeof(struct dd_syn_type);
  { extern int DDSyn(); tobject.function = DDSyn; HashFunc("DDSyn", DDSyn, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("ddsyn");
  object->defaults->object = object;
  object->defaults->name = CopyString("ddsyn");
  object->author = "Upinder S. Bhalla, Caltech May 91";
  { extern int DDSyn(); AddActionToObject(object, "INIT", DDSyn, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'ddsyn'\n")); HashFunc("DDSyn", DDSyn, "int"); }
  { extern int DDSyn(); AddActionToObject(object, "RESET", DDSyn, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'ddsyn'\n")); HashFunc("DDSyn", DDSyn, "int"); }
  { extern int DDSyn(); AddActionToObject(object, "PROCESS", DDSyn, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'ddsyn'\n")); HashFunc("DDSyn", DDSyn, "int"); }
  { extern int DDSyn(); AddActionToObject(object, "CHECK", DDSyn, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'ddsyn'\n")); HashFunc("DDSyn", DDSyn, "int"); }
  { extern int DDSyn(); AddActionToObject(object, "SET", DDSyn, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'ddsyn'\n")); HashFunc("DDSyn", DDSyn, "int"); }
  { extern int DDSyn(); AddActionToObject(object, "TABCREATE", DDSyn, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'ddsyn'\n")); HashFunc("DDSyn", DDSyn, "int"); }
  { extern int DDSyn(); AddActionToObject(object, "TABFILL", DDSyn, 0) ? 0 : (Error(), printf("adding action 'TABFILL' to object 'ddsyn'\n")); HashFunc("DDSyn", DDSyn, "int"); }
  { extern int DDSyn(); AddActionToObject(object, "SAVE2", DDSyn, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'ddsyn'\n")); HashFunc("DDSyn", DDSyn, "int"); }
  { extern int DDSyn(); AddActionToObject(object, "RESTORE2", DDSyn, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'ddsyn'\n")); HashFunc("DDSyn", DDSyn, "int"); }
  { extern int DDSyn(); AddActionToObject(object, "DUMP", DDSyn, 0) ? 0 : (Error(), printf("adding action 'DUMP' to object 'ddsyn'\n")); HashFunc("DDSyn", DDSyn, "int"); }
  slotnames[0] = "voltage";
  MsgListAdd(object, "VOLTAGE", ddsyn_VOLTAGE, slotnames, 1);
  slotnames[0] = "activation";
  MsgListAdd(object, "ACTIVATION", ddsyn_ACTIVATION, slotnames, 1);
  slotnames[0] = "presyn voltage";
  MsgListAdd(object, "V_PRESYN", ddsyn_V_PRESYN, slotnames, 1);
  slotnames[0] = "probability";
  slotnames[1] = "amplitude";
  MsgListAdd(object, "RAND_ACTIVATION", ddsyn_RAND_ACTIVATION, slotnames, 2);
  object->description = "dendrodendritic synapse with tabulated transform\nfrom presyn potential to postsyn activation.\nThe table for the transform is created using tabcreate\nand is shared with all copies of the element\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */
  CreateScriptInt("INSTANTZ");
  SetScriptInt("INSTANTZ", 4);
  CreateScriptInt("INSTANTY");
  SetScriptInt("INSTANTY", 2);
  CreateScriptInt("INSTANTX");
  SetScriptInt("INSTANTX", 1);
  CreateScriptInt("DOMAIN_C2_INDEX");
  SetScriptInt("DOMAIN_C2_INDEX", -5);
  CreateScriptInt("C1_C2_INDEX");
  SetScriptInt("C1_C2_INDEX", -4);
  CreateScriptInt("VOLT_DOMAIN_INDEX");
  SetScriptInt("VOLT_DOMAIN_INDEX", -3);
  CreateScriptInt("VOLT_C2_INDEX");
  SetScriptInt("VOLT_C2_INDEX", -2);
  CreateScriptInt("VOLT_C1_INDEX");
  SetScriptInt("VOLT_C1_INDEX", -1);
  CreateScriptInt("DOMAIN_INDEX");
  SetScriptInt("DOMAIN_INDEX", 3);
  CreateScriptInt("C2_INDEX");
  SetScriptInt("C2_INDEX", 2);
  CreateScriptInt("C1_INDEX");
  SetScriptInt("C1_INDEX", 1);
  CreateScriptInt("VOLT_INDEX");
  SetScriptInt("VOLT_INDEX", 0);
  CreateScriptInt("FIXED");
  SetScriptInt("FIXED", 2);
  CreateScriptInt("LIN_INTERP");
  SetScriptInt("LIN_INTERP", 1);
  CreateScriptInt("NO_INTERP");
  SetScriptInt("NO_INTERP", 0);
  CreateScriptInt("LINEAR_FILL");
  SetScriptInt("LINEAR_FILL", 2);
  CreateScriptInt("C_SPLINE_FILL");
  SetScriptInt("C_SPLINE_FILL", 1);
  CreateScriptInt("B_SPLINE_FILL");
  SetScriptInt("B_SPLINE_FILL", 0);

} /* STARTUP_olf */
