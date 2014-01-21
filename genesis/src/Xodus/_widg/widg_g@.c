#include <stdio.h>
#include "widg_ext.h"
#include "widg_g@.h"

void STARTUP_widg() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];

  /* Definition of object xform */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xform";
  tobject.type = "xform_type";
  tobject.size = sizeof(struct xform_type);
  { extern int XForm(); tobject.function = XForm; HashFunc("XForm", XForm, "int"); }
  ObjectAddClass(&tobject,ClassID("widget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xform");
  object->defaults->object = object;
  object->defaults->name = CopyString("xform");
  object->author = "Maneesh Sahani Caltech July/92";
  { extern int XForm(); AddActionToObject(object, "PROCESS", XForm, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xform'\n")); HashFunc("XForm", XForm, "int"); }
  { extern int XForm(); AddActionToObject(object, "RESET", XForm, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xform'\n")); HashFunc("XForm", XForm, "int"); }
  { extern int XForm(); AddActionToObject(object, "CREATE", XForm, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xform'\n")); HashFunc("XForm", XForm, "int"); }
  { extern int XForm(); AddActionToObject(object, "SET", XForm, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xform'\n")); HashFunc("XForm", XForm, "int"); }
  { extern int XForm(); AddActionToObject(object, "COPY", XForm, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xform'\n")); HashFunc("XForm", XForm, "int"); }
  { extern int XForm(); AddActionToObject(object, "SHOW", XForm, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'xform'\n")); HashFunc("XForm", XForm, "int"); }
  { extern int XForm(); AddActionToObject(object, "DELETE", XForm, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xform'\n")); HashFunc("XForm", XForm, "int"); }
  { extern int XForm(); AddActionToObject(object, "XUPDATE", XForm, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xform'\n")); HashFunc("XForm", XForm, "int"); }
  object->description = "Containing window for other graphical interface objects\n";
  SetFieldListProt(object, "nested", FIELD_READONLY);
  SetFieldListDesc(object, "nested", "Flag to indicate nested/toplevel form");
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget for form");
  SetFieldListProt(object, "shell", FIELD_HIDDEN);
  SetFieldListDesc(object, "shell", "Pointer to widget for shell");
  SetFieldListProt(object, "outerframe", FIELD_HIDDEN);
  SetFieldListDesc(object, "outerframe", "Pointer to widget for outer frame");
  SetFieldListProt(object, "middleframe", FIELD_HIDDEN);
  SetFieldListDesc(object, "middleframe", "Pointer to widget for middle frame");
  SetFieldListProt(object, "innerframe", FIELD_HIDDEN);
  SetFieldListDesc(object, "innerframe", "Pointer to widget for inner frame");
  SetFieldListProt(object, "label_w", FIELD_HIDDEN);
  SetFieldListDesc(object, "label_w", "Pointer to widget for optional label");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xlabel */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xlabel";
  tobject.type = "xlabel_type";
  tobject.size = sizeof(struct xlabel_type);
  { extern int XLabel(); tobject.function = XLabel; HashFunc("XLabel", XLabel, "int"); }
  ObjectAddClass(&tobject,ClassID("widget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xlabel");
  object->defaults->object = object;
  object->defaults->name = CopyString("xlabel");
  object->author = "Maneesh Sahani Caltech July/92";
  { extern int XLabel(); AddActionToObject(object, "PROCESS", XLabel, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xlabel'\n")); HashFunc("XLabel", XLabel, "int"); }
  { extern int XLabel(); AddActionToObject(object, "RESET", XLabel, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xlabel'\n")); HashFunc("XLabel", XLabel, "int"); }
  { extern int XLabel(); AddActionToObject(object, "CREATE", XLabel, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xlabel'\n")); HashFunc("XLabel", XLabel, "int"); }
  { extern int XLabel(); AddActionToObject(object, "SET", XLabel, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xlabel'\n")); HashFunc("XLabel", XLabel, "int"); }
  { extern int XLabel(); AddActionToObject(object, "COPY", XLabel, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xlabel'\n")); HashFunc("XLabel", XLabel, "int"); }
  { extern int XLabel(); AddActionToObject(object, "DELETE", XLabel, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xlabel'\n")); HashFunc("XLabel", XLabel, "int"); }
  { extern int XLabel(); AddActionToObject(object, "XUPDATE", XLabel, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xlabel'\n")); HashFunc("XLabel", XLabel, "int"); }
  object->description = "Static display for a text string\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget for label");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xbutton */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xbutton";
  tobject.type = "xbutton_type";
  tobject.size = sizeof(struct xbutton_type);
  { extern int XButton(); tobject.function = XButton; HashFunc("XButton", XButton, "int"); }
  ObjectAddClass(&tobject,ClassID("widget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xbutton");
  object->defaults->object = object;
  object->defaults->name = CopyString("xbutton");
  object->author = "Maneesh Sahani / Upi Bhalla Caltech Feb/93";
  { extern int XButton(); AddActionToObject(object, "PROCESS", XButton, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xbutton'\n")); HashFunc("XButton", XButton, "int"); }
  { extern int XButton(); AddActionToObject(object, "RESET", XButton, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xbutton'\n")); HashFunc("XButton", XButton, "int"); }
  { extern int XButton(); AddActionToObject(object, "CREATE", XButton, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xbutton'\n")); HashFunc("XButton", XButton, "int"); }
  { extern int XButton(); AddActionToObject(object, "SET", XButton, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xbutton'\n")); HashFunc("XButton", XButton, "int"); }
  { extern int XButton(); AddActionToObject(object, "COPY", XButton, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xbutton'\n")); HashFunc("XButton", XButton, "int"); }
  { extern int XButton(); AddActionToObject(object, "DELETE", XButton, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xbutton'\n")); HashFunc("XButton", XButton, "int"); }
  { extern int XButton(); AddActionToObject(object, "XUPDATE", XButton, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xbutton'\n")); HashFunc("XButton", XButton, "int"); }
  { extern int XButton(); AddActionToObject(object, "B1DOWN", XButton, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xbutton'\n")); HashFunc("XButton", XButton, "int"); }
  { extern int XButton(); AddActionToObject(object, "B2DOWN", XButton, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xbutton'\n")); HashFunc("XButton", XButton, "int"); }
  { extern int XButton(); AddActionToObject(object, "B3DOWN", XButton, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xbutton'\n")); HashFunc("XButton", XButton, "int"); }
  { extern int XButton(); AddActionToObject(object, "XOCOMMAND", XButton, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xbutton'\n")); HashFunc("XButton", XButton, "int"); }
  { extern int XButton(); AddActionToObject(object, "ANYBDOWN", XButton, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xbutton'\n")); HashFunc("XButton", XButton, "int"); }
  object->description = "executes script actions from button presses\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget for button");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xtoggle */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xtoggle";
  tobject.type = "xtoggle_type";
  tobject.size = sizeof(struct xtoggle_type);
  { extern int XToggle(); tobject.function = XToggle; HashFunc("XToggle", XToggle, "int"); }
  ObjectAddClass(&tobject,ClassID("widget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xtoggle");
  object->defaults->object = object;
  object->defaults->name = CopyString("xtoggle");
  object->author = "Maneesh Sahani / Upi Bhalla Caltech Feb/93";
  { extern int XToggle(); AddActionToObject(object, "PROCESS", XToggle, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "RESET", XToggle, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "CREATE", XToggle, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "SET", XToggle, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "COPY", XToggle, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "DELETE", XToggle, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "XUPDATE", XToggle, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "B1DOWN", XToggle, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "B2DOWN", XToggle, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "B3DOWN", XToggle, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "XOCOMMAND", XToggle, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "ANYBDOWN", XToggle, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "B1UP", XToggle, 0) ? 0 : (Error(), printf("adding action 'B1UP' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "B2UP", XToggle, 0) ? 0 : (Error(), printf("adding action 'B2UP' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "B3UP", XToggle, 0) ? 0 : (Error(), printf("adding action 'B3UP' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  { extern int XToggle(); AddActionToObject(object, "ANYBUP", XToggle, 0) ? 0 : (Error(), printf("adding action 'ANYBUP' to object 'xtoggle'\n")); HashFunc("XToggle", XToggle, "int"); }
  object->description = "maintains toggle state and executes script actions from toggle presses\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget for toggle");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xdialog */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xdialog";
  tobject.type = "xdialog_type";
  tobject.size = sizeof(struct xdialog_type);
  { extern int XDialog(); tobject.function = XDialog; HashFunc("XDialog", XDialog, "int"); }
  ObjectAddClass(&tobject,ClassID("widget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xdialog");
  object->defaults->object = object;
  object->defaults->name = CopyString("xdialog");
  object->author = "Maneesh Sahani / Upi Bhalla Caltech May/93";
  { extern int XDialog(); AddActionToObject(object, "PROCESS", XDialog, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  { extern int XDialog(); AddActionToObject(object, "RESET", XDialog, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  { extern int XDialog(); AddActionToObject(object, "CREATE", XDialog, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  { extern int XDialog(); AddActionToObject(object, "SET", XDialog, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  { extern int XDialog(); AddActionToObject(object, "COPY", XDialog, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  { extern int XDialog(); AddActionToObject(object, "DELETE", XDialog, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  { extern int XDialog(); AddActionToObject(object, "XUPDATE", XDialog, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  { extern int XDialog(); AddActionToObject(object, "B1DOWN", XDialog, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  { extern int XDialog(); AddActionToObject(object, "B2DOWN", XDialog, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  { extern int XDialog(); AddActionToObject(object, "B3DOWN", XDialog, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  { extern int XDialog(); AddActionToObject(object, "XOCOMMAND", XDialog, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  { extern int XDialog(); AddActionToObject(object, "KEYPRESS", XDialog, 0) ? 0 : (Error(), printf("adding action 'KEYPRESS' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  { extern int XDialog(); AddActionToObject(object, "ANYBDOWN", XDialog, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xdialog'\n")); HashFunc("XDialog", XDialog, "int"); }
  object->description = "executes script actions from dialog events\n";
  slotnames[0] = "value";
  MsgListAdd(object, "INPUT", xdialog_INPUT, slotnames, 1);
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget for dialog");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xtext */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xtext";
  tobject.type = "xtext_type";
  tobject.size = sizeof(struct xtext_type);
  { extern int XText(); tobject.function = XText; HashFunc("XText", XText, "int"); }
  ObjectAddClass(&tobject,ClassID("widget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xtext");
  object->defaults->object = object;
  object->defaults->name = CopyString("xtext");
  object->author = "Maneesh Sahani Caltech / Jason Leigh Univ of Illinois @ Chicago July/93";
  { extern int XText(); AddActionToObject(object, "PROCESS", XText, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "RESET", XText, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "CREATE", XText, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "SET", XText, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "COPY", XText, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "DELETE", XText, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "XOCOMMAND", XText, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "KEYPRESS", XText, 0) ? 0 : (Error(), printf("adding action 'KEYPRESS' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "XUPDATE", XText, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "SAVE2", XText, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "B1DOWN", XText, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "B2DOWN", XText, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "B3DOWN", XText, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "ANYBDOWN", XText, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  { extern int XText(); AddActionToObject(object, "DUMP", XText, 0) ? 0 : (Error(), printf("adding action 'DUMP' to object 'xtext'\n")); HashFunc("XText", XText, "int"); }
  object->description = "opens a text editing widget\n";
  SetFieldListProt(object, "hiddentext", FIELD_HIDDEN);
  SetFieldListDesc(object, "hiddentext", "internal field with text pointer");
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget for text");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);
  { extern void do_xtextload(); AddFunc("xtextload", do_xtextload, "void");   HashFunc("do_xtextload", do_xtextload, "void"); }

  /* Definition of object ximage */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "ximage";
  tobject.type = "ximage_type";
  tobject.size = sizeof(struct ximage_type);
  { extern int Ximage(); tobject.function = Ximage; HashFunc("Ximage", Ximage, "int"); }
  ObjectAddClass(&tobject,ClassID("widget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("ximage");
  object->defaults->object = object;
  object->defaults->name = CopyString("ximage");
  object->author = "Jason Leigh Univ of Illinois @ Chicago July/93, Upi Bhalla";
  { extern int Ximage(); AddActionToObject(object, "PROCESS", Ximage, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  { extern int Ximage(); AddActionToObject(object, "RESET", Ximage, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  { extern int Ximage(); AddActionToObject(object, "CREATE", Ximage, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  { extern int Ximage(); AddActionToObject(object, "SET", Ximage, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  { extern int Ximage(); AddActionToObject(object, "COPY", Ximage, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  { extern int Ximage(); AddActionToObject(object, "DELETE", Ximage, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  { extern int Ximage(); AddActionToObject(object, "XOCOMMAND", Ximage, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  { extern int Ximage(); AddActionToObject(object, "B1DOWN", Ximage, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  { extern int Ximage(); AddActionToObject(object, "B2DOWN", Ximage, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  { extern int Ximage(); AddActionToObject(object, "B3DOWN", Ximage, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  { extern int Ximage(); AddActionToObject(object, "ANYBDOWN", Ximage, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  { extern int Ximage(); AddActionToObject(object, "XUPDATE", Ximage, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  { extern int Ximage(); AddActionToObject(object, "SAVE2", Ximage, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'ximage'\n")); HashFunc("Ximage", Ximage, "int"); }
  object->description = "Displays a gif file\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget for image");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xfastplot */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xfastplot";
  tobject.type = "xfastplot_type";
  tobject.size = sizeof(struct xfastplot_type);
  { extern int XFastPlot(); tobject.function = XFastPlot; HashFunc("XFastPlot", XFastPlot, "int"); }
  ObjectAddClass(&tobject,ClassID("widget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xfastplot");
  object->defaults->object = object;
  object->defaults->name = CopyString("xfastplot");
  object->author = "Upi Bhalla NCBS May 1998";
  { extern int XFastPlot(); AddActionToObject(object, "PROCESS", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "RESET", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "CREATE", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "SET", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "COPY", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "DELETE", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "XOCOMMAND", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "B1DOWN", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "B2DOWN", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "B3DOWN", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "ANYBDOWN", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "KEYPRESS", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'KEYPRESS' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "XUPDATE", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  { extern int XFastPlot(); AddActionToObject(object, "SAVE2", XFastPlot, 0) ? 0 : (Error(), printf("adding action 'SAVE2' to object 'xfastplot'\n")); HashFunc("XFastPlot", XFastPlot, "int"); }
  object->description = "Efficient but limited plotting widget\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget for image");
  SetFieldListProt(object, "pts", FIELD_HIDDEN);
  SetFieldListDesc(object, "pts", "Internal data array");
  SetFieldListProt(object, "xptr", FIELD_HIDDEN);
  SetFieldListDesc(object, "xptr", "");
  SetFieldListProt(object, "yptr", FIELD_HIDDEN);
  SetFieldListDesc(object, "yptr", "");
  SetFieldListProt(object, "alloced_npts", FIELD_HIDDEN);
  SetFieldListDesc(object, "alloced_npts", "");
  SetFieldListProt(object, "plotmode", FIELD_HIDDEN);
  SetFieldListDesc(object, "plotmode", "");
  SetFieldListProt(object, "wid", FIELD_HIDDEN);
  SetFieldListDesc(object, "wid", "");
  SetFieldListProt(object, "ht", FIELD_HIDDEN);
  SetFieldListDesc(object, "ht", "");
  SetFieldListProt(object, "xoffset", FIELD_HIDDEN);
  SetFieldListDesc(object, "xoffset", "");
  SetFieldListProt(object, "yoffset", FIELD_HIDDEN);
  SetFieldListDesc(object, "yoffset", "");
  SetFieldListProt(object, "xscale", FIELD_HIDDEN);
  SetFieldListDesc(object, "xscale", "");
  SetFieldListProt(object, "yscale", FIELD_HIDDEN);
  SetFieldListDesc(object, "yscale", "");
  SetFieldListProt(object, "nptr", FIELD_HIDDEN);
  SetFieldListDesc(object, "nptr", "");
  SetFieldListProt(object, "ringpts", FIELD_HIDDEN);
  SetFieldListDesc(object, "ringpts", "");
  SetFieldListProt(object, "trig_flag", FIELD_HIDDEN);
  SetFieldListDesc(object, "trig_flag", "");
  SetFieldListProt(object, "ac_trig_buf", FIELD_HIDDEN);
  SetFieldListDesc(object, "ac_trig_buf", "");
  SetFieldListProt(object, "colorptr", FIELD_HIDDEN);
  SetFieldListDesc(object, "colorptr", "");
  SetFieldListProt(object, "reset_flag", FIELD_HIDDEN);
  SetFieldListDesc(object, "reset_flag", "");
  SetFieldListProt(object, "pm", FIELD_HIDDEN);
  SetFieldListDesc(object, "pm", "");
  SetFieldListProt(object, "double_flag", FIELD_HIDDEN);
  SetFieldListDesc(object, "double_flag", "");
  SetFieldListProt(object, "color_slot", FIELD_HIDDEN);
  SetFieldListDesc(object, "color_slot", "");
  SetFieldListProt(object, "nnewpts_slot", FIELD_HIDDEN);
  SetFieldListDesc(object, "nnewpts_slot", "");
  SetFieldListProt(object, "index_slot", FIELD_HIDDEN);
  SetFieldListDesc(object, "index_slot", "");
  SetFieldListProt(object, "sxval", FIELD_HIDDEN);
  SetFieldListDesc(object, "sxval", "");
  SetFieldListProt(object, "syval", FIELD_HIDDEN);
  SetFieldListDesc(object, "syval", "");
  slotnames[0] = "yvalues";
  slotnames[1] = "npts";
  slotnames[2] = "ptindex";
  MsgListAdd(object, "NPLOT", xfastplot_NPLOT, slotnames, 3);
  slotnames[0] = "yvalues";
  slotnames[1] = "npts";
  MsgListAdd(object, "WAVEPLOT", xfastplot_WAVEPLOT, slotnames, 2);
  slotnames[0] = "xvalue";
  MsgListAdd(object, "XPLOT", xfastplot_XPLOT, slotnames, 1);
  slotnames[0] = "color_int";
  MsgListAdd(object, "COLOR", xfastplot_COLOR, slotnames, 1);
  slotnames[0] = "dt";
  MsgListAdd(object, "UPDATE_DT", xfastplot_UPDATE_DT, slotnames, 1);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */

} /* STARTUP_widg */
