#include <stdio.h>
#include "draw_ext.h"
#include "draw_g@.h"

void STARTUP_draw() {
  GenesisObject* object;
  GenesisObject  tobject;
  char*          slotnames[50];
  char*          argv[50];
  AddAction("ADDMSGARROW", 213);
  AddAction("SHOWMSGARROW", 214);
  AddAction("MOVECUSTOM", 215);
  AddAction("TRUNCATE", 216);
  AddAction("XSHAPE_ADDPT", 217);
  AddAction("XSHAPE_MOVEPT", 218);
  AddAction("ADDPTS", 219);
  { extern char* do_pixflags(); AddFunc("xpixflags", do_pixflags, "char*");   HashFunc("do_pixflags", do_pixflags, "char*"); }
  { extern char* do_pixflags(); AddFunc("pixflags", do_pixflags, "char*");   HashFunc("do_pixflags", do_pixflags, "char*"); }

  /* Definition of object xcoredraw */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xcoredraw";
  tobject.type = "xcoredraw_type";
  tobject.size = sizeof(struct xcoredraw_type);
  { extern int XCoreDraw(); tobject.function = XCoreDraw; HashFunc("XCoreDraw", XCoreDraw, "int"); }
  ObjectAddClass(&tobject,ClassID("widget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xcoredraw");
  object->defaults->object = object;
  object->defaults->name = CopyString("xcoredraw");
  object->author = "Upi Bhalla Caltech Apr/93";
  { extern int XCoreDraw(); AddActionToObject(object, "PROCESS", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "RESET", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "CREATE", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "SET", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "COPY", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "DELETE", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "B1DOWN", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "B2DOWN", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "B3DOWN", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "ANYBDOWN", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "B1DOUBLE", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "B2DOUBLE", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "B3DOUBLE", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "B1ENTER", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "B2ENTER", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "B3ENTER", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "XUPDATE", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "XODROP", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  { extern int XCoreDraw(); AddActionToObject(object, "XOCOMMAND", XCoreDraw, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xcoredraw'\n")); HashFunc("XCoreDraw", XCoreDraw, "int"); }
  object->description = "Core class for draws. Displays in xy plane\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xdumbdraw */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xdumbdraw";
  tobject.type = "xdumbdraw_type";
  tobject.size = sizeof(struct xdumbdraw_type);
  { extern int XDumbDraw(); tobject.function = XDumbDraw; HashFunc("XDumbDraw", XDumbDraw, "int"); }
  ObjectAddClass(&tobject,ClassID("widget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xdumbdraw");
  object->defaults->object = object;
  object->defaults->name = CopyString("xdumbdraw");
  object->author = "Upi Bhalla Caltech Apr/93";
  { extern int XDumbDraw(); AddActionToObject(object, "PROCESS", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "RESET", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "CREATE", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "SET", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "COPY", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "DELETE", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "B1DOWN", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "B2DOWN", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "B3DOWN", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "ANYBDOWN", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "B1DOUBLE", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "B2DOUBLE", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "B3DOUBLE", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "B1ENTER", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "B2ENTER", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "B3ENTER", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "XUPDATE", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "XODROP", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  { extern int XDumbDraw(); AddActionToObject(object, "XOCOMMAND", XDumbDraw, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xdumbdraw'\n")); HashFunc("XDumbDraw", XDumbDraw, "int"); }
  object->description = "Simple window for pixes\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xdraw */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xdraw";
  tobject.type = "xdraw_type";
  tobject.size = sizeof(struct xdraw_type);
  { extern int XDraw(); tobject.function = XDraw; HashFunc("XDraw", XDraw, "int"); }
  ObjectAddClass(&tobject,ClassID("widget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xdraw");
  object->defaults->object = object;
  object->defaults->name = CopyString("xdraw");
  object->author = "Upi Bhalla Caltech Apr/93";
  { extern int XDraw(); AddActionToObject(object, "PROCESS", XDraw, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "RESET", XDraw, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "CREATE", XDraw, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "SET", XDraw, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "COPY", XDraw, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "DELETE", XDraw, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "B1DOWN", XDraw, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "B2DOWN", XDraw, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "B3DOWN", XDraw, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "ANYBDOWN", XDraw, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "B1DOUBLE", XDraw, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "B2DOUBLE", XDraw, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "B3DOUBLE", XDraw, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "B1ENTER", XDraw, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "B2ENTER", XDraw, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "B3ENTER", XDraw, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "XUPDATE", XDraw, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "XODROP", XDraw, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  { extern int XDraw(); AddActionToObject(object, "XOCOMMAND", XDraw, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xdraw'\n")); HashFunc("XDraw", XDraw, "int"); }
  object->description = "3-d window with full transforms, for pixes\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  slotnames[0] = "cx";
  slotnames[1] = "cy";
  slotnames[2] = "cz";
  MsgListAdd(object, "CENTER", xdraw_CENTER, slotnames, 3);
  slotnames[0] = "wx";
  slotnames[1] = "wy";
  MsgListAdd(object, "ZOOM", xdraw_ZOOM, slotnames, 2);
  slotnames[0] = "vx";
  slotnames[1] = "vy";
  slotnames[2] = "vz";
  MsgListAdd(object, "VIEWPOINT", xdraw_VIEWPOINT, slotnames, 3);
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xgraph */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xgraph";
  tobject.type = "xgraph_type";
  tobject.size = sizeof(struct xgraph_type);
  { extern int XGraph(); tobject.function = XGraph; HashFunc("XGraph", XGraph, "int"); }
  ObjectAddClass(&tobject,ClassID("widget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xgraph");
  object->defaults->object = object;
  object->defaults->name = CopyString("xgraph");
  object->author = "Upi Bhalla Mount Sinai May/93";
  { extern int XGraph(); AddActionToObject(object, "PROCESS", XGraph, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "RESET", XGraph, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "CREATE", XGraph, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "SET", XGraph, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "COPY", XGraph, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "DELETE", XGraph, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "B1DOWN", XGraph, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "B2DOWN", XGraph, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "B3DOWN", XGraph, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "ANYBDOWN", XGraph, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "B1DOUBLE", XGraph, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "B2DOUBLE", XGraph, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "B3DOUBLE", XGraph, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "B1ENTER", XGraph, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "B2ENTER", XGraph, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "B3ENTER", XGraph, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "XUPDATE", XGraph, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "XODROP", XGraph, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "XOCOMMAND", XGraph, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "ADDMSGIN", XGraph, 0) ? 0 : (Error(), printf("adding action 'ADDMSGIN' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "DELETEMSGIN", XGraph, 0) ? 0 : (Error(), printf("adding action 'DELETEMSGIN' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  { extern int XGraph(); AddActionToObject(object, "USECLOCK", XGraph, 0) ? 0 : (Error(), printf("adding action 'USECLOCK' to object 'xgraph'\n")); HashFunc("XGraph", XGraph, "int"); }
  slotnames[0] = "data";
  slotnames[1] = "name";
  slotnames[2] = "color";
  MsgListAdd(object, "PLOT", xgraph_PLOT, slotnames, 3);
  slotnames[0] = "data";
  slotnames[1] = "name";
  slotnames[2] = "color";
  slotnames[3] = "scale";
  slotnames[4] = "yoffset";
  MsgListAdd(object, "PLOTSCALE", xgraph_PLOTSCALE, slotnames, 5);
  slotnames[0] = "x";
  slotnames[1] = "name";
  MsgListAdd(object, "X", xgraph_X, slotnames, 2);
  slotnames[0] = "data";
  slotnames[1] = "name";
  slotnames[2] = "color";
  MsgListAdd(object, "WAVEPLOT", xgraph_WAVEPLOT, slotnames, 3);
  object->description = "graph widget. Automatically creates plots\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  SetFieldListProt(object, "processed", FIELD_HIDDEN);
  SetFieldListDesc(object, "processed", "Internal flag that signals if the element has been processed or not");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xpix */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xpix";
  tobject.type = "xpix_type";
  tobject.size = sizeof(struct xpix_type);
  { extern int XPix(); tobject.function = XPix; HashFunc("XPix", XPix, "int"); }
  ObjectAddClass(&tobject,ClassID("gadget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xpix");
  object->defaults->object = object;
  object->defaults->name = CopyString("xpix");
  object->author = "Upi Bhalla Caltech Apr/93";
  { extern int XPix(); AddActionToObject(object, "PROCESS", XPix, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "RESET", XPix, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "CREATE", XPix, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "SET", XPix, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "COPY", XPix, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "DELETE", XPix, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "B1DOWN", XPix, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "B2DOWN", XPix, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "B3DOWN", XPix, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "ANYBDOWN", XPix, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "B1DOUBLE", XPix, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "B2DOUBLE", XPix, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "B3DOUBLE", XPix, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "B1ENTER", XPix, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "B2ENTER", XPix, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "B3ENTER", XPix, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "XUPDATE", XPix, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "XODROP", XPix, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "XOCOMMAND", XPix, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "XODRAG", XPix, 0) ? 0 : (Error(), printf("adding action 'XODRAG' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  { extern int XPix(); AddActionToObject(object, "XOWASDROPPED", XPix, 0) ? 0 : (Error(), printf("adding action 'XOWASDROPPED' to object 'xpix'\n")); HashFunc("XPix", XPix, "int"); }
  object->description = "core pix\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xsphere */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xsphere";
  tobject.type = "xsphere_type";
  tobject.size = sizeof(struct xsphere_type);
  { extern int XSphere(); tobject.function = XSphere; HashFunc("XSphere", XSphere, "int"); }
  ObjectAddClass(&tobject,ClassID("gadget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xsphere");
  object->defaults->object = object;
  object->defaults->name = CopyString("xsphere");
  object->author = "Upi Bhalla Caltech Apr/93";
  { extern int XSphere(); AddActionToObject(object, "PROCESS", XSphere, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "RESET", XSphere, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "CREATE", XSphere, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "SET", XSphere, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "COPY", XSphere, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "DELETE", XSphere, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "B1DOWN", XSphere, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "B2DOWN", XSphere, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "B3DOWN", XSphere, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "ANYBDOWN", XSphere, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "B1DOUBLE", XSphere, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "B2DOUBLE", XSphere, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "B3DOUBLE", XSphere, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "B1ENTER", XSphere, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "B2ENTER", XSphere, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "B3ENTER", XSphere, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "XUPDATE", XSphere, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "XODROP", XSphere, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "XOCOMMAND", XSphere, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "XODRAG", XSphere, 0) ? 0 : (Error(), printf("adding action 'XODRAG' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  { extern int XSphere(); AddActionToObject(object, "XOWASDROPPED", XSphere, 0) ? 0 : (Error(), printf("adding action 'XOWASDROPPED' to object 'xsphere'\n")); HashFunc("XSphere", XSphere, "int"); }
  object->description = "test pix\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xshape */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xshape";
  tobject.type = "xshape_type";
  tobject.size = sizeof(struct xshape_type);
  { extern int XShape(); tobject.function = XShape; HashFunc("XShape", XShape, "int"); }
  ObjectAddClass(&tobject,ClassID("gadget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xshape");
  object->defaults->object = object;
  object->defaults->name = CopyString("xshape");
  object->author = "Upi Bhalla Caltech Apr/93";
  { extern int XShape(); AddActionToObject(object, "PROCESS", XShape, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "RESET", XShape, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "CREATE", XShape, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "SET", XShape, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "COPY", XShape, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "DELETE", XShape, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "B1DOWN", XShape, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "B2DOWN", XShape, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "B3DOWN", XShape, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "ANYBDOWN", XShape, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "B1DOUBLE", XShape, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "B2DOUBLE", XShape, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "B3DOUBLE", XShape, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "B1ENTER", XShape, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "B2ENTER", XShape, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "B3ENTER", XShape, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "XUPDATE", XShape, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "XODROP", XShape, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "XOCOMMAND", XShape, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "XODRAG", XShape, 0) ? 0 : (Error(), printf("adding action 'XODRAG' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "XOWASDROPPED", XShape, 0) ? 0 : (Error(), printf("adding action 'XOWASDROPPED' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "DUMP", XShape, 0) ? 0 : (Error(), printf("adding action 'DUMP' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "XSHAPE_ADDPT", XShape, 0) ? 0 : (Error(), printf("adding action 'XSHAPE_ADDPT' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "XSHAPE_MOVEPT", XShape, 0) ? 0 : (Error(), printf("adding action 'XSHAPE_MOVEPT' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  { extern int XShape(); AddActionToObject(object, "SHOW", XShape, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'xshape'\n")); HashFunc("XShape", XShape, "int"); }
  slotnames[0] = "dummy";
  MsgListAdd(object, "PATH", xshape_PATH, slotnames, 1);
  object->description = "back compat, draws assorted shapes\nWhen a msg is present, then the value of the shape is set\nto the full path of the source of the msg on PROCESS.\ndrawmodes: DrawPoints,DrawLines,DrawSegs,DrawArrows,FillRects,FillPoly\nlinestyles: LineSolid, LineOnOffDash, or LineDoubleDash\ncapstyles: CapNotLast, CapButt, CapRound, CapProjecting\njoinstyles: JoinMiter, JoinRound, JoinBevel\ntextmodes: draw, fill, nodraw\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xplot */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xplot";
  tobject.type = "xplot_type";
  tobject.size = sizeof(struct xplot_type);
  { extern int XPlot(); tobject.function = XPlot; HashFunc("XPlot", XPlot, "int"); }
  ObjectAddClass(&tobject,ClassID("gadget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xplot");
  object->defaults->object = object;
  object->defaults->name = CopyString("xplot");
  object->author = "Upi Bhalla Caltech May/93";
  { extern int XPlot(); AddActionToObject(object, "PROCESS", XPlot, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "RESET", XPlot, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "CREATE", XPlot, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "SET", XPlot, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "COPY", XPlot, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "DELETE", XPlot, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "B1DOWN", XPlot, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "B2DOWN", XPlot, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "B3DOWN", XPlot, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "ANYBDOWN", XPlot, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "B1DOUBLE", XPlot, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "B2DOUBLE", XPlot, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "B3DOUBLE", XPlot, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "B1ENTER", XPlot, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "B2ENTER", XPlot, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "B3ENTER", XPlot, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "XUPDATE", XPlot, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "XODROP", XPlot, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "XOCOMMAND", XPlot, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "XODRAG", XPlot, 0) ? 0 : (Error(), printf("adding action 'XODRAG' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "XOWASDROPPED", XPlot, 0) ? 0 : (Error(), printf("adding action 'XOWASDROPPED' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "DUMP", XPlot, 0) ? 0 : (Error(), printf("adding action 'DUMP' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "SHOW", XPlot, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "ADDMSGIN", XPlot, 0) ? 0 : (Error(), printf("adding action 'ADDMSGIN' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  { extern int XPlot(); AddActionToObject(object, "ADDPTS", XPlot, 0) ? 0 : (Error(), printf("adding action 'ADDPTS' to object 'xplot'\n")); HashFunc("XPlot", XPlot, "int"); }
  slotnames[0] = "data";
  slotnames[1] = "name";
  slotnames[2] = "color";
  MsgListAdd(object, "PLOT", xplot_PLOT, slotnames, 3);
  slotnames[0] = "data";
  slotnames[1] = "name";
  slotnames[2] = "color";
  slotnames[3] = "scale";
  slotnames[4] = "yoffset";
  MsgListAdd(object, "PLOTSCALE", xplot_PLOTSCALE, slotnames, 5);
  slotnames[0] = "x";
  slotnames[1] = "name";
  MsgListAdd(object, "X", xplot_X, slotnames, 2);
  slotnames[0] = "data";
  slotnames[1] = "name";
  slotnames[2] = "color";
  MsgListAdd(object, "WAVEPLOT", xplot_WAVEPLOT, slotnames, 3);
  object->description = "New object for drawing graphical plots\nxmin,ymin,xmax,ymax: range of plotted values. Change\n these if you wish to set offsets and scaling\nwx,wy: scale factors for plot.\nmemory_mode: [expand squish limit roll oscope halve file]\nauto_mode: [none scale center both] (not yet imp.)\nsensitivity: [select local_value move scale edit draw]\n specifies mouse actions, not yet implemented\noverlay_no: specifies how old this overlay version is\ntx,ty,tz: specify offset of plot in parent draw coords\ndo_slope: flag. when set to 1, it differentiates the input\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  SetFieldListProt(object, "labelpix", FIELD_HIDDEN);
  SetFieldListDesc(object, "labelpix", "Pointer to labelpix widget");
  SetFieldListProt(object, "processed", FIELD_HIDDEN);
  SetFieldListDesc(object, "processed", "Internal flag that signals if the element has been processed or not");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xaxis */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xaxis";
  tobject.type = "xaxis_type";
  tobject.size = sizeof(struct xaxis_type);
  { extern int XAxis(); tobject.function = XAxis; HashFunc("XAxis", XAxis, "int"); }
  ObjectAddClass(&tobject,ClassID("gadget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xaxis");
  object->defaults->object = object;
  object->defaults->name = CopyString("xaxis");
  object->author = "Upi Bhalla Caltech May/93";
  { extern int XAxis(); AddActionToObject(object, "PROCESS", XAxis, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "RESET", XAxis, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "CREATE", XAxis, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "SET", XAxis, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "COPY", XAxis, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "DELETE", XAxis, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "B1DOWN", XAxis, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "B2DOWN", XAxis, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "B3DOWN", XAxis, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "ANYBDOWN", XAxis, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "B1DOUBLE", XAxis, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "B2DOUBLE", XAxis, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "B3DOUBLE", XAxis, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "B1ENTER", XAxis, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "B2ENTER", XAxis, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "B3ENTER", XAxis, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "XUPDATE", XAxis, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "XODROP", XAxis, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "XOCOMMAND", XAxis, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "XODRAG", XAxis, 0) ? 0 : (Error(), printf("adding action 'XODRAG' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  { extern int XAxis(); AddActionToObject(object, "XOWASDROPPED", XAxis, 0) ? 0 : (Error(), printf("adding action 'XOWASDROPPED' to object 'xaxis'\n")); HashFunc("XAxis", XAxis, "int"); }
  object->description = "makes axis for plot gadgets\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xgif */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xgif";
  tobject.type = "xgif_type";
  tobject.size = sizeof(struct xgif_type);
  { extern int XGif(); tobject.function = XGif; HashFunc("XGif", XGif, "int"); }
  ObjectAddClass(&tobject,ClassID("gadget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xgif");
  object->defaults->object = object;
  object->defaults->name = CopyString("xgif");
  object->author = "Upi Bhalla / Jason Leigh Aug/93";
  { extern int XGif(); AddActionToObject(object, "PROCESS", XGif, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "RESET", XGif, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "CREATE", XGif, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "SET", XGif, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "COPY", XGif, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "DELETE", XGif, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "B1DOWN", XGif, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "B2DOWN", XGif, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "B3DOWN", XGif, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "ANYBDOWN", XGif, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "B1DOUBLE", XGif, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "B2DOUBLE", XGif, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "B3DOUBLE", XGif, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "B1ENTER", XGif, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "B2ENTER", XGif, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "B3ENTER", XGif, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "XUPDATE", XGif, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "XODROP", XGif, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "XOCOMMAND", XGif, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "XODRAG", XGif, 0) ? 0 : (Error(), printf("adding action 'XODRAG' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  { extern int XGif(); AddActionToObject(object, "XOWASDROPPED", XGif, 0) ? 0 : (Error(), printf("adding action 'XOWASDROPPED' to object 'xgif'\n")); HashFunc("XGif", XGif, "int"); }
  object->description = "draws gif images as a pix\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xcell */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xcell";
  tobject.type = "xcell_type";
  tobject.size = sizeof(struct xcell_type);
  { extern int XCell(); tobject.function = XCell; HashFunc("XCell", XCell, "int"); }
  ObjectAddClass(&tobject,ClassID("gadget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xcell");
  object->defaults->object = object;
  object->defaults->name = CopyString("xcell");
  object->author = "Upi Bhalla Mount Sinai June/93";
  { extern int XCell(); AddActionToObject(object, "PROCESS", XCell, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "RESET", XCell, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "CREATE", XCell, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "SET", XCell, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "COPY", XCell, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "DELETE", XCell, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "B1DOWN", XCell, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "B2DOWN", XCell, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "B3DOWN", XCell, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "ANYBDOWN", XCell, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "B1DOUBLE", XCell, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "B2DOUBLE", XCell, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "B3DOUBLE", XCell, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "B1ENTER", XCell, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "B2ENTER", XCell, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "B3ENTER", XCell, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "XUPDATE", XCell, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "XODROP", XCell, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "XOCOMMAND", XCell, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "XODRAG", XCell, 0) ? 0 : (Error(), printf("adding action 'XODRAG' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  { extern int XCell(); AddActionToObject(object, "XOWASDROPPED", XCell, 0) ? 0 : (Error(), printf("adding action 'XOWASDROPPED' to object 'xcell'\n")); HashFunc("XCell", XCell, "int"); }
  slotnames[0] = "data";
  MsgListAdd(object, "COLOR", xcell_COLOR, slotnames, 1);
  slotnames[0] = "data";
  MsgListAdd(object, "DIAMETER", xcell_DIAMETER, slotnames, 1);
  slotnames[0] = "x";
  slotnames[1] = "y";
  slotnames[2] = "z";
  MsgListAdd(object, "POSITION", xcell_POSITION, slotnames, 3);
  slotnames[0] = "col";
  slotnames[1] = "dia";
  MsgListAdd(object, "COLDIA", xcell_COLDIA, slotnames, 2);
  slotnames[0] = "col";
  slotnames[1] = "dia";
  slotnames[2] = "x";
  slotnames[3] = "y";
  slotnames[4] = "z";
  MsgListAdd(object, "COLDIAPOS", xcell_COLDIAPOS, slotnames, 5);
  object->description = "makes cell gadget\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xvar */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xvar";
  tobject.type = "xvar_type";
  tobject.size = sizeof(struct xvar_type);
  { extern int XVar(); tobject.function = XVar; HashFunc("XVar", XVar, "int"); }
  ObjectAddClass(&tobject,ClassID("gadget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xvar");
  object->defaults->object = object;
  object->defaults->name = CopyString("xvar");
  object->author = "Upi Bhalla Mount Sinai Dec/93";
  { extern int XVar(); AddActionToObject(object, "PROCESS", XVar, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "RESET", XVar, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "CREATE", XVar, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "SET", XVar, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "COPY", XVar, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "DELETE", XVar, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "B1DOWN", XVar, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "B2DOWN", XVar, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "B3DOWN", XVar, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "ANYBDOWN", XVar, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "B1DOUBLE", XVar, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "B2DOUBLE", XVar, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "B3DOUBLE", XVar, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "B1ENTER", XVar, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "B2ENTER", XVar, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "B3ENTER", XVar, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "XUPDATE", XVar, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "XODROP", XVar, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "XOCOMMAND", XVar, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "XODRAG", XVar, 0) ? 0 : (Error(), printf("adding action 'XODRAG' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  { extern int XVar(); AddActionToObject(object, "XOWASDROPPED", XVar, 0) ? 0 : (Error(), printf("adding action 'XOWASDROPPED' to object 'xvar'\n")); HashFunc("XVar", XVar, "int"); }
  slotnames[0] = "data";
  MsgListAdd(object, "VAL1", xvar_VAL1, slotnames, 1);
  slotnames[0] = "data";
  MsgListAdd(object, "VAL2", xvar_VAL2, slotnames, 1);
  slotnames[0] = "data";
  MsgListAdd(object, "VAL3", xvar_VAL3, slotnames, 1);
  slotnames[0] = "data";
  MsgListAdd(object, "VAL4", xvar_VAL4, slotnames, 1);
  slotnames[0] = "data";
  MsgListAdd(object, "VAL5", xvar_VAL5, slotnames, 1);
  object->description = "makes var gadget which is used to display\nnumerical values in a variety of modes. More than\none value can be displayed simultaneously using the\nfollowing independent display parameters: \ncolor, xoffset, yoffset, zoffset, morphing, text\nThe widget interpolates appropriately between child\nshapes to generate the display. These child shapes must\nlive in ./shape[0], ./shape[1], etc\nEach display parameter can be attached to a specified\nvalue msg using the color_val, morph_val etc fields\nthe varmode has the general option 'shape'; the\nspecial options graph, surface, and contour;\nas well as some backwards compat options\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xview */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xview";
  tobject.type = "xview_type";
  tobject.size = sizeof(struct xview_type);
  { extern int XView(); tobject.function = XView; HashFunc("XView", XView, "int"); }
  ObjectAddClass(&tobject,ClassID("gadget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xview");
  object->defaults->object = object;
  object->defaults->name = CopyString("xview");
  object->author = "Upi Bhalla Mount Sinai Dec/93";
  { extern int XView(); AddActionToObject(object, "PROCESS", XView, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "RESET", XView, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "CREATE", XView, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "SET", XView, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "COPY", XView, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "DELETE", XView, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "SHOW", XView, 0) ? 0 : (Error(), printf("adding action 'SHOW' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "B1DOWN", XView, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "B2DOWN", XView, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "B3DOWN", XView, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "ANYBDOWN", XView, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "B1DOUBLE", XView, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "B2DOUBLE", XView, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "B3DOUBLE", XView, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "B1ENTER", XView, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "B2ENTER", XView, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "B3ENTER", XView, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "XUPDATE", XView, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "XODROP", XView, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "XOCOMMAND", XView, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "XODRAG", XView, 0) ? 0 : (Error(), printf("adding action 'XODRAG' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  { extern int XView(); AddActionToObject(object, "XOWASDROPPED", XView, 0) ? 0 : (Error(), printf("adding action 'XOWASDROPPED' to object 'xview'\n")); HashFunc("XView", XView, "int"); }
  slotnames[0] = "data";
  MsgListAdd(object, "VAL1", xview_VAL1, slotnames, 1);
  slotnames[0] = "data";
  MsgListAdd(object, "VAL2", xview_VAL2, slotnames, 1);
  slotnames[0] = "data";
  MsgListAdd(object, "VAL3", xview_VAL3, slotnames, 1);
  slotnames[0] = "data";
  MsgListAdd(object, "VAL4", xview_VAL4, slotnames, 1);
  slotnames[0] = "data";
  MsgListAdd(object, "VAL5", xview_VAL5, slotnames, 1);
  slotnames[0] = "x";
  slotnames[1] = "y";
  slotnames[2] = "z";
  MsgListAdd(object, "COORDS", xview_COORDS, slotnames, 3);
  slotnames[0] = "index";
  slotnames[1] = "data";
  MsgListAdd(object, "IVAL1", xview_IVAL1, slotnames, 2);
  slotnames[0] = "index";
  slotnames[1] = "data";
  MsgListAdd(object, "IVAL2", xview_IVAL2, slotnames, 2);
  slotnames[0] = "index";
  slotnames[1] = "data";
  MsgListAdd(object, "IVAL3", xview_IVAL3, slotnames, 2);
  slotnames[0] = "index";
  slotnames[1] = "data";
  MsgListAdd(object, "IVAL4", xview_IVAL4, slotnames, 2);
  slotnames[0] = "index";
  slotnames[1] = "data";
  MsgListAdd(object, "IVAL5", xview_IVAL5, slotnames, 2);
  slotnames[0] = "index";
  slotnames[1] = "x";
  slotnames[2] = "y";
  slotnames[3] = "z";
  MsgListAdd(object, "ICOORDS", xview_ICOORDS, slotnames, 4);
  object->description = "makes view gadget which is like an array of xvars.\nIt displays numerical values in a variety of modes. Similar rules\napply as for the xvar display parameters. In addition to displaying\nvalues from incoming msgs, the values for the xview can be specified\nusing paths. xview can display values of fields in messages\nbetween other elements using the path options.\nThis is slow and has limitations when it comes to displaying\nsimulations in parallel.\nField descriptions...\npath: slower but more flexible alternative to msgs\n for displaying values. Must also specify field\nrelpath: optional relative path from 'path'. Display\n fields of child elements of 'path' using this.\nmsgpath: optional. Select a subset of msgins/outs that link to msgpath\n Used to display fields in msgins/msgouts from relpath\nmsgtype,msgslotno: optional. Applied only if field = msgin or msgout\nviewmode: one of: shape graph surface contour\ncolorview boxview fillboxview colorboxview\nvaluemode: one of: path index lookup\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

  /* Definition of object xtree */
  BZERO(&tobject,sizeof(GenesisObject));
  tobject.name = "xtree";
  tobject.type = "xtree_type";
  tobject.size = sizeof(struct xtree_type);
  { extern int XTree(); tobject.function = XTree; HashFunc("XTree", XTree, "int"); }
  ObjectAddClass(&tobject,ClassID("gadget"),CLASS_PERMANENT);
  ObjectAddClass(&tobject,ClassID("output"),CLASS_PERMANENT);
  AddDefaultFieldList(&tobject);
  tobject.defaults = (Element*) calloc(1, tobject.size);
  AddObject(&tobject);
  object = GetObject("xtree");
  object->defaults->object = object;
  object->defaults->name = CopyString("xtree");
  object->author = "Upi Bhalla Mount Sinai Jan/94";
  { extern int XTree(); AddActionToObject(object, "PROCESS", XTree, 0) ? 0 : (Error(), printf("adding action 'PROCESS' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "RESET", XTree, 0) ? 0 : (Error(), printf("adding action 'RESET' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "CREATE", XTree, 0) ? 0 : (Error(), printf("adding action 'CREATE' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "SET", XTree, 0) ? 0 : (Error(), printf("adding action 'SET' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "COPY", XTree, 0) ? 0 : (Error(), printf("adding action 'COPY' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "DELETE", XTree, 0) ? 0 : (Error(), printf("adding action 'DELETE' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "B1DOWN", XTree, 0) ? 0 : (Error(), printf("adding action 'B1DOWN' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "B2DOWN", XTree, 0) ? 0 : (Error(), printf("adding action 'B2DOWN' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "B3DOWN", XTree, 0) ? 0 : (Error(), printf("adding action 'B3DOWN' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "ANYBDOWN", XTree, 0) ? 0 : (Error(), printf("adding action 'ANYBDOWN' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "B1DOUBLE", XTree, 0) ? 0 : (Error(), printf("adding action 'B1DOUBLE' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "B2DOUBLE", XTree, 0) ? 0 : (Error(), printf("adding action 'B2DOUBLE' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "B3DOUBLE", XTree, 0) ? 0 : (Error(), printf("adding action 'B3DOUBLE' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "B1ENTER", XTree, 0) ? 0 : (Error(), printf("adding action 'B1ENTER' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "B2ENTER", XTree, 0) ? 0 : (Error(), printf("adding action 'B2ENTER' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "B3ENTER", XTree, 0) ? 0 : (Error(), printf("adding action 'B3ENTER' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "XUPDATE", XTree, 0) ? 0 : (Error(), printf("adding action 'XUPDATE' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "XODROP", XTree, 0) ? 0 : (Error(), printf("adding action 'XODROP' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "XOCOMMAND", XTree, 0) ? 0 : (Error(), printf("adding action 'XOCOMMAND' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "XODRAG", XTree, 0) ? 0 : (Error(), printf("adding action 'XODRAG' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "XOWASDROPPED", XTree, 0) ? 0 : (Error(), printf("adding action 'XOWASDROPPED' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "ADDMSGARROW", XTree, 0) ? 0 : (Error(), printf("adding action 'ADDMSGARROW' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "SHOWMSGARROW", XTree, 0) ? 0 : (Error(), printf("adding action 'SHOWMSGARROW' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "MOVECUSTOM", XTree, 0) ? 0 : (Error(), printf("adding action 'MOVECUSTOM' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "TRUNCATE", XTree, 0) ? 0 : (Error(), printf("adding action 'TRUNCATE' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "DUMP", XTree, 0) ? 0 : (Error(), printf("adding action 'DUMP' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  { extern int XTree(); AddActionToObject(object, "UNDUMP", XTree, 0) ? 0 : (Error(), printf("adding action 'UNDUMP' to object 'xtree'\n")); HashFunc("XTree", XTree, "int"); }
  object->description = "makes tree gadget which is used to display\nelements and their messages, and also manipulate them.\nThis is a very complex widget, the user is referred to the\ndocumentation for more complete details.\nThe layout can be one of :\n  tree = Elements positioned according to hierarchy \n  geometry = elements are positioned according to their xyz coords\n  custom = elements positions are user-defined\n";
  SetFieldListProt(object, "widget", FIELD_HIDDEN);
  SetFieldListDesc(object, "widget", "Pointer to widget/gadget");
  FieldListMakePermanent(object);
  MsgListMakePermanent(object);

/* Script variables */

} /* STARTUP_draw */
