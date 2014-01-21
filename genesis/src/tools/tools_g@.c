#include <stdio.h>
#include "tool_ext.h"
#include "tools_g@.h"

void STARTUP_tools() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];
  { extern void do_read_cell(); AddFunc("readcell", do_read_cell, "void");   HashFunc("do_read_cell", do_read_cell, "void"); }
  { extern void do_write_cell(); AddFunc("writecell", do_write_cell, "void");   HashFunc("do_write_cell", do_write_cell, "void"); }
  { extern void do_rel_position(); AddFunc("relposition", do_rel_position, "void");   HashFunc("do_rel_position", do_rel_position, "void"); }
  { extern void do_rancoord(); AddFunc("randcoord", do_rancoord, "void");   HashFunc("do_rancoord", do_rancoord, "void"); }
  { extern void do_cell_sheet(); AddFunc("cellsheet", do_cell_sheet, "void");   HashFunc("do_cell_sheet", do_cell_sheet, "void"); }
  { extern void do_gen_3d_msg(); AddFunc("gen3dmsg", do_gen_3d_msg, "void");   HashFunc("do_gen_3d_msg", do_gen_3d_msg, "void"); }
  { extern void do_dd_3d_msg(); AddFunc("dd3dmsg", do_dd_3d_msg, "void");   HashFunc("do_dd_3d_msg", do_dd_3d_msg, "void"); }
  { extern void do_rotate(); AddFunc("rotcoord", do_rotate, "void");   HashFunc("do_rotate", do_rotate, "void"); }
  { extern float do_rall_calc_Rm(); AddFunc("rallcalcRm", do_rall_calc_Rm, "float");   HashFunc("do_rall_calc_Rm", do_rall_calc_Rm, "float"); }
  { extern float do_calc_Rm(); AddFunc("calcRm", do_calc_Rm, "float");   HashFunc("do_calc_Rm", do_calc_Rm, "float"); }
  { extern float do_sumCm(); AddFunc("calcCm", do_sumCm, "float");   HashFunc("do_sumCm", do_sumCm, "float"); }
  { extern void do_egg(); AddFunc("egg", do_egg, "void");   HashFunc("do_egg", do_egg, "void"); }
  { extern void do_plane(); AddFunc("plane", do_plane, "void");   HashFunc("do_plane", do_plane, "void"); }
  { extern void do_paste_channel(); AddFunc("pastechannel", do_paste_channel, "void");   HashFunc("do_paste_channel", do_paste_channel, "void"); }
  { extern char* do_rand_comp(); AddFunc("randcomp", do_rand_comp, "char*");   HashFunc("do_rand_comp", do_rand_comp, "char*"); }
  { extern void do_random_field(); AddFunc("setrandfield", do_random_field, "void");   HashFunc("do_random_field", do_random_field, "void"); }

/* Script variables */

} /* STARTUP_tools */
