#include <stdio.h>
#include "param_ext.h"
#include "param_g@.h"

void STARTUP_param() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  argv[0] = "newclass";
  argv[1] = "param";
  do_add_class(2, argv);
  AddAction("TABCREATE", 200);
  AddAction("TABDELETE", 202);
  AddAction("RANDOMIZE", 1003);
  AddAction("REPRODUCE", 1004);
  AddAction("CROSSOVER", 1005);
  AddAction("INVERT", 1006);
  AddAction("MUTATE", 1007);
  AddAction("FITSTATS", 1008);
  AddAction("RECENTER", 1009);
  AddAction("UPDATE_PARAMS", 1010);
  AddAction("ACCEPT", 1011);
  AddAction("DISPLAY", 1012);
  AddAction("SAVE3", 1013);
  AddAction("RESTORE3", 1014);
  AddAction("INITSEARCH", 1015);
  AddAction("RESTART", 1016);
  AddAction("EVALUATE", 1017);
  AddAction("DISPLAY2", 1018);
  AddAction("RESTART2", 1019);
  AddAction("LOADBEST", 1020);
  AddAction("UPDATE_PARAMS2", 1021);
  AddAction("LOADTRACE", 1022);
  AddAction("NEXTTRACE", 1023);
  AddAction("RESETALL", 1024);
  AddAction("SAVEBEST", 1025);
  AddAction("RESTOREBEST", 1026);

  /* Definition of object paramtableBF */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "paramtableBF";
  tobject.type = "paramtableBF_type";
  tobject.size = sizeof(struct paramtableBF_type);
  { extern int ParamtableBF(); tobject.function = ParamtableBF; HashFunc("ParamtableBF", ParamtableBF, "int"); }
  ObjectAddClass(&tobject,ClassID("param"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("paramtableBF");
  object->defaults->object = object;
  object->defaults->name = CopyString("paramtableBF");
  object->author = "Mike Vanier";
  { extern int ParamtableBF(); AddActionToObject(object, "CREATE", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  { extern int ParamtableBF(); AddActionToObject(object, "TABCREATE", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  { extern int ParamtableBF(); AddActionToObject(object, "DELETE", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  { extern int ParamtableBF(); AddActionToObject(object, "TABDELETE", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'TABDELETE' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  { extern int ParamtableBF(); AddActionToObject(object, "INITSEARCH", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'INITSEARCH' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  { extern int ParamtableBF(); AddActionToObject(object, "EVALUATE", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'EVALUATE' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  { extern int ParamtableBF(); AddActionToObject(object, "UPDATE_PARAMS", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'UPDATE_PARAMS' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  { extern int ParamtableBF(); AddActionToObject(object, "SAVE", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  { extern int ParamtableBF(); AddActionToObject(object, "SAVEBEST", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'SAVEBEST' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  { extern int ParamtableBF(); AddActionToObject(object, "RESTORE", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'RESTORE' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  { extern int ParamtableBF(); AddActionToObject(object, "RESTOREBEST", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'RESTOREBEST' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  { extern int ParamtableBF(); AddActionToObject(object, "DISPLAY", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'DISPLAY' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  { extern int ParamtableBF(); AddActionToObject(object, "CHECK", ParamtableBF, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'paramtableBF'\n")); HashFunc("ParamtableBF", ParamtableBF, "int"); }
  SetFieldListProt(object, "iteration_number", FIELD_READONLY);
  SetFieldListDesc(object, "iteration_number", "number of simulations so far");
  SetFieldListProt(object, "num_params", FIELD_READONLY);
  SetFieldListDesc(object, "num_params", "number of parameters in the table");
  SetFieldListProt(object, "num_params_to_search", FIELD_READONLY);
  SetFieldListDesc(object, "num_params_to_search", "number of parameters to search over");
  SetFieldListProt(object, "search", FIELD_READWRITE);
  SetFieldListDesc(object, "search", "which parameters to search over");
  SetFieldListProt(object, "type", FIELD_READWRITE);
  SetFieldListDesc(object, "type", "array of type of parameter");
  SetFieldListProt(object, "range", FIELD_READWRITE);
  SetFieldListDesc(object, "range", "array of range values of parameter table");
  SetFieldListProt(object, "min", FIELD_READWRITE);
  SetFieldListDesc(object, "min", "array of minimum values of parameter table");
  SetFieldListProt(object, "max", FIELD_READWRITE);
  SetFieldListDesc(object, "max", "array of maximum values of parameter table");
  SetFieldListProt(object, "label", FIELD_READWRITE);
  SetFieldListDesc(object, "label", "array of labels of parameters");
  SetFieldListProt(object, "current", FIELD_READONLY);
  SetFieldListDesc(object, "current", "array of current values of parameter table");
  SetFieldListProt(object, "current_match", FIELD_READONLY);
  SetFieldListDesc(object, "current_match", "match of most recent simulation");
  SetFieldListProt(object, "best", FIELD_READONLY);
  SetFieldListDesc(object, "best", "array of best parameter values so far");
  SetFieldListProt(object, "best_match", FIELD_READONLY);
  SetFieldListDesc(object, "best_match", "best match so far (bookkeeping only)");
  SetFieldListProt(object, "new_best_match", FIELD_READONLY);
  SetFieldListDesc(object, "new_best_match", "flag: 1 if last match was the best so far");
  SetFieldListProt(object, "done", FIELD_READONLY);
  SetFieldListDesc(object, "done", "flag: if 1, search is finished.");
  SetFieldListProt(object, "filename", FIELD_READWRITE);
  SetFieldListDesc(object, "filename", "name of file to store parameters etc. in");
  SetFieldListProt(object, "alloced", FIELD_READONLY);
  SetFieldListDesc(object, "alloced", "flag for whether the tables are allocated");
  SetFieldListProt(object, "orig", FIELD_READWRITE);
  SetFieldListDesc(object, "orig", "array of original values of parameter table");
  SetFieldListProt(object, "search_divisions", FIELD_READWRITE);
  SetFieldListDesc(object, "search_divisions", "number of divisions per parameter");
  SetFieldListProt(object, "search_rangemod", FIELD_READWRITE);
  SetFieldListDesc(object, "search_rangemod", "fraction of full range to search over");
  SetFieldListProt(object, "search_count", FIELD_READONLY);
  SetFieldListDesc(object, "search_count", "where we are in the search");
  SetFieldListProt(object, "search_range", FIELD_HIDDEN);
  SetFieldListDesc(object, "search_range", "actual ranges to search over");
  object->description = "An object for storing a parameter table and computing \nmatch values for specified regions of parameter space.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);
  { extern int do_initparamBF(); AddFunc("initparamBF", do_initparamBF, "int");   HashFunc("do_initparamBF", do_initparamBF, "int"); }

  /* Definition of object paramtableCG */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "paramtableCG";
  tobject.type = "paramtableCG_type";
  tobject.size = sizeof(struct paramtableCG_type);
  { extern int ParamtableCG(); tobject.function = ParamtableCG; HashFunc("ParamtableCG", ParamtableCG, "int"); }
  ObjectAddClass(&tobject,ClassID("param"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("paramtableCG");
  object->defaults->object = object;
  object->defaults->name = CopyString("paramtableCG");
  object->author = "Mike Vanier";
  { extern int ParamtableCG(); AddActionToObject(object, "CREATE", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "TABCREATE", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "DELETE", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "TABDELETE", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'TABDELETE' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "INITSEARCH", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'INITSEARCH' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "RANDOMIZE", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'RANDOMIZE' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "EVALUATE", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'EVALUATE' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "UPDATE_PARAMS", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'UPDATE_PARAMS' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "UPDATE_PARAMS2", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'UPDATE_PARAMS2' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "LOADBEST", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'LOADBEST' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "RESTART", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'RESTART' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "SAVE", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "SAVEBEST", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'SAVEBEST' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "RESTORE", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'RESTORE' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "RESTOREBEST", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'RESTOREBEST' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "DISPLAY", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'DISPLAY' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  { extern int ParamtableCG(); AddActionToObject(object, "CHECK", ParamtableCG, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'paramtableCG'\n")); HashFunc("ParamtableCG", ParamtableCG, "int"); }
  SetFieldListProt(object, "iteration_number", FIELD_READONLY);
  SetFieldListDesc(object, "iteration_number", "number of simulations so far");
  SetFieldListProt(object, "num_params", FIELD_READWRITE);
  SetFieldListDesc(object, "num_params", "number of parameters");
  SetFieldListProt(object, "num_params_to_search", FIELD_READONLY);
  SetFieldListDesc(object, "num_params_to_search", "number of params to search over");
  SetFieldListProt(object, "search", FIELD_READWRITE);
  SetFieldListDesc(object, "search", "flags: 1 = param is in search");
  SetFieldListProt(object, "type", FIELD_READWRITE);
  SetFieldListDesc(object, "type", "of param: 0: additive, 1: multiplicative");
  SetFieldListProt(object, "center", FIELD_READWRITE);
  SetFieldListDesc(object, "center", "actual center of parameter values");
  SetFieldListProt(object, "realcenter", FIELD_HIDDEN);
  SetFieldListDesc(object, "realcenter", "actual center of parameter values");
  SetFieldListProt(object, "range", FIELD_READWRITE);
  SetFieldListDesc(object, "range", "of parameter values");
  SetFieldListProt(object, "realrange", FIELD_HIDDEN);
  SetFieldListDesc(object, "realrange", "actual range of parameter values");
  SetFieldListProt(object, "min", FIELD_READWRITE);
  SetFieldListDesc(object, "min", "of parameter values");
  SetFieldListProt(object, "realmin", FIELD_HIDDEN);
  SetFieldListDesc(object, "realmin", "actual min of parameter values");
  SetFieldListProt(object, "max", FIELD_READWRITE);
  SetFieldListDesc(object, "max", "of parameter values");
  SetFieldListProt(object, "realmax", FIELD_HIDDEN);
  SetFieldListDesc(object, "realmax", "actual max of parameter values");
  SetFieldListProt(object, "label", FIELD_READONLY);
  SetFieldListDesc(object, "label", "label of parameter");
  SetFieldListProt(object, "current", FIELD_READONLY);
  SetFieldListDesc(object, "current", "array of current parameter values");
  SetFieldListProt(object, "realcurrent", FIELD_HIDDEN);
  SetFieldListDesc(object, "realcurrent", "actual current parameter values");
  SetFieldListProt(object, "current_match", FIELD_READONLY);
  SetFieldListDesc(object, "current_match", "match of most recent simulation");
  SetFieldListProt(object, "best", FIELD_READONLY);
  SetFieldListDesc(object, "best", "best parameter values");
  SetFieldListProt(object, "best_match", FIELD_READONLY);
  SetFieldListDesc(object, "best_match", "best match value");
  SetFieldListProt(object, "new_best_match", FIELD_READONLY);
  SetFieldListDesc(object, "new_best_match", "flag: 1 if last match was the best so far");
  SetFieldListProt(object, "done", FIELD_READONLY);
  SetFieldListDesc(object, "done", "flag: 1 means search is done");
  SetFieldListProt(object, "filename", FIELD_READWRITE);
  SetFieldListDesc(object, "filename", "where param file information is stored");
  SetFieldListProt(object, "alloced", FIELD_READONLY);
  SetFieldListDesc(object, "alloced", "flag for whether the tables are allocated");
  SetFieldListProt(object, "linemin_number", FIELD_READONLY);
  SetFieldListDesc(object, "linemin_number", "which line minimization we're doing");
  SetFieldListProt(object, "state", FIELD_READONLY);
  SetFieldListDesc(object, "state", "of parameter search");
  SetFieldListProt(object, "deriv_method", FIELD_READWRITE);
  SetFieldListDesc(object, "deriv_method", "0 = proper; 1 = quick-and-dirty");
DirectSetElement(object->defaults, "deriv_method", "0");
  SetFieldListProt(object, "orig_param", FIELD_HIDDEN);
  SetFieldListDesc(object, "orig_param", "original parameter value");
  SetFieldListProt(object, "h", FIELD_HIDDEN);
  SetFieldListDesc(object, "h", "spatial step size, for deriv calc");
  SetFieldListProt(object, "h_init", FIELD_HIDDEN);
  SetFieldListDesc(object, "h_init", "initial spatial step size");
  SetFieldListProt(object, "deriv_count", FIELD_HIDDEN);
  SetFieldListDesc(object, "deriv_count", "# func evaluations for a given deriv");
  SetFieldListProt(object, "deriv_state", FIELD_HIDDEN);
  SetFieldListDesc(object, "deriv_state", "state of derivative routines");
  SetFieldListProt(object, "deriv_index", FIELD_READONLY);
  SetFieldListDesc(object, "deriv_index", "index of param we're taking deriv of");
  SetFieldListProt(object, "deriv_h_init", FIELD_READWRITE);
  SetFieldListDesc(object, "deriv_h_init", "init vals of h to use in deriv calc");
  SetFieldListProt(object, "deriv_h_decrease", FIELD_READWRITE);
  SetFieldListDesc(object, "deriv_h_decrease", "how fast to decrease h");
  SetFieldListProt(object, "deriv_h_min", FIELD_READWRITE);
  SetFieldListDesc(object, "deriv_h_min", "lowest permissible value of h");
  SetFieldListProt(object, "deriv_matrix", FIELD_HIDDEN);
  SetFieldListDesc(object, "deriv_matrix", "internal storage for deriv calcs");
  SetFieldListProt(object, "deriv", FIELD_READONLY);
  SetFieldListDesc(object, "deriv", "array of d(match)/d(param)");
  SetFieldListProt(object, "g", FIELD_HIDDEN);
  SetFieldListDesc(object, "g", "internal vector");
  SetFieldListProt(object, "dir", FIELD_READONLY);
  SetFieldListDesc(object, "dir", "direction vector");
  SetFieldListProt(object, "tolerance", FIELD_READWRITE);
  SetFieldListDesc(object, "tolerance", "tolerance of param search");
  SetFieldListProt(object, "linemin_state", FIELD_HIDDEN);
  SetFieldListDesc(object, "linemin_state", "overall state of line min routines");
  SetFieldListProt(object, "linemin_init", FIELD_HIDDEN);
  SetFieldListDesc(object, "linemin_init", "flag: 1 = first line min");
  SetFieldListProt(object, "linemin_bracket_state", FIELD_HIDDEN);
  SetFieldListDesc(object, "linemin_bracket_state", "state of bracketing routine");
  SetFieldListProt(object, "linemin_bracket", FIELD_HIDDEN);
  SetFieldListDesc(object, "linemin_bracket", "3 points bracketing line min");
  SetFieldListProt(object, "linemin_mbracket", FIELD_HIDDEN);
  SetFieldListDesc(object, "linemin_mbracket", "match values at bracket points");
  SetFieldListProt(object, "linemin_brent_state", FIELD_HIDDEN);
  SetFieldListDesc(object, "linemin_brent_state", "state of Brent routines");
  SetFieldListProt(object, "linemin_point", FIELD_HIDDEN);
  SetFieldListDesc(object, "linemin_point", "point on line we're simulating");
  SetFieldListProt(object, "linemin_match", FIELD_HIDDEN);
  SetFieldListDesc(object, "linemin_match", "match value at linemin_point");
  SetFieldListProt(object, "prev_linemin_match", FIELD_HIDDEN);
  SetFieldListDesc(object, "prev_linemin_match", "previous linemin match");
  SetFieldListProt(object, "linemin_origin", FIELD_HIDDEN);
  SetFieldListDesc(object, "linemin_origin", "point where line min starts at");
  SetFieldListProt(object, "linemin_tolerance", FIELD_READWRITE);
  SetFieldListDesc(object, "linemin_tolerance", "tolerance of line min routines");
  object->description = "An object for storing a parameter table and computing\nnew parameter values using a conjugate gradient\nalgorithm.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);
  { extern int do_initparamCG(); AddFunc("initparamCG", do_initparamCG, "int");   HashFunc("do_initparamCG", do_initparamCG, "int"); }

  /* Definition of object paramtableGA */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "paramtableGA";
  tobject.type = "paramtableGA_type";
  tobject.size = sizeof(struct paramtableGA_type);
  { extern int ParamtableGA(); tobject.function = ParamtableGA; HashFunc("ParamtableGA", ParamtableGA, "int"); }
  ObjectAddClass(&tobject,ClassID("param"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("paramtableGA");
  object->defaults->object = object;
  object->defaults->name = CopyString("paramtableGA");
  object->author = "Mike Vanier";
  { extern int ParamtableGA(); AddActionToObject(object, "CREATE", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "TABCREATE", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "DELETE", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "TABDELETE", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'TABDELETE' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "INITSEARCH", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'INITSEARCH' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "RANDOMIZE", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'RANDOMIZE' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "UPDATE_PARAMS", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'UPDATE_PARAMS' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "REPRODUCE", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'REPRODUCE' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "CROSSOVER", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'CROSSOVER' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "MUTATE", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'MUTATE' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "FITSTATS", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'FITSTATS' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "RECENTER", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'RECENTER' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "RESTART", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'RESTART' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "SAVE", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "SAVEBEST", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'SAVEBEST' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "RESTORE", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'RESTORE' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "RESTOREBEST", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'RESTOREBEST' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  { extern int ParamtableGA(); AddActionToObject(object, "CHECK", ParamtableGA, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'paramtableGA'\n")); HashFunc("ParamtableGA", ParamtableGA, "int"); }
  SetFieldListProt(object, "generation", FIELD_READWRITE);
  SetFieldListDesc(object, "generation", "generation number");
  SetFieldListProt(object, "num_tables", FIELD_READONLY);
  SetFieldListDesc(object, "num_tables", "# of param tables");
  SetFieldListProt(object, "num_params", FIELD_READONLY);
  SetFieldListDesc(object, "num_params", "# of params per table");
  SetFieldListProt(object, "num_params_to_search", FIELD_READONLY);
  SetFieldListDesc(object, "num_params_to_search", "# of params to search over");
  SetFieldListProt(object, "search", FIELD_READWRITE);
  SetFieldListDesc(object, "search", "flags: 1 = search this param");
  SetFieldListProt(object, "type", FIELD_READWRITE);
  SetFieldListDesc(object, "type", "param types");
  SetFieldListProt(object, "center", FIELD_READWRITE);
  SetFieldListDesc(object, "center", "center values of param table");
  SetFieldListProt(object, "range", FIELD_READWRITE);
  SetFieldListDesc(object, "range", "range values of param table");
  SetFieldListProt(object, "label", FIELD_READWRITE);
  SetFieldListDesc(object, "label", "labels of params");
  SetFieldListProt(object, "best", FIELD_READWRITE);
  SetFieldListDesc(object, "best", "best matching param values");
  SetFieldListProt(object, "best_match", FIELD_READWRITE);
  SetFieldListDesc(object, "best_match", "best match (fitness) value so far");
  SetFieldListProt(object, "filename", FIELD_READWRITE);
  SetFieldListDesc(object, "filename", "where param file info is stored");
  SetFieldListProt(object, "alloced", FIELD_READONLY);
  SetFieldListDesc(object, "alloced", "flag: are tables allocated?");
  SetFieldListProt(object, "param_size", FIELD_READONLY);
  SetFieldListDesc(object, "param_size", "size of params in bytes");
DirectSetElement(object->defaults, "param_size", "4");
  SetFieldListProt(object, "bits_per_parameter", FIELD_HIDDEN);
  SetFieldListDesc(object, "bits_per_parameter", "size of params in bits");
  SetFieldListProt(object, "max_parameter", FIELD_HIDDEN);
  SetFieldListDesc(object, "max_parameter", "max size of param in bit rep");
  SetFieldListProt(object, "param", FIELD_READWRITE);
  SetFieldListDesc(object, "param", "2D parameter array");
  SetFieldListProt(object, "temp", FIELD_HIDDEN);
  SetFieldListDesc(object, "temp", "2D parameter array for temp storage");
  SetFieldListProt(object, "fitness", FIELD_READWRITE);
  SetFieldListDesc(object, "fitness", "fitness values for param sets");
  SetFieldListProt(object, "tempfitness", FIELD_HIDDEN);
  SetFieldListDesc(object, "tempfitness", "temp storage of fitness values");
  SetFieldListProt(object, "fitrank", FIELD_HIDDEN);
  SetFieldListDesc(object, "fitrank", "fitness ranks in order");
  SetFieldListProt(object, "min_fitness", FIELD_READONLY);
  SetFieldListDesc(object, "min_fitness", "minimum fitness value");
  SetFieldListProt(object, "max_fitness", FIELD_READONLY);
  SetFieldListDesc(object, "max_fitness", "maximum fitness value");
  SetFieldListProt(object, "avg_fitness", FIELD_READONLY);
  SetFieldListDesc(object, "avg_fitness", "average fitness value");
  SetFieldListProt(object, "stdev_fitness", FIELD_READONLY);
  SetFieldListDesc(object, "stdev_fitness", "std dev of fitness values");
  SetFieldListProt(object, "min_fitness_index", FIELD_READONLY);
  SetFieldListDesc(object, "min_fitness_index", "index of min fit in fit array");
  SetFieldListProt(object, "max_fitness_index", FIELD_READONLY);
  SetFieldListDesc(object, "max_fitness_index", "index of max fit in fit array");
  SetFieldListProt(object, "normfitness", FIELD_READONLY);
  SetFieldListDesc(object, "normfitness", "normalized fitness values");
  SetFieldListProt(object, "cumulfitness", FIELD_READONLY);
  SetFieldListDesc(object, "cumulfitness", "cumulative norm fitness values");
  SetFieldListProt(object, "selectindex", FIELD_HIDDEN);
  SetFieldListDesc(object, "selectindex", "available indices of param tables");
  SetFieldListProt(object, "preserve", FIELD_READWRITE);
  SetFieldListDesc(object, "preserve", "# of best matches to retain");
DirectSetElement(object->defaults, "preserve", "1");
  SetFieldListProt(object, "crossover_type", FIELD_READWRITE);
  SetFieldListDesc(object, "crossover_type", "type of CO algorithm");
DirectSetElement(object->defaults, "crossover_type", "1");
  SetFieldListProt(object, "crossover_probability", FIELD_READWRITE);
  SetFieldListDesc(object, "crossover_probability", "probability of CO");
DirectSetElement(object->defaults, "crossover_probability", "0.5");
  SetFieldListProt(object, "crossover_number", FIELD_READWRITE);
  SetFieldListDesc(object, "crossover_number", "# of COs per param string");
DirectSetElement(object->defaults, "crossover_number", "1");
  SetFieldListProt(object, "crossover_break_param", FIELD_READWRITE);
  SetFieldListDesc(object, "crossover_break_param", "0 = COs can't break params");
DirectSetElement(object->defaults, "crossover_break_param", "0");
  SetFieldListProt(object, "mutation_probability", FIELD_READWRITE);
  SetFieldListDesc(object, "mutation_probability", "prob of mutation per bit");
DirectSetElement(object->defaults, "mutation_probability", "0.01");
  SetFieldListProt(object, "use_gray_code", FIELD_READWRITE);
  SetFieldListDesc(object, "use_gray_code", "flag: use Gray code encoding");
DirectSetElement(object->defaults, "use_gray_code", "1");
  SetFieldListProt(object, "do_restart", FIELD_READWRITE);
  SetFieldListDesc(object, "do_restart", "1 = restart periodically");
DirectSetElement(object->defaults, "do_restart", "1");
  SetFieldListProt(object, "restart_after", FIELD_READWRITE);
  SetFieldListDesc(object, "restart_after", "restart after N bad gens");
DirectSetElement(object->defaults, "restart_after", "25");
  SetFieldListProt(object, "restart_count", FIELD_READONLY);
  SetFieldListDesc(object, "restart_count", "count of unproductive gens");
DirectSetElement(object->defaults, "restart_count", "0");
  SetFieldListProt(object, "old_fitness", FIELD_READONLY);
  SetFieldListDesc(object, "old_fitness", "fit val we have to beat");
DirectSetElement(object->defaults, "old_fitness", "0.0");
  SetFieldListProt(object, "restart_thresh", FIELD_READWRITE);
  SetFieldListDesc(object, "restart_thresh", "threshold for restarting");
DirectSetElement(object->defaults, "restart_thresh", "1.0");
  object->description = "An object for storing parameter tables and \ncomputing the next generation according to a \ngenetic algorithm.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);
  { extern double do_getparamGA(); AddFunc("getparamGA", do_getparamGA, "double");   HashFunc("do_getparamGA", do_getparamGA, "double"); }
  { extern void do_setparamGA(); AddFunc("setparamGA", do_setparamGA, "void");   HashFunc("do_setparamGA", do_setparamGA, "void"); }
  { extern int do_initparamGA(); AddFunc("initparamGA", do_initparamGA, "int");   HashFunc("do_initparamGA", do_initparamGA, "int"); }

  /* Definition of object paramtableSA */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "paramtableSA";
  tobject.type = "paramtableSA_type";
  tobject.size = sizeof(struct paramtableSA_type);
  { extern int ParamtableSA(); tobject.function = ParamtableSA; HashFunc("ParamtableSA", ParamtableSA, "int"); }
  ObjectAddClass(&tobject,ClassID("param"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("paramtableSA");
  object->defaults->object = object;
  object->defaults->name = CopyString("paramtableSA");
  object->author = "Mike Vanier";
  { extern int ParamtableSA(); AddActionToObject(object, "CREATE", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "TABCREATE", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "DELETE", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "TABDELETE", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'TABDELETE' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "INITSEARCH", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'INITSEARCH' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "EVALUATE", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'EVALUATE' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "UPDATE_PARAMS", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'UPDATE_PARAMS' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "RECENTER", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'RECENTER' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "RESTART", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'RESTART' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "RESTART2", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'RESTART2' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "SAVE", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "SAVEBEST", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'SAVEBEST' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "RESTORE", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'RESTORE' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "DISPLAY", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'DISPLAY' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "DISPLAY2", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'DISPLAY2' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  { extern int ParamtableSA(); AddActionToObject(object, "CHECK", ParamtableSA, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'paramtableSA'\n")); HashFunc("ParamtableSA", ParamtableSA, "int"); }
  SetFieldListProt(object, "iteration_number", FIELD_READONLY);
  SetFieldListDesc(object, "iteration_number", "# iterations in sim so far");
  SetFieldListProt(object, "num_params", FIELD_READWRITE);
  SetFieldListDesc(object, "num_params", "# of parameters");
  SetFieldListProt(object, "num_params_to_search", FIELD_READONLY);
  SetFieldListDesc(object, "num_params_to_search", "# of parameters to search over");
  SetFieldListProt(object, "search", FIELD_READWRITE);
  SetFieldListDesc(object, "search", "flags; 1 = do search this param");
  SetFieldListProt(object, "type", FIELD_READWRITE);
  SetFieldListDesc(object, "type", "of param: 0: additive, 1: multiplicative");
  SetFieldListProt(object, "center", FIELD_READWRITE);
  SetFieldListDesc(object, "center", "of parameter values");
  SetFieldListProt(object, "realcenter", FIELD_HIDDEN);
  SetFieldListDesc(object, "realcenter", "actual center of parameter values in simplex");
  SetFieldListProt(object, "range", FIELD_READWRITE);
  SetFieldListDesc(object, "range", "of param values");
  SetFieldListProt(object, "realrange", FIELD_HIDDEN);
  SetFieldListDesc(object, "realrange", "actual range of parameter values in simplex");
  SetFieldListProt(object, "min", FIELD_READWRITE);
  SetFieldListDesc(object, "min", "of param values");
  SetFieldListProt(object, "realmin", FIELD_HIDDEN);
  SetFieldListDesc(object, "realmin", "actual min of parameter values in simplex");
  SetFieldListProt(object, "max", FIELD_READWRITE);
  SetFieldListDesc(object, "max", "of param values");
  SetFieldListProt(object, "realmax", FIELD_HIDDEN);
  SetFieldListDesc(object, "realmax", "actual max of parameter values in simplex");
  SetFieldListProt(object, "label", FIELD_READWRITE);
  SetFieldListDesc(object, "label", "label of param");
  SetFieldListProt(object, "current", FIELD_READONLY);
  SetFieldListDesc(object, "current", "array of param values to be simulated next");
  SetFieldListProt(object, "current_match", FIELD_READONLY);
  SetFieldListDesc(object, "current_match", "match value of last point simulated");
  SetFieldListProt(object, "best", FIELD_READONLY);
  SetFieldListDesc(object, "best", "array of param values giving best match so far");
  SetFieldListProt(object, "best_match", FIELD_READONLY);
  SetFieldListDesc(object, "best_match", "best match value");
  SetFieldListProt(object, "best_match_iteration", FIELD_HIDDEN);
  SetFieldListDesc(object, "best_match_iteration", "iteration # w/ best match");
DirectSetElement(object->defaults, "best_match_iteration", "0");
  SetFieldListProt(object, "new_best_match", FIELD_READONLY);
  SetFieldListDesc(object, "new_best_match", "flag: 1 if last match was the best so far");
  SetFieldListProt(object, "done", FIELD_READONLY);
  SetFieldListDesc(object, "done", "flag: 1 means search is done");
  SetFieldListProt(object, "filename", FIELD_READWRITE);
  SetFieldListDesc(object, "filename", "where parameter file information is stored");
  SetFieldListProt(object, "alloced", FIELD_READONLY);
  SetFieldListDesc(object, "alloced", "flag: 1 means tables are allocated");
  SetFieldListProt(object, "iterations_per_temp", FIELD_READWRITE);
  SetFieldListDesc(object, "iterations_per_temp", "# iterations per temperature");
DirectSetElement(object->defaults, "iterations_per_temp", "1");
  SetFieldListProt(object, "temperature", FIELD_READWRITE);
  SetFieldListDesc(object, "temperature", "of annealing process");
  SetFieldListProt(object, "inittemp", FIELD_READWRITE);
  SetFieldListDesc(object, "inittemp", "init temp of annealing process");
DirectSetElement(object->defaults, "inittemp", "0.0");
  SetFieldListProt(object, "annealing_method", FIELD_READWRITE);
  SetFieldListDesc(object, "annealing_method", "0: manual; 1: lin decay; 2: exp decay");
DirectSetElement(object->defaults, "annealing_method", "0");
  SetFieldListProt(object, "max_iterations", FIELD_READWRITE);
  SetFieldListDesc(object, "max_iterations", "for linear decay only");
  SetFieldListProt(object, "annealing_rate", FIELD_READWRITE);
  SetFieldListDesc(object, "annealing_rate", "for proportional decay only");
  SetFieldListProt(object, "testtemp", FIELD_READWRITE);
  SetFieldListDesc(object, "testtemp", "test for sim done when temp is <= this");
DirectSetElement(object->defaults, "testtemp", "0.0");
  SetFieldListProt(object, "tolerance", FIELD_READWRITE);
  SetFieldListDesc(object, "tolerance", "criterion for stopping search");
  SetFieldListProt(object, "stop_after", FIELD_READWRITE);
  SetFieldListDesc(object, "stop_after", "(this many unproductive iterations)");
DirectSetElement(object->defaults, "stop_after", "200");
  SetFieldListProt(object, "restart_every", FIELD_READWRITE);
  SetFieldListDesc(object, "restart_every", "call RESTART action every x iterations");
DirectSetElement(object->defaults, "restart_every", "0");
  SetFieldListProt(object, "state", FIELD_READONLY);
  SetFieldListDesc(object, "state", "of search process");
  SetFieldListProt(object, "next_index", FIELD_HIDDEN);
  SetFieldListDesc(object, "next_index", "index of point on simplex to evaluate next");
  SetFieldListProt(object, "simplex_init_noise", FIELD_READWRITE);
  SetFieldListDesc(object, "simplex_init_noise", "initial noise in simplex");
DirectSetElement(object->defaults, "simplex_init_noise", "0.0");
  SetFieldListProt(object, "simplex", FIELD_READONLY);
  SetFieldListDesc(object, "simplex", "points on the simplex");
  SetFieldListProt(object, "simplex_match", FIELD_READWRITE);
  SetFieldListDesc(object, "simplex_match", "match values for each point in the simplex");
  SetFieldListProt(object, "partial_sum", FIELD_HIDDEN);
  SetFieldListDesc(object, "partial_sum", "for calculating new points");
  SetFieldListProt(object, "test_point", FIELD_HIDDEN);
  SetFieldListDesc(object, "test_point", "test point to be evaluated");
  SetFieldListProt(object, "scale", FIELD_READWRITE);
  SetFieldListDesc(object, "scale", "length scale of starting points");
DirectSetElement(object->defaults, "scale", "1.0");
  SetFieldListProt(object, "scalemod", FIELD_READWRITE);
  SetFieldListDesc(object, "scalemod", "modifiers of length scales");
  object->description = "An object for storing a parameter table and computing\nnew parameter values according to a simulated annealing\nalgorithm.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);
  { extern int do_initparamSA(); AddFunc("initparamSA", do_initparamSA, "int");   HashFunc("do_initparamSA", do_initparamSA, "int"); }

  /* Definition of object paramtableSS */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "paramtableSS";
  tobject.type = "paramtableSS_type";
  tobject.size = sizeof(struct paramtableSS_type);
  { extern int ParamtableSS(); tobject.function = ParamtableSS; HashFunc("ParamtableSS", ParamtableSS, "int"); }
  ObjectAddClass(&tobject,ClassID("param"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("paramtableSS");
  object->defaults->object = object;
  object->defaults->name = CopyString("paramtableSS");
  object->author = "Mike Vanier";
  { extern int ParamtableSS(); AddActionToObject(object, "CREATE", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "TABCREATE", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'TABCREATE' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "DELETE", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "TABDELETE", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'TABDELETE' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "INITSEARCH", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'INITSEARCH' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "RANDOMIZE", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'RANDOMIZE' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "UPDATE_PARAMS", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'UPDATE_PARAMS' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "ACCEPT", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'ACCEPT' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "RECENTER", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'RECENTER' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "SAVE", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'SAVE' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "SAVEBEST", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'SAVEBEST' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "RESTORE", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'RESTORE' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "DISPLAY", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'DISPLAY' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  { extern int ParamtableSS(); AddActionToObject(object, "CHECK", ParamtableSS, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'paramtableSS'\n")); HashFunc("ParamtableSS", ParamtableSS, "int"); }
  SetFieldListProt(object, "iteration_number", FIELD_READONLY);
  SetFieldListDesc(object, "iteration_number", "# of simulations so far");
  SetFieldListProt(object, "num_params", FIELD_READONLY);
  SetFieldListDesc(object, "num_params", "# of params in the table");
  SetFieldListProt(object, "search", FIELD_READWRITE);
  SetFieldListDesc(object, "search", "flags; 1 = search this param");
  SetFieldListProt(object, "type", FIELD_READWRITE);
  SetFieldListDesc(object, "type", "of params: 0 = add, 1 = mult");
  SetFieldListProt(object, "range", FIELD_READWRITE);
  SetFieldListDesc(object, "range", "range values of param table");
  SetFieldListProt(object, "min", FIELD_READWRITE);
  SetFieldListDesc(object, "min", "minimum values of param table");
  SetFieldListProt(object, "max", FIELD_READWRITE);
  SetFieldListDesc(object, "max", "maximum values of param table");
  SetFieldListProt(object, "label", FIELD_READWRITE);
  SetFieldListDesc(object, "label", "labels of params");
  SetFieldListProt(object, "current", FIELD_READWRITE);
  SetFieldListDesc(object, "current", "current values of param table");
  SetFieldListProt(object, "best", FIELD_READWRITE);
  SetFieldListDesc(object, "best", "param values giving best match so far");
  SetFieldListProt(object, "best_match", FIELD_READONLY);
  SetFieldListDesc(object, "best_match", "best match value so far");
  SetFieldListProt(object, "filename", FIELD_READWRITE);
  SetFieldListDesc(object, "filename", "name of file to store params etc. in");
  SetFieldListProt(object, "alloced", FIELD_READONLY);
  SetFieldListDesc(object, "alloced", "flag: 1 means tables are allocated");
  SetFieldListProt(object, "round_number", FIELD_READONLY);
  SetFieldListDesc(object, "round_number", "# of expansion-contraction cycles");
  SetFieldListProt(object, "variance", FIELD_READWRITE);
  SetFieldListDesc(object, "variance", "current variance of gaussian dist");
  SetFieldListProt(object, "minvariance", FIELD_READWRITE);
  SetFieldListDesc(object, "minvariance", "minimum variance of algorithm");
DirectSetElement(object->defaults, "minvariance", "0.05");
  SetFieldListProt(object, "maxvariance", FIELD_READWRITE);
  SetFieldListDesc(object, "maxvariance", "maximum variance of algorithm");
DirectSetElement(object->defaults, "maxvariance", "0.5");
  SetFieldListProt(object, "addvarscale", FIELD_READWRITE);
  SetFieldListDesc(object, "addvarscale", "scaling for vars of add params");
DirectSetElement(object->defaults, "addvarscale", "1.0");
  SetFieldListProt(object, "multvarscale", FIELD_READWRITE);
  SetFieldListDesc(object, "multvarscale", "scaling for vars of mult params");
DirectSetElement(object->defaults, "multvarscale", "1.0");
  SetFieldListProt(object, "contract", FIELD_READWRITE);
  SetFieldListDesc(object, "contract", "rate of contraction of variance");
DirectSetElement(object->defaults, "contract", "0.95");
  object->description = "An object for storing a param table and computing\nnew param values according to a stochastic search\nalgorithm.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);
  { extern int do_initparamSS(); AddFunc("initparamSS", do_initparamSS, "int");   HashFunc("do_initparamSS", do_initparamSS, "int"); }
  { extern void Gen2spk(); AddFunc("gen2spk", Gen2spk, "void");   HashFunc("Gen2spk", Gen2spk, "void"); }
  { extern double Spkcmp(); AddFunc("spkcmp", Spkcmp, "double");   HashFunc("Spkcmp", Spkcmp, "double"); }
  { extern double do_shapematch(); AddFunc("shapematch", do_shapematch, "double");   HashFunc("do_shapematch", do_shapematch, "double"); }
  { extern int do_setsearch(); AddFunc("setsearch", do_setsearch, "int");   HashFunc("do_setsearch", do_setsearch, "int"); }
  { extern char* ShiftArg(); AddFunc("shiftarg", ShiftArg, "char*");   HashFunc("ShiftArg", ShiftArg, "char*"); }
  { extern char* RemArg(); AddFunc("remarg", RemArg, "char*");   HashFunc("RemArg", RemArg, "char*"); }

/* Script variables */

} /* STARTUP_param */
