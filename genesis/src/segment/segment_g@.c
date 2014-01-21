#include <stdio.h>
#include "seg_ext.h"
#include "segment_g@.h"

void STARTUP_segment() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  argv[0] = "newclass";
  argv[1] = "concentration";
  do_add_class(2, argv);
  { extern void do_balance_Em(); AddFunc("balanceEm", do_balance_Em, "void");   HashFunc("do_balance_Em", do_balance_Em, "void"); }

  /* Definition of object channelA */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "channelA";
  tobject.type = "channelA_type";
  tobject.size = sizeof(struct channelA_type);
  { extern int ChannelA(); tobject.function = ChannelA; HashFunc("ChannelA", ChannelA, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("channelA");
  object->defaults->object = object;
  object->defaults->name = CopyString("channelA");
  object->author = "M.Wilson Caltech 6/88";
  { extern int ChannelA(); AddActionToObject(object, "INIT", ChannelA, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'channelA'\n")); HashFunc("ChannelA", ChannelA, "int"); }
  { extern int ChannelA(); AddActionToObject(object, "PROCESS", ChannelA, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'channelA'\n")); HashFunc("ChannelA", ChannelA, "int"); }
  { extern int ChannelA(); AddActionToObject(object, "RESET", ChannelA, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'channelA'\n")); HashFunc("ChannelA", ChannelA, "int"); }
  { extern int ChannelA(); AddActionToObject(object, "CHECK", ChannelA, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'channelA'\n")); HashFunc("ChannelA", ChannelA, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", channelA_VOLTAGE, slotnames, 1);
  slotnames[0] = "activation";
  MsgListAdd(object, "ACTIVATION", channelA_ACTIVATION, slotnames, 1);
  object->description = "Direct mapping of activation to conductance.\nCalculates Ik = (Ek - Vk)Gk.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object channelB */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "channelB";
  tobject.type = "channelB_type";
  tobject.size = sizeof(struct channelB_type);
  { extern int ChannelB(); tobject.function = ChannelB; HashFunc("ChannelB", ChannelB, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("channelB");
  object->defaults->object = object;
  object->defaults->name = CopyString("channelB");
  object->author = "M.Wilson Caltech 6/88";
  { extern int ChannelB(); AddActionToObject(object, "INIT", ChannelB, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'channelB'\n")); HashFunc("ChannelB", ChannelB, "int"); }
  { extern int ChannelB(); AddActionToObject(object, "PROCESS", ChannelB, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'channelB'\n")); HashFunc("ChannelB", ChannelB, "int"); }
  { extern int ChannelB(); AddActionToObject(object, "RESET", ChannelB, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'channelB'\n")); HashFunc("ChannelB", ChannelB, "int"); }
  { extern int ChannelB(); AddActionToObject(object, "CHECK", ChannelB, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'channelB'\n")); HashFunc("ChannelB", ChannelB, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", channelB_VOLTAGE, slotnames, 1);
  slotnames[0] = "activation";
  MsgListAdd(object, "ACTIVATION", channelB_ACTIVATION, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object channelC */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "channelC";
  tobject.type = "channelC_type";
  tobject.size = sizeof(struct channelC_type);
  { extern int ChannelC(); tobject.function = ChannelC; HashFunc("ChannelC", ChannelC, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("channelC");
  object->defaults->object = object;
  object->defaults->name = CopyString("channelC");
  object->author = "M.Wilson Caltech 6/88";
  { extern int ChannelC(); AddActionToObject(object, "INIT", ChannelC, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'channelC'\n")); HashFunc("ChannelC", ChannelC, "int"); }
  { extern int ChannelC(); AddActionToObject(object, "PROCESS", ChannelC, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'channelC'\n")); HashFunc("ChannelC", ChannelC, "int"); }
  { extern int ChannelC(); AddActionToObject(object, "RESET", ChannelC, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'channelC'\n")); HashFunc("ChannelC", ChannelC, "int"); }
  { extern int ChannelC(); AddActionToObject(object, "CHECK", ChannelC, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'channelC'\n")); HashFunc("ChannelC", ChannelC, "int"); }
  { extern int ChannelC(); AddActionToObject(object, "RECALC", ChannelC, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'channelC'\n")); HashFunc("ChannelC", ChannelC, "int"); }
  { extern int ChannelC(); AddActionToObject(object, "SAVE2", ChannelC, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'channelC'\n")); HashFunc("ChannelC", ChannelC, "int"); }
  { extern int ChannelC(); AddActionToObject(object, "RESTORE2", ChannelC, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'channelC'\n")); HashFunc("ChannelC", ChannelC, "int"); }
  slotnames[0] = "activation";
  MsgListAdd(object, "ACTIVATION", channelC_ACTIVATION, slotnames, 1);
  slotnames[0] = "probability";
  slotnames[1] = "amplitude";
  MsgListAdd(object, "RAND_ACTIVATION", channelC_RAND_ACTIVATION, slotnames, 2);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object channelC2 */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "channelC2";
  tobject.type = "channelC2_type";
  tobject.size = sizeof(struct channelC2_type);
  { extern int ChannelC2(); tobject.function = ChannelC2; HashFunc("ChannelC2", ChannelC2, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("channelC2");
  object->defaults->object = object;
  object->defaults->name = CopyString("channelC2");
  object->author = "M.Wilson Caltech 6/88";
  { extern int ChannelC2(); AddActionToObject(object, "INIT", ChannelC2, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'channelC2'\n")); HashFunc("ChannelC2", ChannelC2, "int"); }
  { extern int ChannelC2(); AddActionToObject(object, "PROCESS", ChannelC2, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'channelC2'\n")); HashFunc("ChannelC2", ChannelC2, "int"); }
  { extern int ChannelC2(); AddActionToObject(object, "RESET", ChannelC2, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'channelC2'\n")); HashFunc("ChannelC2", ChannelC2, "int"); }
  { extern int ChannelC2(); AddActionToObject(object, "CHECK", ChannelC2, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'channelC2'\n")); HashFunc("ChannelC2", ChannelC2, "int"); }
  { extern int ChannelC2(); AddActionToObject(object, "RECALC", ChannelC2, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'channelC2'\n")); HashFunc("ChannelC2", ChannelC2, "int"); }
  { extern int ChannelC2(); AddActionToObject(object, "SAVE2", ChannelC2, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'channelC2'\n")); HashFunc("ChannelC2", ChannelC2, "int"); }
  { extern int ChannelC2(); AddActionToObject(object, "RESTORE2", ChannelC2, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'channelC2'\n")); HashFunc("ChannelC2", ChannelC2, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", channelC2_VOLTAGE, slotnames, 1);
  slotnames[0] = "activation";
  MsgListAdd(object, "ACTIVATION", channelC2_ACTIVATION, slotnames, 1);
  slotnames[0] = "probability";
  slotnames[1] = "amplitude";
  MsgListAdd(object, "RAND_ACTIVATION", channelC2_RAND_ACTIVATION, slotnames, 2);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object channelC3 */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "channelC3";
  tobject.type = "channelC3_type";
  tobject.size = sizeof(struct channelC3_type);
  { extern int ChannelC3(); tobject.function = ChannelC3; HashFunc("ChannelC3", ChannelC3, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("channelC3");
  object->defaults->object = object;
  object->defaults->name = CopyString("channelC3");
  object->author = "E. De Schutter 11/91, M.Wilson Caltech 6/88";
  { extern int ChannelC3(); AddActionToObject(object, "INIT", ChannelC3, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'channelC3'\n")); HashFunc("ChannelC3", ChannelC3, "int"); }
  { extern int ChannelC3(); AddActionToObject(object, "PROCESS", ChannelC3, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'channelC3'\n")); HashFunc("ChannelC3", ChannelC3, "int"); }
  { extern int ChannelC3(); AddActionToObject(object, "RESET", ChannelC3, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'channelC3'\n")); HashFunc("ChannelC3", ChannelC3, "int"); }
  { extern int ChannelC3(); AddActionToObject(object, "CHECK", ChannelC3, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'channelC3'\n")); HashFunc("ChannelC3", ChannelC3, "int"); }
  { extern int ChannelC3(); AddActionToObject(object, "RECALC", ChannelC3, 0) ? 0 : (Error(), printf("adding action 'RECALC' to object 'channelC3'\n")); HashFunc("ChannelC3", ChannelC3, "int"); }
  { extern int ChannelC3(); AddActionToObject(object, "SAVE2", ChannelC3, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'channelC3'\n")); HashFunc("ChannelC3", ChannelC3, "int"); }
  { extern int ChannelC3(); AddActionToObject(object, "RESTORE2", ChannelC3, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'channelC3'\n")); HashFunc("ChannelC3", ChannelC3, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", channelC3_VOLTAGE, slotnames, 1);
  slotnames[0] = "activation";
  MsgListAdd(object, "ACTIVATION", channelC3_ACTIVATION, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object manuelconduct */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "manuelconduct";
  tobject.type = "manuelconduct_type";
  tobject.size = sizeof(struct manuelconduct_type);
  { extern int ManuelConduct(); tobject.function = ManuelConduct; HashFunc("ManuelConduct", ManuelConduct, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("manuelconduct");
  object->defaults->object = object;
  object->defaults->name = CopyString("manuelconduct");
  object->author = "M.Wilson Caltech 2/89";
  { extern int ManuelConduct(); AddActionToObject(object, "INIT", ManuelConduct, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'manuelconduct'\n")); HashFunc("ManuelConduct", ManuelConduct, "int"); }
  { extern int ManuelConduct(); AddActionToObject(object, "PROCESS", ManuelConduct, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'manuelconduct'\n")); HashFunc("ManuelConduct", ManuelConduct, "int"); }
  { extern int ManuelConduct(); AddActionToObject(object, "RESET", ManuelConduct, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'manuelconduct'\n")); HashFunc("ManuelConduct", ManuelConduct, "int"); }
  { extern int ManuelConduct(); AddActionToObject(object, "CHECK", ManuelConduct, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'manuelconduct'\n")); HashFunc("ManuelConduct", ManuelConduct, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", manuelconduct_VOLTAGE, slotnames, 1);
  slotnames[0] = "activation";
  MsgListAdd(object, "ACTIVATION", manuelconduct_ACTIVATION, slotnames, 1);
  slotnames[0] = "probability";
  slotnames[1] = "amplitude";
  MsgListAdd(object, "RAND_ACTIVATION", manuelconduct_RAND_ACTIVATION, slotnames, 2);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object Ca_concen */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "Ca_concen";
  tobject.type = "Ca_concen_type";
  tobject.size = sizeof(struct Ca_concen_type);
  { extern int CaConcen(); tobject.function = CaConcen; HashFunc("CaConcen", CaConcen, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("concentration"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("Ca_concen");
  object->defaults->object = object;
  object->defaults->name = CopyString("Ca_concen");
  object->author = "M.Wilson Caltech 2/89, E. De Schutter 91";
  { extern int CaConcen(); AddActionToObject(object, "INIT", CaConcen, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'Ca_concen'\n")); HashFunc("CaConcen", CaConcen, "int"); }
  { extern int CaConcen(); AddActionToObject(object, "PROCESS", CaConcen, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'Ca_concen'\n")); HashFunc("CaConcen", CaConcen, "int"); }
  { extern int CaConcen(); AddActionToObject(object, "RESET", CaConcen, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'Ca_concen'\n")); HashFunc("CaConcen", CaConcen, "int"); }
  { extern int CaConcen(); AddActionToObject(object, "CHECK", CaConcen, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'Ca_concen'\n")); HashFunc("CaConcen", CaConcen, "int"); }
  { extern int CaConcen(); AddActionToObject(object, "SAVE2", CaConcen, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'Ca_concen'\n")); HashFunc("CaConcen", CaConcen, "int"); }
  { extern int CaConcen(); AddActionToObject(object, "RESTORE2", CaConcen, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'Ca_concen'\n")); HashFunc("CaConcen", CaConcen, "int"); }
  slotnames[0] = "I_Ca";
  MsgListAdd(object, "I_Ca", Ca_concen_I_Ca, slotnames, 1);
  slotnames[0] = "I_Ca";
  slotnames[1] = "fraction";
  MsgListAdd(object, "fI_Ca", Ca_concen_fI_Ca, slotnames, 2);
  slotnames[0] = "I_Ca";
  MsgListAdd(object, "INCREASE", Ca_concen_INCREASE, slotnames, 1);
  slotnames[0] = "I_Ca";
  MsgListAdd(object, "DECREASE", Ca_concen_DECREASE, slotnames, 1);
  slotnames[0] = "Ca_base";
  MsgListAdd(object, "BASE", Ca_concen_BASE, slotnames, 1);
  object->description = "Single pool model for Ca concentration. \n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object Mg_block */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "Mg_block";
  tobject.type = "Mg_block_type";
  tobject.size = sizeof(struct Mg_block_type);
  { extern int MgBlock(); tobject.function = MgBlock; HashFunc("MgBlock", MgBlock, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("Mg_block");
  object->defaults->object = object;
  object->defaults->name = CopyString("Mg_block");
  object->author = "E. De Schutter Caltech 11/90";
  { extern int MgBlock(); AddActionToObject(object, "INIT", MgBlock, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'Mg_block'\n")); HashFunc("MgBlock", MgBlock, "int"); }
  { extern int MgBlock(); AddActionToObject(object, "PROCESS", MgBlock, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'Mg_block'\n")); HashFunc("MgBlock", MgBlock, "int"); }
  { extern int MgBlock(); AddActionToObject(object, "RESET", MgBlock, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'Mg_block'\n")); HashFunc("MgBlock", MgBlock, "int"); }
  { extern int MgBlock(); AddActionToObject(object, "CHECK", MgBlock, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'Mg_block'\n")); HashFunc("MgBlock", MgBlock, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", Mg_block_VOLTAGE, slotnames, 1);
  slotnames[0] = "Gk";
  MsgListAdd(object, "CHANNEL1", Mg_block_CHANNEL1, slotnames, 1);
  slotnames[0] = "Gk";
  slotnames[1] = "Ek";
  MsgListAdd(object, "CHANNEL2", Mg_block_CHANNEL2, slotnames, 2);
  slotnames[0] = "Gk";
  slotnames[1] = "Ek";
  MsgListAdd(object, "CHANNEL", Mg_block_CHANNEL, slotnames, 2);
  slotnames[0] = "Zk";
  MsgListAdd(object, "CHARGE", Mg_block_CHARGE, slotnames, 1);
  object->description = "Implementation of voltage and [Mg]-dependent\nblocking of a channel.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object leakage */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "leakage";
  tobject.type = "leakage_type";
  tobject.size = sizeof(struct leakage_type);
  { extern int Leakage(); tobject.function = Leakage; HashFunc("Leakage", Leakage, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("leakage");
  object->defaults->object = object;
  object->defaults->name = CopyString("leakage");
  object->author = "M.Wilson Caltech 6/88";
  { extern int Leakage(); AddActionToObject(object, "INIT", Leakage, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'leakage'\n")); HashFunc("Leakage", Leakage, "int"); }
  { extern int Leakage(); AddActionToObject(object, "PROCESS", Leakage, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'leakage'\n")); HashFunc("Leakage", Leakage, "int"); }
  { extern int Leakage(); AddActionToObject(object, "RESET", Leakage, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'leakage'\n")); HashFunc("Leakage", Leakage, "int"); }
  { extern int Leakage(); AddActionToObject(object, "CHECK", Leakage, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'leakage'\n")); HashFunc("Leakage", Leakage, "int"); }
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", leakage_VOLTAGE, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object compartment */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "compartment";
  tobject.type = "compartment_type";
  tobject.size = sizeof(struct compartment_type);
  { extern int Compartment(); tobject.function = Compartment; HashFunc("Compartment", Compartment, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("membrane"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("compartment");
  object->defaults->object = object;
  object->defaults->name = CopyString("compartment");
  object->author = "M.Wilson Caltech 6/88";
  { extern int Compartment(); AddActionToObject(object, "INIT", Compartment, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'compartment'\n")); HashFunc("Compartment", Compartment, "int"); }
  { extern int Compartment(); AddActionToObject(object, "PROCESS", Compartment, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'compartment'\n")); HashFunc("Compartment", Compartment, "int"); }
  { extern int Compartment(); AddActionToObject(object, "RESET", Compartment, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'compartment'\n")); HashFunc("Compartment", Compartment, "int"); }
  { extern int Compartment(); AddActionToObject(object, "CHECK", Compartment, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'compartment'\n")); HashFunc("Compartment", Compartment, "int"); }
  { extern int Compartment(); AddActionToObject(object, "SET", Compartment, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'compartment'\n")); HashFunc("Compartment", Compartment, "int"); }
  { extern int Compartment(); AddActionToObject(object, "SAVE2", Compartment, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'compartment'\n")); HashFunc("Compartment", Compartment, "int"); }
  { extern int Compartment(); AddActionToObject(object, "RESTORE2", Compartment, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'compartment'\n")); HashFunc("Compartment", Compartment, "int"); }
  slotnames[0] = "Gk";
  slotnames[1] = "Ek";
  MsgListAdd(object, "CHANNEL", compartment_CHANNEL, slotnames, 2);
  slotnames[0] = "Ra";
  slotnames[1] = "Vm";
  MsgListAdd(object, "RAXIAL", compartment_RAXIAL, slotnames, 2);
  slotnames[0] = "Vm";
  MsgListAdd(object, "AXIAL", compartment_AXIAL, slotnames, 1);
  slotnames[0] = "inject";
  MsgListAdd(object, "INJECT", compartment_INJECT, slotnames, 1);
  slotnames[0] = "Em";
  MsgListAdd(object, "EREST", compartment_EREST, slotnames, 1);
  SetFieldListProt(object, "Rm", FIELD_READWRITE);
  SetFieldListDesc(object, "Rm", "membrane resistance");
DirectSetElement(object->defaults, "Rm", "1");
  SetFieldListProt(object, "Cm", FIELD_READWRITE);
  SetFieldListDesc(object, "Cm", "membrane capacitance");
DirectSetElement(object->defaults, "Cm", "1");
  SetFieldListProt(object, "Em", FIELD_READWRITE);
  SetFieldListDesc(object, "Em", "resting potential");
  SetFieldListProt(object, "initVm", FIELD_READWRITE);
  SetFieldListDesc(object, "initVm", "initial Vm value at reset");
  SetFieldListProt(object, "Ra", FIELD_READWRITE);
  SetFieldListDesc(object, "Ra", "axial resistance");
  SetFieldListProt(object, "inject", FIELD_READWRITE);
  SetFieldListDesc(object, "inject", "injected current");
  SetFieldListProt(object, "dia", FIELD_READWRITE);
  SetFieldListDesc(object, "dia", "compartment diameter");
  SetFieldListProt(object, "Vm", FIELD_READWRITE);
  SetFieldListDesc(object, "Vm", "compartment potential");
  object->description = "Axially asymmetric compartment. Ra is located on\none side of the compartment. This is slightly more\ncomputationally efficient than the symmetric\ncounterpart.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object symcompartment */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "symcompartment";
  tobject.type = "symcompartment_type";
  tobject.size = sizeof(struct symcompartment_type);
  { extern int SymCompartment(); tobject.function = SymCompartment; HashFunc("SymCompartment", SymCompartment, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("membrane"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("symcompartment");
  object->defaults->object = object;
  object->defaults->name = CopyString("symcompartment");
  object->author = "M.Wilson Caltech 5/89, E.De Schutter 11/90";
  { extern int SymCompartment(); AddActionToObject(object, "INIT", SymCompartment, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'symcompartment'\n")); HashFunc("SymCompartment", SymCompartment, "int"); }
  { extern int SymCompartment(); AddActionToObject(object, "PROCESS", SymCompartment, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'symcompartment'\n")); HashFunc("SymCompartment", SymCompartment, "int"); }
  { extern int SymCompartment(); AddActionToObject(object, "RESET", SymCompartment, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'symcompartment'\n")); HashFunc("SymCompartment", SymCompartment, "int"); }
  { extern int SymCompartment(); AddActionToObject(object, "CHECK", SymCompartment, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'symcompartment'\n")); HashFunc("SymCompartment", SymCompartment, "int"); }
  { extern int SymCompartment(); AddActionToObject(object, "SET", SymCompartment, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'symcompartment'\n")); HashFunc("SymCompartment", SymCompartment, "int"); }
  { extern int SymCompartment(); AddActionToObject(object, "SAVE2", SymCompartment, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'symcompartment'\n")); HashFunc("SymCompartment", SymCompartment, "int"); }
  { extern int SymCompartment(); AddActionToObject(object, "RESTORE2", SymCompartment, 0) ? 0 : (Error(), printf("adding action 'RESTORE2' to object 'symcompartment'\n")); HashFunc("SymCompartment", SymCompartment, "int"); }
  slotnames[0] = "Gk";
  slotnames[1] = "Ek";
  MsgListAdd(object, "CHANNEL", symcompartment_CHANNEL, slotnames, 2);
  slotnames[0] = "Ra";
  slotnames[1] = "Vm";
  MsgListAdd(object, "RAXIAL", symcompartment_RAXIAL, slotnames, 2);
  slotnames[0] = "Ra";
  slotnames[1] = "Vm";
  MsgListAdd(object, "RAXIAL2", symcompartment_RAXIAL2, slotnames, 2);
  slotnames[0] = "Ra";
  slotnames[1] = "Vm";
  MsgListAdd(object, "AXIAL", symcompartment_AXIAL, slotnames, 2);
  slotnames[0] = "Ra";
  slotnames[1] = "Vm";
  MsgListAdd(object, "CONNECTTAIL", symcompartment_CONNECTTAIL, slotnames, 2);
  slotnames[0] = "Ra";
  slotnames[1] = "Vm";
  MsgListAdd(object, "CONNECTHEAD", symcompartment_CONNECTHEAD, slotnames, 2);
  slotnames[0] = "inject";
  MsgListAdd(object, "INJECT", symcompartment_INJECT, slotnames, 1);
  slotnames[0] = "Ra";
  slotnames[1] = "Vm";
  MsgListAdd(object, "CONNECTCROSS", symcompartment_CONNECTCROSS, slotnames, 2);
  slotnames[0] = "Em";
  MsgListAdd(object, "EREST", symcompartment_EREST, slotnames, 1);
  SetFieldListProt(object, "Rm", FIELD_READWRITE);
  SetFieldListDesc(object, "Rm", "membrane resistance");
DirectSetElement(object->defaults, "Rm", "1");
  SetFieldListProt(object, "Cm", FIELD_READWRITE);
  SetFieldListDesc(object, "Cm", "membrane capacitance");
DirectSetElement(object->defaults, "Cm", "1");
  SetFieldListProt(object, "Em", FIELD_READWRITE);
  SetFieldListDesc(object, "Em", "resting potential");
  SetFieldListProt(object, "initVm", FIELD_READWRITE);
  SetFieldListDesc(object, "initVm", "initial Vm value at reset");
  SetFieldListProt(object, "Ra", FIELD_READWRITE);
  SetFieldListDesc(object, "Ra", "axial resistance");
  SetFieldListProt(object, "inject", FIELD_READWRITE);
  SetFieldListDesc(object, "inject", "injected current");
  SetFieldListProt(object, "dia", FIELD_READWRITE);
  SetFieldListDesc(object, "dia", "compartment diameter");
  SetFieldListProt(object, "Vm", FIELD_READWRITE);
  SetFieldListDesc(object, "Vm", "compartment potential");
  object->description = "Axially symmetric compartment. Ra is divided into\ntwo equal components across the compartment.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object unit */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "unit";
  tobject.type = "unit_type";
  tobject.size = sizeof(struct unit_type);
  { extern int Unit(); tobject.function = Unit; HashFunc("Unit", Unit, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("unit");
  object->defaults->object = object;
  object->defaults->name = CopyString("unit");
  object->author = "M.Wilson Caltech 6/88";
  { extern int Unit(); AddActionToObject(object, "INIT", Unit, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'unit'\n")); HashFunc("Unit", Unit, "int"); }
  { extern int Unit(); AddActionToObject(object, "RESET", Unit, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'unit'\n")); HashFunc("Unit", Unit, "int"); }
  { extern int Unit(); AddActionToObject(object, "PROCESS", Unit, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'unit'\n")); HashFunc("Unit", Unit, "int"); }
  { extern int Unit(); AddActionToObject(object, "CHECK", Unit, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'unit'\n")); HashFunc("Unit", Unit, "int"); }
  slotnames[0] = "inject";
  MsgListAdd(object, "INJECT", unit_INJECT, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object RC */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "RC";
  tobject.type = "RCunit_type";
  tobject.size = sizeof(struct RCunit_type);
  { extern int RC_Unit(); tobject.function = RC_Unit; HashFunc("RC_Unit", RC_Unit, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("RC");
  object->defaults->object = object;
  object->defaults->name = CopyString("RC");
  object->author = "M.Wilson Caltech 6/88";
  { extern int RC_Unit(); AddActionToObject(object, "RESET", RC_Unit, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'RC'\n")); HashFunc("RC_Unit", RC_Unit, "int"); }
  { extern int RC_Unit(); AddActionToObject(object, "PROCESS", RC_Unit, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'RC'\n")); HashFunc("RC_Unit", RC_Unit, "int"); }
  { extern int RC_Unit(); AddActionToObject(object, "CHECK", RC_Unit, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'RC'\n")); HashFunc("RC_Unit", RC_Unit, "int"); }
  slotnames[0] = "inject";
  MsgListAdd(object, "INJECT", RC_INJECT, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object site */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "site";
  tobject.type = "site_type";
  tobject.size = sizeof(struct site_type);
  { extern int Site(); tobject.function = Site; HashFunc("Site", Site, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("site");
  object->defaults->object = object;
  object->defaults->name = CopyString("site");
  object->author = "M.Wilson Caltech 6/88";
  { extern int Site(); AddActionToObject(object, "INIT", Site, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'site'\n")); HashFunc("Site", Site, "int"); }
  { extern int Site(); AddActionToObject(object, "RESET", Site, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'site'\n")); HashFunc("Site", Site, "int"); }
  { extern int Site(); AddActionToObject(object, "PROCESS", Site, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'site'\n")); HashFunc("Site", Site, "int"); }
  slotnames[0] = "activation";
  MsgListAdd(object, "ACTIVATION", site_ACTIVATION, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object ghk */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "ghk";
  tobject.type = "ghk_type";
  tobject.size = sizeof(struct ghk_type);
  { extern int Ghk(); tobject.function = Ghk; HashFunc("Ghk", Ghk, "int"); }
  ObjectAddClass(&tobject,ClassID("channel"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("device"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("ghk");
  object->defaults->object = object;
  object->defaults->name = CopyString("ghk");
  object->author = "S. Shankar 8/91";
  { extern int Ghk(); AddActionToObject(object, "RESET", Ghk, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'ghk'\n")); HashFunc("Ghk", Ghk, "int"); }
  { extern int Ghk(); AddActionToObject(object, "PROCESS", Ghk, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'ghk'\n")); HashFunc("Ghk", Ghk, "int"); }
  { extern int Ghk(); AddActionToObject(object, "CHECK", Ghk, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'ghk'\n")); HashFunc("Ghk", Ghk, "int"); }
  slotnames[0] = "intracell_concen";
  MsgListAdd(object, "Cin", ghk_Cin, slotnames, 1);
  slotnames[0] = "intracell_concen";
  MsgListAdd(object, "CIN", ghk_CIN, slotnames, 1);
  slotnames[0] = "extracell_concen";
  MsgListAdd(object, "Cout", ghk_Cout, slotnames, 1);
  slotnames[0] = "extracell_concen";
  MsgListAdd(object, "COUT", ghk_COUT, slotnames, 1);
  slotnames[0] = "Vm";
  MsgListAdd(object, "VOLTAGE", ghk_VOLTAGE, slotnames, 1);
  slotnames[0] = "p";
  MsgListAdd(object, "PERMEABILITY", ghk_PERMEABILITY, slotnames, 1);
  object->description = "Calculates the Goldman-Hodgkin-Katz (constant\nfield) equation for a single ionic species.  Provides\ncurrent as well as reversal potential and chord\nconductance.  Note that units on output fields\ncorrespond to input field units, and inward current\nis positive.\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object izcell */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "izcell";
  tobject.type = "izcell_type";
  tobject.size = sizeof(struct izcell_type);
  { extern int IzCell(); tobject.function = IzCell; HashFunc("IzCell", IzCell, "int"); }
  ObjectAddClass(&tobject,ClassID("segment"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("membrane"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("izcell");
  object->defaults->object = object;
  object->defaults->name = CopyString("izcell");
  object->author = "Dave Beeman, Aug 2004";
  { extern int IzCell(); AddActionToObject(object, "INIT", IzCell, 0) ? 0 : (Error(), printf("adding action 'INIT' to object 'izcell'\n")); HashFunc("IzCell", IzCell, "int"); }
  { extern int IzCell(); AddActionToObject(object, "PROCESS", IzCell, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'izcell'\n")); HashFunc("IzCell", IzCell, "int"); }
  { extern int IzCell(); AddActionToObject(object, "RESET", IzCell, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'izcell'\n")); HashFunc("IzCell", IzCell, "int"); }
  { extern int IzCell(); AddActionToObject(object, "CHECK", IzCell, 0) ? 0 : (Error(), printf("adding action 'CHECK' to object 'izcell'\n")); HashFunc("IzCell", IzCell, "int"); }
  slotnames[0] = "Gk";
  slotnames[1] = "Ek";
  MsgListAdd(object, "CHANNEL", izcell_CHANNEL, slotnames, 2);
  slotnames[0] = "inject";
  MsgListAdd(object, "INJECT", izcell_INJECT, slotnames, 1);
  SetFieldListProt(object, "A", FIELD_READWRITE);
  SetFieldListDesc(object, "A", "A parameter");
DirectSetElement(object->defaults, "A", "0");
  SetFieldListProt(object, "B", FIELD_READWRITE);
  SetFieldListDesc(object, "B", "B parameter");
DirectSetElement(object->defaults, "B", "0");
  SetFieldListProt(object, "C", FIELD_READWRITE);
  SetFieldListDesc(object, "C", "C parameter");
DirectSetElement(object->defaults, "C", "0");
  SetFieldListProt(object, "D", FIELD_READWRITE);
  SetFieldListDesc(object, "D", "D parameter");
DirectSetElement(object->defaults, "D", "0");
  SetFieldListProt(object, "coeff2", FIELD_READWRITE);
  SetFieldListDesc(object, "coeff2", "coeff of v*v in dv/dt");
DirectSetElement(object->defaults, "coeff2", "40000");
  SetFieldListProt(object, "coeff1", FIELD_READWRITE);
  SetFieldListDesc(object, "coeff1", "coeff of v in dv/dt");
DirectSetElement(object->defaults, "coeff1", "5000");
  SetFieldListProt(object, "coeff0", FIELD_READWRITE);
  SetFieldListDesc(object, "coeff0", "constant term in dv/dt");
DirectSetElement(object->defaults, "coeff0", "140.0");
  SetFieldListProt(object, "inject", FIELD_READWRITE);
  SetFieldListDesc(object, "inject", "injected current density * 100");
  SetFieldListProt(object, "Vm", FIELD_READWRITE);
  SetFieldListDesc(object, "Vm", "cell potential");
  SetFieldListProt(object, "state", FIELD_READONLY);
  SetFieldListDesc(object, "state", "= 1 if cell fired this time step");
  SetFieldListProt(object, "Vmax", FIELD_READWRITE);
  SetFieldListDesc(object, "Vmax", "maximum action potential height");
DirectSetElement(object->defaults, "Vmax", "0.03");
  object->description = "Implementation of the Izhikevich simple spiking\nneuron model.  Vm is determined from the equation:\n   dVm/dt = coeff2*Vm*Vm + coeff1*Vm + coeff0 - u + I\nwith du/dt = A*(B*Vm - u), and the spike reset condition:\n   if (Vm >= Vmax) then Vm = C; u = u +D\n";
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */

} /* STARTUP_segment */
