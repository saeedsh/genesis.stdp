#include <stdio.h>
#include "simconn_ext.h"
#include "simconn_g@.h"

void STARTUP_simconn() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];
  { extern void do_setconn(); AddFunc("setconn", do_setconn, "void");   HashFunc("do_setconn", do_setconn, "void"); }
  { extern void do_showconn(); AddFunc("showconn", do_showconn, "void");   HashFunc("do_showconn", do_showconn, "void"); }
  { extern void do_add_connection(); AddFunc("connect", do_add_connection, "void");   HashFunc("do_add_connection", do_add_connection, "void"); }
  { extern void do_delete_connection(); AddFunc("delete_connection", do_delete_connection, "void");   HashFunc("do_delete_connection", do_delete_connection, "void"); }
  { extern void do_region_connect(); AddFunc("region_connect", do_region_connect, "void");   HashFunc("do_region_connect", do_region_connect, "void"); }
  { extern void do_connection_status(); AddFunc("cstat", do_connection_status, "void");   HashFunc("do_connection_status", do_connection_status, "void"); }
  { extern char* do_getconn(); AddFunc("getconn", do_getconn, "char*");   HashFunc("do_getconn", do_getconn, "char*"); }

/* Script variables */

} /* STARTUP_simconn */
