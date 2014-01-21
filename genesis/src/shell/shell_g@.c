#include <stdio.h>
#include "shell_ext.h"
#include "shell_g@.h"

void STARTUP_shell() {
  { extern void iofunc();   HashFunc("iofunc", iofunc, "void"); }
  { extern char* do_INPUT(); AddFunc("input", do_INPUT, "char*");   HashFunc("do_INPUT", do_INPUT, "char*"); }
  { extern float do_Random(); AddFunc("rand", do_Random, "float");   HashFunc("do_Random", do_Random, "float"); }
  { extern float do_Gaussian(); AddFunc("gaussian", do_Gaussian, "float");   HashFunc("do_Gaussian", do_Gaussian, "float"); }
  { extern float do_min(); AddFunc("min", do_min, "float");   HashFunc("do_min", do_min, "float"); }
  { extern float do_max(); AddFunc("max", do_max, "float");   HashFunc("do_max", do_max, "float"); }
  { extern int do_trunc(); AddFunc("trunc", do_trunc, "int");   HashFunc("do_trunc", do_trunc, "int"); }
  { extern int do_round(); AddFunc("round", do_round, "int");   HashFunc("do_round", do_round, "int"); }
  { extern float do_tan(); AddFunc("tan", do_tan, "float");   HashFunc("do_tan", do_tan, "float"); }
  { extern float do_sin(); AddFunc("sin", do_sin, "float");   HashFunc("do_sin", do_sin, "float"); }
  { extern float do_cos(); AddFunc("cos", do_cos, "float");   HashFunc("do_cos", do_cos, "float"); }
  { extern float do_asin(); AddFunc("asin", do_asin, "float");   HashFunc("do_asin", do_asin, "float"); }
  { extern float do_acos(); AddFunc("acos", do_acos, "float");   HashFunc("do_acos", do_acos, "float"); }
  { extern float do_atan(); AddFunc("atan", do_atan, "float");   HashFunc("do_atan", do_atan, "float"); }
  { extern float do_pow(); AddFunc("pow", do_pow, "float");   HashFunc("do_pow", do_pow, "float"); }
  { extern float do_sqrt(); AddFunc("sqrt", do_sqrt, "float");   HashFunc("do_sqrt", do_sqrt, "float"); }
  { extern float do_fabs(); AddFunc("abs", do_fabs, "float");   HashFunc("do_fabs", do_fabs, "float"); }
  { extern float do_log(); AddFunc("log", do_log, "float");   HashFunc("do_log", do_log, "float"); }
  { extern float do_exp(); AddFunc("exp", do_exp, "float");   HashFunc("do_exp", do_exp, "float"); }
  { extern int do_argc(); AddFunc("argc", do_argc, "int");   HashFunc("do_argc", do_argc, "int"); }
  { extern char** do_argv(); AddFunc("argv", do_argv, "char**");   HashFunc("do_argv", do_argv, "char**"); }
  { extern char* do_getarg(); AddFunc("getarg", do_getarg, "char*");   HashFunc("do_getarg", do_getarg, "char*"); }
  { extern void do_list_jobs(); AddFunc("showjobs", do_list_jobs, "void");   HashFunc("do_list_jobs", do_list_jobs, "void"); }
  { extern void do_add_job(); AddFunc("addjob", do_add_job, "void");   HashFunc("do_add_job", do_add_job, "void"); }
  { extern void do_remove_job(); AddFunc("deletejob", do_remove_job, "void");   HashFunc("do_remove_job", do_remove_job, "void"); }
  { extern void do_change_priority(); AddFunc("setpriority", do_change_priority, "void");   HashFunc("do_change_priority", do_change_priority, "void"); }
  { extern void do_shell(); AddFunc("sh", do_shell, "void");   HashFunc("do_shell", do_shell, "void"); }
  { extern void do_escape_seq(); AddFunc("addescape", do_escape_seq, "void");   HashFunc("do_escape_seq", do_escape_seq, "void"); }
  { extern void do_list_esc(); AddFunc("listescape", do_list_esc, "void");   HashFunc("do_list_esc", do_list_esc, "void"); }
  { extern SIGTYPE restore_context(); AddFunc("abort", restore_context, "SIGTYPE");   HashFunc("restore_context", restore_context, "SIGTYPE"); }
  { extern void do_listglobals(); AddFunc("listglobals", do_listglobals, "void");   HashFunc("do_listglobals", do_listglobals, "void"); }
  { extern int do_addglobal(); AddFunc("addglobal", do_addglobal, "int");   HashFunc("do_addglobal", do_addglobal, "int"); }
  { extern int do_setglobal(); AddFunc("setglobal", do_setglobal, "int");   HashFunc("do_setglobal", do_setglobal, "int"); }
  { extern char* do_getglobal(); AddFunc("getglobal", do_getglobal, "char*");   HashFunc("do_getglobal", do_getglobal, "char*"); }
  { extern void do_set_maxerrors(); AddFunc("maxerrors", do_set_maxerrors, "void");   HashFunc("do_set_maxerrors", do_set_maxerrors, "void"); }
  { extern void do_set_maxwarnings(); AddFunc("maxwarnings", do_set_maxwarnings, "void");   HashFunc("do_set_maxwarnings", do_set_maxwarnings, "void"); }
  { extern void ResetErrors(); AddFunc("clearerrors", ResetErrors, "void");   HashFunc("ResetErrors", ResetErrors, "void"); }
  { extern void Error(); AddFunc("error", Error, "void");   HashFunc("Error", Error, "void"); }
  { extern void Warning(); AddFunc("warning", Warning, "void");   HashFunc("Warning", Warning, "void"); }
  { extern void do_logon(); AddFunc("logfile", do_logon, "void");   HashFunc("do_logon", do_logon, "void"); }
  { extern int do_gctrace(); AddFunc("gctrace", do_gctrace, "int");   HashFunc("do_gctrace", do_gctrace, "int"); }
  { extern char* do_cat(); AddFunc("strcat", do_cat, "char*");   HashFunc("do_cat", do_cat, "char*"); }
  { extern int do_strcmp(); AddFunc("strcmp", do_strcmp, "int");   HashFunc("do_strcmp", do_strcmp, "int"); }
  { extern int do_strncmp(); AddFunc("strncmp", do_strncmp, "int");   HashFunc("do_strncmp", do_strncmp, "int"); }
  { extern int do_strlen(); AddFunc("strlen", do_strlen, "int");   HashFunc("do_strlen", do_strlen, "int"); }
  { extern char* do_replacesubstr(); AddFunc("strsub", do_replacesubstr, "char*");   HashFunc("do_replacesubstr", do_replacesubstr, "char*"); }
  { extern int do_findchar(); AddFunc("findchar", do_findchar, "int");   HashFunc("do_findchar", do_findchar, "int"); }
  { extern int do_countchar(); AddFunc("countchar", do_countchar, "int");   HashFunc("do_countchar", do_countchar, "int"); }
  { extern char* do_substring(); AddFunc("substring", do_substring, "char*");   HashFunc("do_substring", do_substring, "char*"); }
  { extern char** do_arglist(); AddFunc("arglist", do_arglist, "char**");   HashFunc("do_arglist", do_arglist, "char**"); }
  { extern char* do_chr(); AddFunc("chr", do_chr, "char*");   HashFunc("do_chr", do_chr, "char*"); }
  { extern void do_set_float_format(); AddFunc("floatformat", do_set_float_format, "void");   HashFunc("do_set_float_format", do_set_float_format, "void"); }
  { extern int do_gftrace(); AddFunc("gftrace", do_gftrace, "int");   HashFunc("do_gftrace", do_gftrace, "int"); }

/* Script variables */

} /* STARTUP_shell */
