#include <stdio.h>
#include "toolconn_ext.h"
#include "toolconn_g@.h"

void STARTUP_toolconn() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];
  { extern void do_volume_connect(); AddFunc("volume_connect", do_volume_connect, "void");   HashFunc("do_volume_connect", do_volume_connect, "void"); }

/* Script variables */

} /* STARTUP_toolconn */
