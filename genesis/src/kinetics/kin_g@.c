#include <stdio.h>
#include "kin_ext.h"
#include "kin_g@.h"

void STARTUP_kin() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];
  { extern void copyleft_kin(); copyleft_kin(); }
  { extern void copyleft_kin(); AddFunc("copyleft_kin", copyleft_kin, "void");   HashFunc("copyleft_kin", copyleft_kin, "void"); }
  { extern void do_reset_alloc_msgdata(); AddFunc("resetfastmsg", do_reset_alloc_msgdata, "void");   HashFunc("do_reset_alloc_msgdata", do_reset_alloc_msgdata, "void"); }
  { extern void do_clone_msgs(); AddFunc("clonemsgs", do_clone_msgs, "void");   HashFunc("do_clone_msgs", do_clone_msgs, "void"); }
  { extern char** do_dir_list(); AddFunc("dirlist", do_dir_list, "char**");   HashFunc("do_dir_list", do_dir_list, "char**"); }
  { extern int do_file_exists(); AddFunc("fileexists", do_file_exists, "int");   HashFunc("do_file_exists", do_file_exists, "int"); }
  { extern int do_max_file_version(); AddFunc("maxfileversion", do_max_file_version, "int");   HashFunc("do_max_file_version", do_max_file_version, "int"); }
  { extern int do_srandom2(); AddFunc("randseed2", do_srandom2, "int");   HashFunc("do_srandom2", do_srandom2, "int"); }
  AddAction("TO_XTEXT", 225);
  AddAction("FROM_XTEXT", 226);
  AddAction("LOAD", 227);

  /* Definition of object pool */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "pool";
  tobject.type = "pool_type";
  tobject.size = sizeof(struct pool_type);
  { extern int PoolFunc(); tobject.function = PoolFunc; HashFunc("PoolFunc", PoolFunc, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("concentration"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("pool");
  object->defaults->object = object;
  object->defaults->name = CopyString("pool");
  object->author = "U.S.Bhalla MSSM Aug/93";
  { extern int PoolFunc(); AddActionToObject(object, "CREATE", PoolFunc, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'pool'\n")); HashFunc("PoolFunc", PoolFunc, "int"); }
  { extern int PoolFunc(); AddActionToObject(object, "RESET", PoolFunc, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'pool'\n")); HashFunc("PoolFunc", PoolFunc, "int"); }
  { extern int PoolFunc(); AddActionToObject(object, "PROCESS", PoolFunc, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'pool'\n")); HashFunc("PoolFunc", PoolFunc, "int"); }
  { extern int PoolFunc(); AddActionToObject(object, "SET", PoolFunc, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'pool'\n")); HashFunc("PoolFunc", PoolFunc, "int"); }
  slotnames[0] = "A";
  slotnames[1] = "B";
  MsgListAdd(object, "REAC", pool_REAC, slotnames, 2);
  slotnames[0] = "A";
  MsgListAdd(object, "MM_PRD", pool_MM_PRD, slotnames, 1);
  slotnames[0] = "n";
  MsgListAdd(object, "SLAVE", pool_SLAVE, slotnames, 1);
  slotnames[0] = "n";
  MsgListAdd(object, "REMAINING", pool_REMAINING, slotnames, 1);
  slotnames[0] = "n";
  slotnames[1] = "nInit";
  MsgListAdd(object, "CONSERVE", pool_CONSERVE, slotnames, 2);
  slotnames[0] = "vol";
  MsgListAdd(object, "VOL", pool_VOL, slotnames, 1);
  slotnames[0] = "n";
  slotnames[1] = "nInit";
  MsgListAdd(object, "SUMTOTAL", pool_SUMTOTAL, slotnames, 2);
  slotnames[0] = "n";
  MsgListAdd(object, "MIRROR", pool_MIRROR, slotnames, 1);
  object->description = "A concentration pool used in reactions.\nDoes Michaelis-Menten enzyme kinetics when hooked to the 'enz'\nobject, and standard kinetic reactions with the 'reac' object.\nThe MM scheme is modeled as:\n				 k1		k3\n Substrate (S) + Enzyme (Co)  <----> CoComplex ----> Co + Prd\n				k2\nThe Bimol scheme is:\n				 kf\n Substrate1 + S2 + ..         <----> Co + Prd1 + Prd2 + ...\n				kb\nNote that vol, n and Co are interdependent. vol is never changed\nexcept by the user or by messages. n changes if Co is changed.\nCo changes if either vol or n is changed. All calculations are\ndone in terms of n, and, where needed, vol.\n'pool' should be considered the foundation class for more complex\nobjects which do e.g., diffusion and nernst potentials\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object reac */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "reac";
  tobject.type = "reac_type";
  tobject.size = sizeof(struct reac_type);
  { extern int ReacFunc(); tobject.function = ReacFunc; HashFunc("ReacFunc", ReacFunc, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("reac");
  object->defaults->object = object;
  object->defaults->name = CopyString("reac");
  object->author = "U.S.Bhalla MSSM Aug/93";
  { extern int ReacFunc(); AddActionToObject(object, "CREATE", ReacFunc, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'reac'\n")); HashFunc("ReacFunc", ReacFunc, "int"); }
  { extern int ReacFunc(); AddActionToObject(object, "RESET", ReacFunc, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'reac'\n")); HashFunc("ReacFunc", ReacFunc, "int"); }
  { extern int ReacFunc(); AddActionToObject(object, "PROCESS", ReacFunc, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'reac'\n")); HashFunc("ReacFunc", ReacFunc, "int"); }
  { extern int ReacFunc(); AddActionToObject(object, "SET", ReacFunc, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'reac'\n")); HashFunc("ReacFunc", ReacFunc, "int"); }
  { extern int ReacFunc(); AddActionToObject(object, "SHOW", ReacFunc, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'reac'\n")); HashFunc("ReacFunc", ReacFunc, "int"); }
  slotnames[0] = "n";
  MsgListAdd(object, "SUBSTRATE", reac_SUBSTRATE, slotnames, 1);
  slotnames[0] = "n";
  MsgListAdd(object, "PRODUCT", reac_PRODUCT, slotnames, 1);
  slotnames[0] = "kf";
  MsgListAdd(object, "KF", reac_KF, slotnames, 1);
  slotnames[0] = "kb";
  MsgListAdd(object, "KB", reac_KB, slotnames, 1);
  object->description = "A reaction kinetics element which handles \nstandard kinetic reaction schemes for any number of substrates\nand products. Can interface with 'pool'. The state variables \nA and B are used in the return messages to the substrates and\nproducts, except that they are swapped for the products.\nThe Bimol scheme is:\n				 kf\n Substrate1 + S2 + ..         <----> Co + Prd1 + Prd2 + ...\n				kb\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object enz */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "enz";
  tobject.type = "enz_type";
  tobject.size = sizeof(struct enz_type);
  { extern int EnzFunc(); tobject.function = EnzFunc; HashFunc("EnzFunc", EnzFunc, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("enz");
  object->defaults->object = object;
  object->defaults->name = CopyString("enz");
  object->author = "U.S.Bhalla MSSM Aug/93";
  { extern int EnzFunc(); AddActionToObject(object, "CREATE", EnzFunc, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'enz'\n")); HashFunc("EnzFunc", EnzFunc, "int"); }
  { extern int EnzFunc(); AddActionToObject(object, "RESET", EnzFunc, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'enz'\n")); HashFunc("EnzFunc", EnzFunc, "int"); }
  { extern int EnzFunc(); AddActionToObject(object, "PROCESS", EnzFunc, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'enz'\n")); HashFunc("EnzFunc", EnzFunc, "int"); }
  { extern int EnzFunc(); AddActionToObject(object, "SET", EnzFunc, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'enz'\n")); HashFunc("EnzFunc", EnzFunc, "int"); }
  slotnames[0] = "n";
  MsgListAdd(object, "ENZYME", enz_ENZYME, slotnames, 1);
  slotnames[0] = "n";
  MsgListAdd(object, "SUBSTRATE", enz_SUBSTRATE, slotnames, 1);
  slotnames[0] = "vol";
  MsgListAdd(object, "VOL", enz_VOL, slotnames, 1);
  slotnames[0] = "n";
  MsgListAdd(object, "INTRAMOL", enz_INTRAMOL, slotnames, 1);
  object->description = "A reaction kinetics element which handles \nMichaelis-Menten enzyme kinetics for the 'pool' object\nThere can be multiple SUBSTRATE pools but only 1 enzyme pool \nThe MM scheme is modeled as:\n				 k1		k3\n Substrate (S) + Enzyme (Co)  <----> CoComplex ----> Co + Prd\n				k2\nThe fields for the return messages are:\nto the enzyme: eA and B\nto the substrate(s): sA and B\nto the product(s): pA\nThe INTRAMOL msg sets total # of molecules in intramol reacn.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object concchan */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "concchan";
  tobject.type = "concchan_type";
  tobject.size = sizeof(struct concchan_type);
  { extern int ConcchanFunc(); tobject.function = ConcchanFunc; HashFunc("ConcchanFunc", ConcchanFunc, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("concchan");
  object->defaults->object = object;
  object->defaults->name = CopyString("concchan");
  object->author = "U.S.Bhalla MSSM Aug/93";
  { extern int ConcchanFunc(); AddActionToObject(object, "RESET", ConcchanFunc, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'concchan'\n")); HashFunc("ConcchanFunc", ConcchanFunc, "int"); }
  { extern int ConcchanFunc(); AddActionToObject(object, "PROCESS", ConcchanFunc, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'concchan'\n")); HashFunc("ConcchanFunc", ConcchanFunc, "int"); }
  { extern int ConcchanFunc(); AddActionToObject(object, "SET", ConcchanFunc, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'concchan'\n")); HashFunc("ConcchanFunc", ConcchanFunc, "int"); }
  slotnames[0] = "n";
  slotnames[1] = "vol";
  MsgListAdd(object, "SUBSTRATE", concchan_SUBSTRATE, slotnames, 2);
  slotnames[0] = "n";
  slotnames[1] = "vol";
  MsgListAdd(object, "PRODUCT", concchan_PRODUCT, slotnames, 2);
  slotnames[0] = "n";
  MsgListAdd(object, "NUMCHAN", concchan_NUMCHAN, slotnames, 1);
  slotnames[0] = "Vm";
  MsgListAdd(object, "Vm", concchan_Vm, slotnames, 1);
  object->description = "A concchan element handles \nflow of molecules across a membrane. \nIs normally used in conjunction with a pool. Numerically\nthe concchan is equivalent to 1-d diffusion. The state variables\nA and B are used in the return messages to the substrates and\nproducts, except that they are swapped for the products.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object text */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "text";
  tobject.type = "text_type";
  tobject.size = sizeof(struct text_type);
  { extern int TextFunc(); tobject.function = TextFunc; HashFunc("TextFunc", TextFunc, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("text");
  object->defaults->object = object;
  object->defaults->name = CopyString("text");
  object->author = "U.S.Bhalla NCBS May/2001";
  { extern int TextFunc(); AddActionToObject(object, "SET", TextFunc, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'text'\n")); HashFunc("TextFunc", TextFunc, "int"); }
  { extern int TextFunc(); AddActionToObject(object, "TO_XTEXT", TextFunc, 0) ? 0 : (Error(), printf("adding action 'TO_XTEXT' to object 'text'\n")); HashFunc("TextFunc", TextFunc, "int"); }
  { extern int TextFunc(); AddActionToObject(object, "FROM_XTEXT", TextFunc, 0) ? 0 : (Error(), printf("adding action 'FROM_XTEXT' to object 'text'\n")); HashFunc("TextFunc", TextFunc, "int"); }
  { extern int TextFunc(); AddActionToObject(object, "SAVE", TextFunc, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'text'\n")); HashFunc("TextFunc", TextFunc, "int"); }
  { extern int TextFunc(); AddActionToObject(object, "DUMP", TextFunc, 0) ? 0 : (Error(), printf("adding action 'DUMP' to object 'text'\n")); HashFunc("TextFunc", TextFunc, "int"); }
  { extern int TextFunc(); AddActionToObject(object, "LOAD", TextFunc, 0) ? 0 : (Error(), printf("adding action 'LOAD' to object 'text'\n")); HashFunc("TextFunc", TextFunc, "int"); }
  { extern int TextFunc(); AddActionToObject(object, "CREATE", TextFunc, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'text'\n")); HashFunc("TextFunc", TextFunc, "int"); }
  { extern int TextFunc(); AddActionToObject(object, "COPY", TextFunc, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'text'\n")); HashFunc("TextFunc", TextFunc, "int"); }
  SetFieldListProt(object, "len", FIELD_READONLY);
  SetFieldListDesc(object, "len", "Length of text string.");
  object->description = "Handles arbitrarily long text strings.\nAlso talks to xtext for getting and setting these strings. \nAlso deals with saving and loading from files.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object gsolve */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "gsolve";
  tobject.type = "gsolve_type";
  tobject.size = sizeof(struct gsolve_type);
  { extern int GsolveFunc(); tobject.function = GsolveFunc; HashFunc("GsolveFunc", GsolveFunc, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("concentration"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("gsolve");
  object->defaults->object = object;
  object->defaults->name = CopyString("gsolve");
  object->author = "Karan Vasudeva 2002";
  { extern int GsolveFunc(); AddActionToObject(object, "CREATE", GsolveFunc, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'gsolve'\n")); HashFunc("GsolveFunc", GsolveFunc, "int"); }
  { extern int GsolveFunc(); AddActionToObject(object, "RESET", GsolveFunc, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'gsolve'\n")); HashFunc("GsolveFunc", GsolveFunc, "int"); }
  { extern int GsolveFunc(); AddActionToObject(object, "PROCESS", GsolveFunc, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'gsolve'\n")); HashFunc("GsolveFunc", GsolveFunc, "int"); }
  { extern int GsolveFunc(); AddActionToObject(object, "SET", GsolveFunc, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'gsolve'\n")); HashFunc("GsolveFunc", GsolveFunc, "int"); }
  { extern int GsolveFunc(); AddActionToObject(object, "DELETE", GsolveFunc, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'gsolve'\n")); HashFunc("GsolveFunc", GsolveFunc, "int"); }
  object->description = "TBA.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */

} /* STARTUP_kin */
