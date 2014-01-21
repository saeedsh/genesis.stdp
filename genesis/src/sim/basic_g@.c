#include <stdio.h>
#include "sim_ext.h"
#include "basic_g@.h"

void STARTUP_basic() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];
  { extern void do_simulate(); AddFunc("step", do_simulate, "void");   HashFunc("do_simulate", do_simulate, "void"); }
  { extern void do_ps(); AddFunc("cpu", do_ps, "void");   HashFunc("do_ps", do_ps, "void"); }
  { extern char* do_date(); AddFunc("getdate", do_date, "char*");   HashFunc("do_date", do_date, "char*"); }
  { extern void do_reset(); AddFunc("reset", do_reset, "void");   HashFunc("do_reset", do_reset, "void"); }
  { extern float do_getstatus(); AddFunc("getstat", do_getstatus, "float");   HashFunc("do_getstatus", do_getstatus, "float"); }
  { extern void do_showstatus(); AddFunc("showstat", do_showstatus, "void");   HashFunc("do_showstatus", do_showstatus, "void"); }
  { extern int do_srandom(); AddFunc("randseed", do_srandom, "int");   HashFunc("do_srandom", do_srandom, "int"); }
  { extern void do_setRNG(); AddFunc("setrand", do_setRNG, "void");   HashFunc("do_setRNG", do_setRNG, "void"); }
  { extern void do_notes(); AddFunc("notes", do_notes, "void");   HashFunc("do_notes", do_notes, "void"); }
  { extern void ShowClocks(); AddFunc("showclocks", ShowClocks, "void");   HashFunc("ShowClocks", ShowClocks, "void"); }
  { extern void do_set_clock(); AddFunc("setclock", do_set_clock, "void");   HashFunc("do_set_clock", do_set_clock, "void"); }
  { extern void do_change_element(); AddFunc("ce", do_change_element, "void");   HashFunc("do_change_element", do_change_element, "void"); }
  { extern void do_pwe(); AddFunc("pwe", do_pwe, "void");   HashFunc("do_pwe", do_pwe, "void"); }
  { extern void do_list_elements(); AddFunc("le", do_list_elements, "void");   HashFunc("do_list_elements", do_list_elements, "void"); }
  { extern void do_pushe(); AddFunc("pushe", do_pushe, "void");   HashFunc("do_pushe", do_pushe, "void"); }
  { extern void do_pope(); AddFunc("pope", do_pope, "void");   HashFunc("do_pope", do_pope, "void"); }
  { extern void do_show_estack(); AddFunc("stack", do_show_estack, "void");   HashFunc("do_show_estack", do_show_estack, "void"); }
  { extern void do_set(); AddFunc("setfield", do_set, "void");   HashFunc("do_set", do_set, "void"); }
  { extern void do_show(); AddFunc("showfield", do_show, "void");   HashFunc("do_show", do_show, "void"); }
  { extern void do_create(); AddFunc("create", do_create, "void");   HashFunc("do_create", do_create, "void"); }
  { extern void do_copy(); AddFunc("copy", do_copy, "void");   HashFunc("do_copy", do_copy, "void"); }
  { extern void do_move(); AddFunc("move", do_move, "void");   HashFunc("do_move", do_move, "void"); }
  { extern void do_create_map(); AddFunc("createmap", do_create_map, "void");   HashFunc("do_create_map", do_create_map, "void"); }
  { extern void do_position(); AddFunc("position", do_position, "void");   HashFunc("do_position", do_position, "void"); }
  { extern void do_delete_element(); AddFunc("delete", do_delete_element, "void");   HashFunc("do_delete_element", do_delete_element, "void"); }
  { extern int ElementReaper(); AddFunc("reclaim", ElementReaper, "int");   HashFunc("ElementReaper", ElementReaper, "int"); }
  { extern void do_enable(); AddFunc("enable", do_enable, "void");   HashFunc("do_enable", do_enable, "void"); }
  { extern void do_disable(); AddFunc("disable", do_disable, "void");   HashFunc("do_disable", do_disable, "void"); }
  { extern void CheckSimulation(); AddFunc("check", CheckSimulation, "void");   HashFunc("CheckSimulation", CheckSimulation, "void"); }
  { extern void do_help(); AddFunc("help", do_help, "void");   HashFunc("do_help", do_help, "void"); }
  { extern void do_clean(); AddFunc("deleteall", do_clean, "void");   HashFunc("do_clean", do_clean, "void"); }
  { extern char* do_version(); AddFunc("version", do_version, "char*");   HashFunc("do_version", do_version, "char*"); }
  { extern void do_show_msg(); AddFunc("showmsg", do_show_msg, "void");   HashFunc("do_show_msg", do_show_msg, "void"); }
  { extern void SetBreakFlag(); AddFunc("stop", SetBreakFlag, "void");   HashFunc("SetBreakFlag", SetBreakFlag, "void"); }
  { extern void do_list_objects(); AddFunc("listobjects", do_list_objects, "void");   HashFunc("do_list_objects", do_list_objects, "void"); }
  { extern void do_show_object(); AddFunc("showobject", do_show_object, "void");   HashFunc("do_show_object", do_show_object, "void"); }
  { extern void do_list_classes(); AddFunc("listclasses", do_list_classes, "void");   HashFunc("do_list_classes", do_list_classes, "void"); }
  { extern void do_clear_schedule(); AddFunc("deletetasks", do_clear_schedule, "void");   HashFunc("do_clear_schedule", do_clear_schedule, "void"); }
  { extern void do_add_schedule(); AddFunc("addtask", do_add_schedule, "void");   HashFunc("do_add_schedule", do_add_schedule, "void"); }
  { extern void Reschedule(); AddFunc("resched", Reschedule, "void");   HashFunc("Reschedule", Reschedule, "void"); }
  { extern void do_list_tasks(); AddFunc("showsched", do_list_tasks, "void");   HashFunc("do_list_tasks", do_list_tasks, "void"); }
  { extern void do_list_actions(); AddFunc("listactions", do_list_actions, "void");   HashFunc("do_list_actions", do_list_actions, "void"); }
  { extern char* do_call_element(); AddFunc("call", do_call_element, "char*");   HashFunc("do_call_element", do_call_element, "char*"); }
  { extern int do_alias(); AddFunc("addalias", do_alias, "int");   HashFunc("do_alias", do_alias, "int"); }
  { extern void do_show_binding(); AddFunc("showcommand", do_show_binding, "void");   HashFunc("do_show_binding", do_show_binding, "void"); }
  { extern void do_element_clock(); AddFunc("useclock", do_element_clock, "void");   HashFunc("do_element_clock", do_element_clock, "void"); }
  { extern int do_add_msg(); AddFunc("addmsg", do_add_msg, "int");   HashFunc("do_add_msg", do_add_msg, "int"); }
  { extern void do_delete_msg(); AddFunc("deletemsg", do_delete_msg, "void");   HashFunc("do_delete_msg", do_delete_msg, "void"); }
  { extern int do_openfile(); AddFunc("openfile", do_openfile, "int");   HashFunc("do_openfile", do_openfile, "int"); }
  { extern int do_closefile(); AddFunc("closefile", do_closefile, "int");   HashFunc("do_closefile", do_closefile, "int"); }
  { extern int do_writefile(); AddFunc("writefile", do_writefile, "int");   HashFunc("do_writefile", do_writefile, "int"); }
  { extern int do_flushfile(); AddFunc("flushfile", do_flushfile, "int");   HashFunc("do_flushfile", do_flushfile, "int"); }
  { extern void do_showfiles(); AddFunc("listfiles", do_showfiles, "void");   HashFunc("do_showfiles", do_showfiles, "void"); }
  { extern int do_insert_event(); AddFunc("putevent", do_insert_event, "int");   HashFunc("do_insert_event", do_insert_event, "int"); }
  { extern void do_set_method(); AddFunc("setmethod", do_set_method, "void");   HashFunc("do_set_method", do_set_method, "void"); }
  { extern float do_getclock(); AddFunc("getclock", do_getclock, "float");   HashFunc("do_getclock", do_getclock, "float"); }
  { extern char* do_getfield(); AddFunc("getfield", do_getfield, "char*");   HashFunc("do_getfield", do_getfield, "char*"); }
  { extern char** do_construct_list(); AddFunc("getelementlist", do_construct_list, "char**");   HashFunc("do_construct_list", do_construct_list, "char**"); }
  { extern char** do_construct_list(); AddFunc("el", do_construct_list, "char**");   HashFunc("do_construct_list", do_construct_list, "char**"); }
  { extern int do_count_list(); AddFunc("countelementlist", do_count_list, "int");   HashFunc("do_count_list", do_count_list, "int"); }
  { extern char** do_readfile(); AddFunc("readfile", do_readfile, "char**");   HashFunc("do_readfile", do_readfile, "char**"); }
  { extern int do_checkeof(); AddFunc("eof", do_checkeof, "int");   HashFunc("do_checkeof", do_checkeof, "int"); }
  { extern int do_exists(); AddFunc("exists", do_exists, "int");   HashFunc("do_exists", do_exists, "int"); }
  { extern char* do_getmsg(); AddFunc("getmsg", do_getmsg, "char*");   HashFunc("do_getmsg", do_getmsg, "char*"); }
  { extern char** do_getfields(); AddFunc("getfieldnames", do_getfields, "char**");   HashFunc("do_getfields", do_getfields, "char**"); }
  { extern char* do_pathname(); AddFunc("getpath", do_pathname, "char*");   HashFunc("do_pathname", do_pathname, "char*"); }
  { extern int do_saveparms(); AddFunc("save", do_saveparms, "int");   HashFunc("do_saveparms", do_saveparms, "int"); }
  { extern int do_restoreparms(); AddFunc("restore", do_restoreparms, "int");   HashFunc("do_restoreparms", do_restoreparms, "int"); }
  { extern void do_add_extobject(); AddFunc("addobject", do_add_extobject, "void");   HashFunc("do_add_extobject", do_add_extobject, "void"); }
  { extern int do_isa(); AddFunc("isa", do_isa, "int");   HashFunc("do_isa", do_isa, "int"); }
  { extern int do_addfield(); AddFunc("addfield", do_addfield, "int");   HashFunc("do_addfield", do_addfield, "int"); }
  { extern int do_deletefield(); AddFunc("deletefield", do_deletefield, "int");   HashFunc("do_deletefield", do_deletefield, "int"); }
  { extern int do_setfieldprot(); AddFunc("setfieldprot", do_setfieldprot, "int");   HashFunc("do_setfieldprot", do_setfieldprot, "int"); }
  { extern int do_setdefault(); AddFunc("setdefault", do_setdefault, "int");   HashFunc("do_setdefault", do_setdefault, "int"); }
  { extern char* do_getdefault(); AddFunc("getdefault", do_getdefault, "char*");   HashFunc("do_getdefault", do_getdefault, "char*"); }
  { extern int do_add_msglist(); AddFunc("addmsgdef", do_add_msglist, "int");   HashFunc("do_add_msglist", do_add_msglist, "int"); }
  { extern int do_delete_msglist(); AddFunc("deletemsgdef", do_delete_msglist, "int");   HashFunc("do_delete_msglist", do_delete_msglist, "int"); }
  { extern int do_forw_msg(); AddFunc("addforwmsg", do_forw_msg, "int");   HashFunc("do_forw_msg", do_forw_msg, "int"); }
  { extern int do_del_forw_msg(); AddFunc("deleteforwmsg", do_del_forw_msg, "int");   HashFunc("do_del_forw_msg", do_del_forw_msg, "int"); }
  { extern int do_add_class(); AddFunc("addclass", do_add_class, "int");   HashFunc("do_add_class", do_add_class, "int"); }
  { extern int do_delete_class(); AddFunc("deleteclass", do_delete_class, "int");   HashFunc("do_delete_class", do_delete_class, "int"); }
  { extern int do_add_action(); AddFunc("addaction", do_add_action, "int");   HashFunc("do_add_action", do_add_action, "int"); }
  { extern int do_delete_action(); AddFunc("deleteaction", do_delete_action, "int");   HashFunc("do_delete_action", do_delete_action, "int"); }
  { extern void do_simobjdump(); AddFunc("simobjdump", do_simobjdump, "void");   HashFunc("do_simobjdump", do_simobjdump, "void"); }
  { extern void do_initdump(); AddFunc("initdump", do_initdump, "void");   HashFunc("do_initdump", do_initdump, "void"); }
  { extern void do_enddump(); AddFunc("enddump", do_enddump, "void");   HashFunc("do_enddump", do_enddump, "void"); }
  { extern void do_simdump(); AddFunc("simdump", do_simdump, "void");   HashFunc("do_simdump", do_simdump, "void"); }
  { extern void do_simundump(); AddFunc("simundump", do_simundump, "void");   HashFunc("do_simundump", do_simundump, "void"); }
  { extern int do_swap_dumplist(); AddFunc("swapdump", do_swap_dumplist, "int");   HashFunc("do_swap_dumplist", do_swap_dumplist, "int"); }
  { extern void do_obj_substitute(); AddFunc("objsubstitute", do_obj_substitute, "void");   HashFunc("do_obj_substitute", do_obj_substitute, "void"); }
  { extern void do_msg_substitute(); AddFunc("msgsubstitute", do_msg_substitute, "void");   HashFunc("do_msg_substitute", do_msg_substitute, "void"); }
  { extern void do_substitute_info(); AddFunc("substituteinfo", do_substitute_info, "void");   HashFunc("do_substitute_info", do_substitute_info, "void"); }

/* Script variables */

} /* STARTUP_basic */
