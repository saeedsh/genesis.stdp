#include <stdio.h>
#include "conc_ext.h"
#include "concen_g@.h"

void STARTUP_concen() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  argv[0] = "newclass";
  argv[1] = "concbuffer";
  do_add_class(2, argv);

  /* Definition of object concpool */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "concpool";
  tobject.type = "concpool_type";
  tobject.size = sizeof(struct concpool_type);
  { extern int ConcPool(); tobject.function = ConcPool; HashFunc("ConcPool", ConcPool, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("concentration"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("concpool");
  object->defaults->object = object;
  object->defaults->name = CopyString("concpool");
  object->author = "E. De Schutter BBF-UIA 9/95";
  { extern int ConcPool(); AddActionToObject(object, "INIT", ConcPool, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'concpool'\n")); HashFunc("ConcPool", ConcPool, "int"); }
  { extern int ConcPool(); AddActionToObject(object, "PROCESS", ConcPool, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'concpool'\n")); HashFunc("ConcPool", ConcPool, "int"); }
  { extern int ConcPool(); AddActionToObject(object, "RESET", ConcPool, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'concpool'\n")); HashFunc("ConcPool", ConcPool, "int"); }
  { extern int ConcPool(); AddActionToObject(object, "RECALC", ConcPool, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'concpool'\n")); HashFunc("ConcPool", ConcPool, "int"); }
  { extern int ConcPool(); AddActionToObject(object, "CHECK", ConcPool, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'concpool'\n")); HashFunc("ConcPool", ConcPool, "int"); }
  { extern int ConcPool(); AddActionToObject(object, "SAVE2", ConcPool, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'concpool'\n")); HashFunc("ConcPool", ConcPool, "int"); }
  { extern int ConcPool(); AddActionToObject(object, "RESTORE2", ConcPool, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'concpool'\n")); HashFunc("ConcPool", ConcPool, "int"); }
  slotnames[0] = "C";
  MsgListAdd(object, "CONCEN", concpool_CONCEN, slotnames, 1);
  slotnames[0] = "flux";
  MsgListAdd(object, "STOREINFLUX", concpool_STOREINFLUX, slotnames, 1);
  slotnames[0] = "flux";
  MsgListAdd(object, "STOREOUTFLUX", concpool_STOREOUTFLUX, slotnames, 1);
  slotnames[0] = "kBf";
  slotnames[1] = "kBb";
  slotnames[2] = "Bfree";
  slotnames[3] = "Bbound";
  MsgListAdd(object, "BUFFER", concpool_BUFFER, slotnames, 4);
  slotnames[0] = "vmax";
  slotnames[1] = "Kd";
  slotnames[2] = "Hill";
  MsgListAdd(object, "HILLPUMP", concpool_HILLPUMP, slotnames, 3);
  object->description = "Concentration pool without diffusion.  Has ionic current\nflow, first order buffering and pumps.\nThe FLUX messages assumes SI units for the Faraday \nconstant (mM, m, m^3, A), if not scale val.  Use INFLUX for an\nincrease with positive current, OUTFLUX for a decrease.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object difshell */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "difshell";
  tobject.type = "difshell_type";
  tobject.size = sizeof(struct difshell_type);
  { extern int DifShell(); tobject.function = DifShell; HashFunc("DifShell", DifShell, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("concentration"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("difshell");
  object->defaults->object = object;
  object->defaults->name = CopyString("difshell");
  object->author = "E. De Schutter BBF-UIA 4/94-9/95";
  { extern int DifShell(); AddActionToObject(object, "INIT", DifShell, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'difshell'\n")); HashFunc("DifShell", DifShell, "int"); }
  { extern int DifShell(); AddActionToObject(object, "PROCESS", DifShell, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'difshell'\n")); HashFunc("DifShell", DifShell, "int"); }
  { extern int DifShell(); AddActionToObject(object, "RESET", DifShell, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'difshell'\n")); HashFunc("DifShell", DifShell, "int"); }
  { extern int DifShell(); AddActionToObject(object, "RECALC", DifShell, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'difshell'\n")); HashFunc("DifShell", DifShell, "int"); }
  { extern int DifShell(); AddActionToObject(object, "CHECK", DifShell, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'difshell'\n")); HashFunc("DifShell", DifShell, "int"); }
  { extern int DifShell(); AddActionToObject(object, "SAVE2", DifShell, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'difshell'\n")); HashFunc("DifShell", DifShell, "int"); }
  { extern int DifShell(); AddActionToObject(object, "RESTORE2", DifShell, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'difshell'\n")); HashFunc("DifShell", DifShell, "int"); }
  slotnames[0] = "I_Ca";
  MsgListAdd(object, "INFLUX", difshell_INFLUX, slotnames, 1);
  slotnames[0] = "I_Ca";
  MsgListAdd(object, "OUTFLUX", difshell_OUTFLUX, slotnames, 1);
  slotnames[0] = "I_Ca";
  slotnames[1] = "fraction";
  MsgListAdd(object, "FINFLUX", difshell_FINFLUX, slotnames, 2);
  slotnames[0] = "I_Ca";
  slotnames[1] = "fraction";
  MsgListAdd(object, "FOUTFLUX", difshell_FOUTFLUX, slotnames, 2);
  slotnames[0] = "flux";
  MsgListAdd(object, "STOREINFLUX", difshell_STOREINFLUX, slotnames, 1);
  slotnames[0] = "flux";
  MsgListAdd(object, "STOREOUTFLUX", difshell_STOREOUTFLUX, slotnames, 1);
  slotnames[0] = "prev_C";
  slotnames[1] = "thick";
  MsgListAdd(object, "DIFF_DOWN", difshell_DIFF_DOWN, slotnames, 2);
  slotnames[0] = "prev_C";
  slotnames[1] = "thick";
  MsgListAdd(object, "DIFF_UP", difshell_DIFF_UP, slotnames, 2);
  slotnames[0] = "kBf";
  slotnames[1] = "kBb";
  slotnames[2] = "Bfree";
  slotnames[3] = "Bbound";
  MsgListAdd(object, "BUFFER", difshell_BUFFER, slotnames, 4);
  slotnames[0] = "kP";
  slotnames[1] = "Ceq";
  MsgListAdd(object, "TAUPUMP", difshell_TAUPUMP, slotnames, 2);
  slotnames[0] = "kP";
  MsgListAdd(object, "EQTAUPUMP", difshell_EQTAUPUMP, slotnames, 1);
  slotnames[0] = "vmax";
  slotnames[1] = "Kd";
  MsgListAdd(object, "MMPUMP", difshell_MMPUMP, slotnames, 2);
  slotnames[0] = "vmax";
  slotnames[1] = "Kd";
  slotnames[2] = "Hill";
  MsgListAdd(object, "HILLPUMP", difshell_HILLPUMP, slotnames, 3);
  object->description = "Concentration shell.  Has ionic current flow\none-dimensional diffusion, first order buffering and pumps.\nThe FLUX messages assumes SI units for the Faraday \nconstant (mM, m, m^3, A), if not scale val.  Use INFLUX for an\nincrease with positive current, OUTFLUX for a decrease.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object taupump */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "taupump";
  tobject.type = "taupump_type";
  tobject.size = sizeof(struct taupump_type);
  { extern int TauPump(); tobject.function = TauPump; HashFunc("TauPump", TauPump, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("gate"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("taupump");
  object->defaults->object = object;
  object->defaults->name = CopyString("taupump");
  object->author = "E. De Schutter Caltech 11/90";
  { extern int TauPump(); AddActionToObject(object, "INIT", TauPump, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'taupump'\n")); HashFunc("TauPump", TauPump, "int"); }
  { extern int TauPump(); AddActionToObject(object, "PROCESS", TauPump, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'taupump'\n")); HashFunc("TauPump", TauPump, "int"); }
  { extern int TauPump(); AddActionToObject(object, "RESET", TauPump, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'taupump'\n")); HashFunc("TauPump", TauPump, "int"); }
  { extern int TauPump(); AddActionToObject(object, "CHECK", TauPump, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'taupump'\n")); HashFunc("TauPump", TauPump, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", taupump_VOLTAGE, slotnames, 1);
  object->description = "Pump with variable time constant, tau is\nfixed to T_C (or to T_A if T_C==0) if no VOLTAGE msg is sent.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object mmpump */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "mmpump";
  tobject.type = "mmpump_type";
  tobject.size = sizeof(struct mmpump_type);
  { extern int MMPump(); tobject.function = MMPump; HashFunc("MMPump", MMPump, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("gate"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("mmpump");
  object->defaults->object = object;
  object->defaults->name = CopyString("mmpump");
  object->author = "E. De Schutter BBF-UIA 9/94";
  { extern int MMPump(); AddActionToObject(object, "INIT", MMPump, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'mmpump'\n")); HashFunc("MMPump", MMPump, "int"); }
  { extern int MMPump(); AddActionToObject(object, "PROCESS", MMPump, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'mmpump'\n")); HashFunc("MMPump", MMPump, "int"); }
  { extern int MMPump(); AddActionToObject(object, "RESET", MMPump, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'mmpump'\n")); HashFunc("MMPump", MMPump, "int"); }
  { extern int MMPump(); AddActionToObject(object, "CHECK", MMPump, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'mmpump'\n")); HashFunc("MMPump", MMPump, "int"); }
  slotnames[0] = "C";
  MsgListAdd(object, "CONCEN", mmpump_CONCEN, slotnames, 1);
  slotnames[0] = "Km";
  MsgListAdd(object, "MMKD", mmpump_MMKD, slotnames, 1);
  object->description = "Michaelis Menten plasma membrane pump: to be coupled to\na difshell.  For pump action only a MMPUMP msg out is\nneeded.  The electrogenic effect (val!=0) can also be\nsimulated by using a CONCEN msg in and an INJECT Ik msg\nout to the compartment.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object hillpump */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "hillpump";
  tobject.type = "hillpump_type";
  tobject.size = sizeof(struct hillpump_type);
  { extern int HillPump(); tobject.function = HillPump; HashFunc("HillPump", HillPump, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("gate"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("hillpump");
  object->defaults->object = object;
  object->defaults->name = CopyString("hillpump");
  object->author = "E. De Schutter BBF-UIA 11/97";
  { extern int HillPump(); AddActionToObject(object, "INIT", HillPump, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'hillpump'\n")); HashFunc("HillPump", HillPump, "int"); }
  { extern int HillPump(); AddActionToObject(object, "PROCESS", HillPump, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'hillpump'\n")); HashFunc("HillPump", HillPump, "int"); }
  { extern int HillPump(); AddActionToObject(object, "RESET", HillPump, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'hillpump'\n")); HashFunc("HillPump", HillPump, "int"); }
  { extern int HillPump(); AddActionToObject(object, "CHECK", HillPump, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'hillpump'\n")); HashFunc("HillPump", HillPump, "int"); }
  slotnames[0] = "Km";
  MsgListAdd(object, "MMKD", hillpump_MMKD, slotnames, 1);
  object->description = "Michaelis Menten store pump: to be coupled to a difshell\n(removes ions from it) and optionally to a concpool (adds\nions to it). For pump action only 1 or 2 HILLPUMP msgs out\nare needed.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object fixbuffer */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "fixbuffer";
  tobject.type = "fixbuffer_type";
  tobject.size = sizeof(struct fixbuffer_type);
  { extern int FixBuffer(); tobject.function = FixBuffer; HashFunc("FixBuffer", FixBuffer, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("concbuffer"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("fixbuffer");
  object->defaults->object = object;
  object->defaults->name = CopyString("fixbuffer");
  object->author = "E. De Schutter BBF-UIA 8/94";
  { extern int FixBuffer(); AddActionToObject(object, "INIT", FixBuffer, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'fixbuffer'\n")); HashFunc("FixBuffer", FixBuffer, "int"); }
  { extern int FixBuffer(); AddActionToObject(object, "PROCESS", FixBuffer, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'fixbuffer'\n")); HashFunc("FixBuffer", FixBuffer, "int"); }
  { extern int FixBuffer(); AddActionToObject(object, "RESET", FixBuffer, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'fixbuffer'\n")); HashFunc("FixBuffer", FixBuffer, "int"); }
  { extern int FixBuffer(); AddActionToObject(object, "CHECK", FixBuffer, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'fixbuffer'\n")); HashFunc("FixBuffer", FixBuffer, "int"); }
  { extern int FixBuffer(); AddActionToObject(object, "SAVE2", FixBuffer, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'fixbuffer'\n")); HashFunc("FixBuffer", FixBuffer, "int"); }
  { extern int FixBuffer(); AddActionToObject(object, "RESTORE2", FixBuffer, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'fixbuffer'\n")); HashFunc("FixBuffer", FixBuffer, "int"); }
  slotnames[0] = "C";
  MsgListAdd(object, "CONCEN", fixbuffer_CONCEN, slotnames, 1);
  object->description = "First order fixed buffer.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object difbuffer */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "difbuffer";
  tobject.type = "difbuffer_type";
  tobject.size = sizeof(struct difbuffer_type);
  { extern int DifBuffer(); tobject.function = DifBuffer; HashFunc("DifBuffer", DifBuffer, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("concbuffer"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("difbuffer");
  object->defaults->object = object;
  object->defaults->name = CopyString("difbuffer");
  object->author = "E. De Schutter BBF-UIA 8/94";
  { extern int DifBuffer(); AddActionToObject(object, "INIT", DifBuffer, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'difbuffer'\n")); HashFunc("DifBuffer", DifBuffer, "int"); }
  { extern int DifBuffer(); AddActionToObject(object, "PROCESS", DifBuffer, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'difbuffer'\n")); HashFunc("DifBuffer", DifBuffer, "int"); }
  { extern int DifBuffer(); AddActionToObject(object, "RESET", DifBuffer, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'difbuffer'\n")); HashFunc("DifBuffer", DifBuffer, "int"); }
  { extern int DifBuffer(); AddActionToObject(object, "RECALC", DifBuffer, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'difbuffer'\n")); HashFunc("DifBuffer", DifBuffer, "int"); }
  { extern int DifBuffer(); AddActionToObject(object, "CHECK", DifBuffer, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'difbuffer'\n")); HashFunc("DifBuffer", DifBuffer, "int"); }
  { extern int DifBuffer(); AddActionToObject(object, "SAVE2", DifBuffer, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'difbuffer'\n")); HashFunc("DifBuffer", DifBuffer, "int"); }
  { extern int DifBuffer(); AddActionToObject(object, "RESTORE2", DifBuffer, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'difbuffer'\n")); HashFunc("DifBuffer", DifBuffer, "int"); }
  slotnames[0] = "C";
  MsgListAdd(object, "CONCEN", difbuffer_CONCEN, slotnames, 1);
  slotnames[0] = "prev_free";
  slotnames[1] = "thick";
  MsgListAdd(object, "BDIFF_DOWN", difbuffer_BDIFF_DOWN, slotnames, 2);
  slotnames[0] = "prev_free";
  slotnames[1] = "thick";
  MsgListAdd(object, "DIFF_DOWN", difbuffer_DIFF_DOWN, slotnames, 2);
  slotnames[0] = "prev_free";
  slotnames[1] = "thick";
  MsgListAdd(object, "BDIFF_UP", difbuffer_BDIFF_UP, slotnames, 2);
  slotnames[0] = "prev_free";
  slotnames[1] = "thick";
  MsgListAdd(object, "DIFF_UP", difbuffer_DIFF_UP, slotnames, 2);
  object->description = "First order diffusable buffer. D Bfree == D Bbound.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object dif2buffer */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "dif2buffer";
  tobject.type = "dif2buffer_type";
  tobject.size = sizeof(struct dif2buffer_type);
  { extern int Dif2Buffer(); tobject.function = Dif2Buffer; HashFunc("Dif2Buffer", Dif2Buffer, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("concbuffer"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("dif2buffer");
  object->defaults->object = object;
  object->defaults->name = CopyString("dif2buffer");
  object->author = "E. De Schutter BBF-UIA 4/96";
  { extern int Dif2Buffer(); AddActionToObject(object, "INIT", Dif2Buffer, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'dif2buffer'\n")); HashFunc("Dif2Buffer", Dif2Buffer, "int"); }
  { extern int Dif2Buffer(); AddActionToObject(object, "PROCESS", Dif2Buffer, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'dif2buffer'\n")); HashFunc("Dif2Buffer", Dif2Buffer, "int"); }
  { extern int Dif2Buffer(); AddActionToObject(object, "RESET", Dif2Buffer, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'dif2buffer'\n")); HashFunc("Dif2Buffer", Dif2Buffer, "int"); }
  { extern int Dif2Buffer(); AddActionToObject(object, "RECALC", Dif2Buffer, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'dif2buffer'\n")); HashFunc("Dif2Buffer", Dif2Buffer, "int"); }
  { extern int Dif2Buffer(); AddActionToObject(object, "CHECK", Dif2Buffer, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'dif2buffer'\n")); HashFunc("Dif2Buffer", Dif2Buffer, "int"); }
  { extern int Dif2Buffer(); AddActionToObject(object, "SAVE2", Dif2Buffer, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'dif2buffer'\n")); HashFunc("Dif2Buffer", Dif2Buffer, "int"); }
  { extern int Dif2Buffer(); AddActionToObject(object, "RESTORE2", Dif2Buffer, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'dif2buffer'\n")); HashFunc("Dif2Buffer", Dif2Buffer, "int"); }
  slotnames[0] = "C";
  MsgListAdd(object, "CONCEN", dif2buffer_CONCEN, slotnames, 1);
  slotnames[0] = "prev_free";
  slotnames[1] = "prev_bound";
  slotnames[2] = "thick";
  MsgListAdd(object, "BDIFF_DOWN", dif2buffer_BDIFF_DOWN, slotnames, 3);
  slotnames[0] = "prev_free";
  slotnames[1] = "prev_bound";
  slotnames[2] = "thick";
  MsgListAdd(object, "BDIFF_UP", dif2buffer_BDIFF_UP, slotnames, 3);
  object->description = "First order diffusable buffer. D Bfree != D Bbound\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object fura2 */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "fura2";
  tobject.type = "fura2_type";
  tobject.size = sizeof(struct fura2_type);
  { extern int FuraRatio(); tobject.function = FuraRatio; HashFunc("FuraRatio", FuraRatio, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("concentration"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("fura2");
  object->defaults->object = object;
  object->defaults->name = CopyString("fura2");
  object->author = "E. De Schutter BBF-UIA 1/95";
  { extern int FuraRatio(); AddActionToObject(object, "PROCESS", FuraRatio, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'fura2'\n")); HashFunc("FuraRatio", FuraRatio, "int"); }
  { extern int FuraRatio(); AddActionToObject(object, "RESET", FuraRatio, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'fura2'\n")); HashFunc("FuraRatio", FuraRatio, "int"); }
  slotnames[0] = "Bfree";
  slotnames[1] = "Bbound";
  slotnames[2] = "vol";
  MsgListAdd(object, "CONCEN", fura2_CONCEN, slotnames, 3);
  object->description = "Computes fura2 fluorescence in a single difshell.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */
  CreateScriptInt("USERDEF");
  SetScriptInt("USERDEF", 3);
  CreateScriptInt("TUBE");
  SetScriptInt("TUBE", 2);
  CreateScriptInt("SLAB");
  SetScriptInt("SLAB", 1);
  CreateScriptInt("SLICE");
  SetScriptInt("SLICE", 1);
  CreateScriptInt("SHELL");
  SetScriptInt("SHELL", 0);

} /* STARTUP_concen */
