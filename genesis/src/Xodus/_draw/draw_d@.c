#include "draw_ext.h"

#define __BZ BZERO(&info,sizeof(Info))
#define __IFI(F) info.field_indirection = F
#define __IFT info.function_type = 1
#define __IND(N) info.dimensions = N
#define __IDS(S,N) info.dimension_size[S] = N
void INFO_xcoredraw_type(){
struct xcoredraw_type var;Info info;char fields[2500];fields[0]='\0';info.name="xcoredraw_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xcoredraw_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.bg";info.offset=(caddr_t)(&(var.bg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"bg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field bg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.xgeom";info.offset=(caddr_t)(&(var.xgeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"xgeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field xgeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.ygeom";info.offset=(caddr_t)(&(var.ygeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"ygeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field ygeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.wgeom";info.offset=(caddr_t)(&(var.wgeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"wgeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field wgeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.hgeom";info.offset=(caddr_t)(&(var.hgeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"hgeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field hgeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.xmin";info.offset=(caddr_t)(&(var.xmin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xmin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field xmin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.xmax";info.offset=(caddr_t)(&(var.xmax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xmax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field xmax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.ymin";info.offset=(caddr_t)(&(var.ymin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ymin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field ymin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.ymax";info.offset=(caddr_t)(&(var.ymax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ymax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field ymax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.drawflags";info.offset=(caddr_t)(&(var.drawflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"drawflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field drawflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcoredraw_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcoredraw_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xcoredraw_type",fields);
}
void INFO_xdumbdraw_type(){
struct xdumbdraw_type var;Info info;char fields[2500];fields[0]='\0';info.name="xdumbdraw_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xdumbdraw_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.bg";info.offset=(caddr_t)(&(var.bg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"bg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field bg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.xgeom";info.offset=(caddr_t)(&(var.xgeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"xgeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field xgeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.ygeom";info.offset=(caddr_t)(&(var.ygeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"ygeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field ygeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.wgeom";info.offset=(caddr_t)(&(var.wgeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"wgeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field wgeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.hgeom";info.offset=(caddr_t)(&(var.hgeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"hgeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field hgeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.axis";info.offset=(caddr_t)(&(var.axis))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"axis");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field axis\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.xmin";info.offset=(caddr_t)(&(var.xmin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xmin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field xmin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.xmax";info.offset=(caddr_t)(&(var.xmax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xmax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field xmax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.ymin";info.offset=(caddr_t)(&(var.ymin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ymin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field ymin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.ymax";info.offset=(caddr_t)(&(var.ymax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ymax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field ymax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.zmin";info.offset=(caddr_t)(&(var.zmin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"zmin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field zmin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.zmax";info.offset=(caddr_t)(&(var.zmax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"zmax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field zmax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.drawflags";info.offset=(caddr_t)(&(var.drawflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"drawflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field drawflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdumbdraw_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdumbdraw_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xdumbdraw_type",fields);
}
void INFO_xgraph_type(){
struct xgraph_type var;Info info;char fields[2500];fields[0]='\0';info.name="xgraph_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xgraph_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.bg";info.offset=(caddr_t)(&(var.bg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"bg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field bg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.xgeom";info.offset=(caddr_t)(&(var.xgeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"xgeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field xgeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.ygeom";info.offset=(caddr_t)(&(var.ygeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"ygeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field ygeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.wgeom";info.offset=(caddr_t)(&(var.wgeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"wgeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field wgeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.hgeom";info.offset=(caddr_t)(&(var.hgeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"hgeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field hgeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.xmin";info.offset=(caddr_t)(&(var.xmin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xmin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field xmin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.xmax";info.offset=(caddr_t)(&(var.xmax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xmax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field xmax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.ymin";info.offset=(caddr_t)(&(var.ymin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ymin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field ymin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.ymax";info.offset=(caddr_t)(&(var.ymax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ymax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field ymax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.cdxmin";info.offset=(caddr_t)(&(var.cdxmin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"cdxmin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field cdxmin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.cdxmax";info.offset=(caddr_t)(&(var.cdxmax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"cdxmax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field cdxmax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.cdymin";info.offset=(caddr_t)(&(var.cdymin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"cdymin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field cdymin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.cdymax";info.offset=(caddr_t)(&(var.cdymax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"cdymax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field cdymax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.xoffset";info.offset=(caddr_t)(&(var.xoffset))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xoffset");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field xoffset\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.yoffset";info.offset=(caddr_t)(&(var.yoffset))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"yoffset");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field yoffset\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.drawflags";info.offset=(caddr_t)(&(var.drawflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"drawflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field drawflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.overlay";info.offset=(caddr_t)(&(var.overlay))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"overlay");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field overlay\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.processed";info.offset=(caddr_t)(&(var.processed))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"processed");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field processed\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.title";info.offset=(caddr_t)(&(var.title))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"title");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field title\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.xlabel";info.offset=(caddr_t)(&(var.xlabel))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"xlabel");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field xlabel\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.XUnits";info.offset=(caddr_t)(&(var.XUnits))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"XUnits");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field XUnits\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.ylabel";info.offset=(caddr_t)(&(var.ylabel))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"ylabel");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field ylabel\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.YUnits";info.offset=(caddr_t)(&(var.YUnits))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"YUnits");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field YUnits\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.xaxis_w";info.offset=(caddr_t)(&(var.xaxis_w))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"xaxis_w");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field xaxis_w\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.yaxis_w";info.offset=(caddr_t)(&(var.yaxis_w))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"yaxis_w");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field yaxis_w\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgraph_type.overlay_no";info.offset=(caddr_t)(&(var.overlay_no))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"overlay_no");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgraph_type, field overlay_no\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xgraph_type",fields);
}
void INFO_xdraw_type(){
struct xdraw_type var;Info info;char fields[2500];fields[0]='\0';info.name="xdraw_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xdraw_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.bg";info.offset=(caddr_t)(&(var.bg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"bg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field bg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.xgeom";info.offset=(caddr_t)(&(var.xgeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"xgeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field xgeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.ygeom";info.offset=(caddr_t)(&(var.ygeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"ygeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field ygeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.wgeom";info.offset=(caddr_t)(&(var.wgeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"wgeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field wgeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.hgeom";info.offset=(caddr_t)(&(var.hgeom))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"hgeom");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field hgeom\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.transform";info.offset=(caddr_t)(&(var.transform))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"transform");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field transform\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.xmin";info.offset=(caddr_t)(&(var.xmin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xmin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field xmin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.xmax";info.offset=(caddr_t)(&(var.xmax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xmax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field xmax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.ymin";info.offset=(caddr_t)(&(var.ymin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ymin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field ymin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.ymax";info.offset=(caddr_t)(&(var.ymax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ymax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field ymax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.zmin";info.offset=(caddr_t)(&(var.zmin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"zmin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field zmin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.zmax";info.offset=(caddr_t)(&(var.zmax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"zmax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field zmax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.wx";info.offset=(caddr_t)(&(var.wx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"wx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field wx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.wy";info.offset=(caddr_t)(&(var.wy))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"wy");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field wy\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.cx";info.offset=(caddr_t)(&(var.cx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"cx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field cx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.cy";info.offset=(caddr_t)(&(var.cy))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"cy");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field cy\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.cz";info.offset=(caddr_t)(&(var.cz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"cz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field cz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.vx";info.offset=(caddr_t)(&(var.vx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"vx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field vx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.vy";info.offset=(caddr_t)(&(var.vy))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"vy");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field vy\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.vz";info.offset=(caddr_t)(&(var.vz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"vz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field vz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.rv";info.offset=(caddr_t)(&(var.rv))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"rv");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field rv\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.rz";info.offset=(caddr_t)(&(var.rz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"rz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field rz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.drawflags";info.offset=(caddr_t)(&(var.drawflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"drawflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field drawflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xdraw_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xdraw_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xdraw_type",fields);
}
void INFO_xpix_type(){
struct xpix_type var;Info info;char fields[2500];fields[0]='\0';info.name="xpix_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xpix_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.tx";info.offset=(caddr_t)(&(var.tx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field tx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.ty";info.offset=(caddr_t)(&(var.ty))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ty");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field ty\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.tz";info.offset=(caddr_t)(&(var.tz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field tz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.value";info.offset=(caddr_t)(&(var.value))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"value");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field value\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xpix_type.pixflags";info.offset=(caddr_t)(&(var.pixflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"pixflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xpix_type, field pixflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xpix_type",fields);
}
void INFO_xsphere_type(){
struct xsphere_type var;Info info;char fields[2500];fields[0]='\0';info.name="xsphere_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xsphere_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.tx";info.offset=(caddr_t)(&(var.tx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field tx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.ty";info.offset=(caddr_t)(&(var.ty))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ty");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field ty\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.tz";info.offset=(caddr_t)(&(var.tz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field tz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.value";info.offset=(caddr_t)(&(var.value))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"value");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field value\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.pixflags";info.offset=(caddr_t)(&(var.pixflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"pixflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field pixflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xsphere_type.r";info.offset=(caddr_t)(&(var.r))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"r");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xsphere_type, field r\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xsphere_type",fields);
}
void INFO_xshape_type(){
struct xshape_type var;Info info;char fields[2500];fields[0]='\0';info.name="xshape_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xshape_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.tx";info.offset=(caddr_t)(&(var.tx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field tx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.ty";info.offset=(caddr_t)(&(var.ty))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ty");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field ty\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.tz";info.offset=(caddr_t)(&(var.tz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field tz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.value";info.offset=(caddr_t)(&(var.value))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"value");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field value\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.pixflags";info.offset=(caddr_t)(&(var.pixflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"pixflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field pixflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.xpts";info.offset=(caddr_t)(&(var.xpts))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"xpts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field xpts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.ypts";info.offset=(caddr_t)(&(var.ypts))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"ypts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field ypts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.zpts";info.offset=(caddr_t)(&(var.zpts))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"zpts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field zpts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.allocated_pts";info.offset=(caddr_t)(&(var.allocated_pts))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"allocated_pts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field allocated_pts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.npts";info.offset=(caddr_t)(&(var.npts))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"npts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field npts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.pts";info.offset=(caddr_t)(&(var.pts))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"pts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field pts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.drawmode";info.offset=(caddr_t)(&(var.drawmode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"drawmode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field drawmode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.linewidth";info.offset=(caddr_t)(&(var.linewidth))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"linewidth");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field linewidth\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.linestyle";info.offset=(caddr_t)(&(var.linestyle))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"linestyle");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field linestyle\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.capstyle";info.offset=(caddr_t)(&(var.capstyle))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"capstyle");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field capstyle\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.joinstyle";info.offset=(caddr_t)(&(var.joinstyle))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"joinstyle");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field joinstyle\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.text";info.offset=(caddr_t)(&(var.text))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"text");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field text\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.textcolor";info.offset=(caddr_t)(&(var.textcolor))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"textcolor");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field textcolor\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.textmode";info.offset=(caddr_t)(&(var.textmode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"textmode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field textmode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xshape_type.textfont";info.offset=(caddr_t)(&(var.textfont))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"textfont");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xshape_type, field textfont\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xshape_type",fields);
}
void INFO_xplot_type(){
struct xplot_type var;Info info;char fields[2500];fields[0]='\0';info.name="xplot_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xplot_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.tx";info.offset=(caddr_t)(&(var.tx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field tx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.ty";info.offset=(caddr_t)(&(var.ty))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ty");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field ty\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.tz";info.offset=(caddr_t)(&(var.tz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field tz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.value";info.offset=(caddr_t)(&(var.value))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"value");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field value\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.pixflags";info.offset=(caddr_t)(&(var.pixflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"pixflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field pixflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.xpts";info.offset=(caddr_t)(&(var.xpts))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"xpts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field xpts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.ypts";info.offset=(caddr_t)(&(var.ypts))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"ypts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field ypts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.npts";info.offset=(caddr_t)(&(var.npts))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"npts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field npts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.linewidth";info.offset=(caddr_t)(&(var.linewidth))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"linewidth");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field linewidth\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.linestyle";info.offset=(caddr_t)(&(var.linestyle))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"linestyle");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field linestyle\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.xmin";info.offset=(caddr_t)(&(var.xmin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xmin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field xmin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.ymin";info.offset=(caddr_t)(&(var.ymin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ymin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field ymin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.xmax";info.offset=(caddr_t)(&(var.xmax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xmax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field xmax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.ymax";info.offset=(caddr_t)(&(var.ymax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ymax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field ymax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.wx";info.offset=(caddr_t)(&(var.wx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"wx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field wx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.wy";info.offset=(caddr_t)(&(var.wy))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"wy");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field wy\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.input";info.offset=(caddr_t)(&(var.input))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"input");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field input\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.plot_placement";info.offset=(caddr_t)(&(var.plot_placement))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"plot_placement");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field plot_placement\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.memory_mode";info.offset=(caddr_t)(&(var.memory_mode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"memory_mode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field memory_mode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.auto_mode";info.offset=(caddr_t)(&(var.auto_mode))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"auto_mode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field auto_mode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.sensitivity";info.offset=(caddr_t)(&(var.sensitivity))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"sensitivity");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field sensitivity\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.do_slope";info.offset=(caddr_t)(&(var.do_slope))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"do_slope");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field do_slope\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.xsquish";info.offset=(caddr_t)(&(var.xsquish))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xsquish");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field xsquish\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.ysquish";info.offset=(caddr_t)(&(var.ysquish))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ysquish");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field ysquish\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.allocated_pts";info.offset=(caddr_t)(&(var.allocated_pts))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"allocated_pts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field allocated_pts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.compressed_pts";info.offset=(caddr_t)(&(var.compressed_pts))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"compressed_pts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field compressed_pts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.labelpix";info.offset=(caddr_t)(&(var.labelpix))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"labelpix");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field labelpix\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.notxpts";info.offset=(caddr_t)(&(var.notxpts))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"notxpts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field notxpts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xplot_type.processed";info.offset=(caddr_t)(&(var.processed))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"processed");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xplot_type, field processed\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xplot_type",fields);
}
void INFO_xaxis_type(){
struct xaxis_type var;Info info;char fields[2500];fields[0]='\0';info.name="xaxis_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xaxis_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.tx";info.offset=(caddr_t)(&(var.tx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field tx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.ty";info.offset=(caddr_t)(&(var.ty))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ty");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field ty\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.tz";info.offset=(caddr_t)(&(var.tz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field tz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.value";info.offset=(caddr_t)(&(var.value))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"value");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field value\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.pixflags";info.offset=(caddr_t)(&(var.pixflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"pixflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field pixflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.linewidth";info.offset=(caddr_t)(&(var.linewidth))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"linewidth");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field linewidth\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.linestyle";info.offset=(caddr_t)(&(var.linestyle))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"linestyle");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field linestyle\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.textcolor";info.offset=(caddr_t)(&(var.textcolor))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"textcolor");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field textcolor\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.textmode";info.offset=(caddr_t)(&(var.textmode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"textmode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field textmode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.textfont";info.offset=(caddr_t)(&(var.textfont))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"textfont");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field textfont\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.units";info.offset=(caddr_t)(&(var.units))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"units");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field units\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.title";info.offset=(caddr_t)(&(var.title))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"title");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field title\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.unitoffset";info.offset=(caddr_t)(&(var.unitoffset))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"unitoffset");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field unitoffset\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.titleoffset";info.offset=(caddr_t)(&(var.titleoffset))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"titleoffset");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field titleoffset\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.ticklength";info.offset=(caddr_t)(&(var.ticklength))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ticklength");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field ticklength\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.tickmode";info.offset=(caddr_t)(&(var.tickmode))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"tickmode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field tickmode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.labeloffset";info.offset=(caddr_t)(&(var.labeloffset))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"labeloffset");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field labeloffset\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.rotatelabels";info.offset=(caddr_t)(&(var.rotatelabels))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"rotatelabels");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field rotatelabels\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.axx";info.offset=(caddr_t)(&(var.axx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"axx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field axx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.axy";info.offset=(caddr_t)(&(var.axy))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"axy");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field axy\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.axz";info.offset=(caddr_t)(&(var.axz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"axz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field axz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.axmin";info.offset=(caddr_t)(&(var.axmin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"axmin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field axmin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.axmax";info.offset=(caddr_t)(&(var.axmax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"axmax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field axmax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.axlength";info.offset=(caddr_t)(&(var.axlength))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"axlength");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field axlength\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.tickx";info.offset=(caddr_t)(&(var.tickx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tickx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field tickx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.ticky";info.offset=(caddr_t)(&(var.ticky))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ticky");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field ticky\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.tickz";info.offset=(caddr_t)(&(var.tickz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tickz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field tickz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.labmin";info.offset=(caddr_t)(&(var.labmin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"labmin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field labmin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.labmax";info.offset=(caddr_t)(&(var.labmax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"labmax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field labmax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xaxis_type.update_parent";info.offset=(caddr_t)(&(var.update_parent))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"update_parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xaxis_type, field update_parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xaxis_type",fields);
}
void INFO_xgif_type(){
struct xgif_type var;Info info;char fields[2500];fields[0]='\0';info.name="xgif_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xgif_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.tx";info.offset=(caddr_t)(&(var.tx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field tx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.ty";info.offset=(caddr_t)(&(var.ty))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ty");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field ty\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.tz";info.offset=(caddr_t)(&(var.tz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field tz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.value";info.offset=(caddr_t)(&(var.value))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"value");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field value\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.pixflags";info.offset=(caddr_t)(&(var.pixflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"pixflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field pixflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.filename";info.offset=(caddr_t)(&(var.filename))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"filename");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field filename\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.format";info.offset=(caddr_t)(&(var.format))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"format");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field format\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.srcx";info.offset=(caddr_t)(&(var.srcx))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"srcx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field srcx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.srcy";info.offset=(caddr_t)(&(var.srcy))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"srcy");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field srcy\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.dstx";info.offset=(caddr_t)(&(var.dstx))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"dstx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field dstx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xgif_type.dsty";info.offset=(caddr_t)(&(var.dsty))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"dsty");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xgif_type, field dsty\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xgif_type",fields);
}
void INFO_xcell_type(){
struct xcell_type var;Info info;char fields[2500];fields[0]='\0';info.name="xcell_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xcell_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.tx";info.offset=(caddr_t)(&(var.tx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field tx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.ty";info.offset=(caddr_t)(&(var.ty))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ty");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field ty\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.tz";info.offset=(caddr_t)(&(var.tz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field tz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.value";info.offset=(caddr_t)(&(var.value))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"value");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field value\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.pixflags";info.offset=(caddr_t)(&(var.pixflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"pixflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field pixflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.xpts";info.offset=(caddr_t)(&(var.xpts))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"xpts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field xpts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.ypts";info.offset=(caddr_t)(&(var.ypts))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"ypts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field ypts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.zpts";info.offset=(caddr_t)(&(var.zpts))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"zpts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field zpts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.dia";info.offset=(caddr_t)(&(var.dia))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"dia");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field dia\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.color";info.offset=(caddr_t)(&(var.color))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"color");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field color\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.colmin";info.offset=(caddr_t)(&(var.colmin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"colmin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field colmin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.colmax";info.offset=(caddr_t)(&(var.colmax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"colmax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field colmax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.diamin";info.offset=(caddr_t)(&(var.diamin))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"diamin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field diamin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.diamax";info.offset=(caddr_t)(&(var.diamax))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"diamax");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field diamax\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.diarange";info.offset=(caddr_t)(&(var.diarange))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"diarange");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field diarange\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.soma";info.offset=(caddr_t)(&(var.soma))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"soma");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field soma\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.names";info.offset=(caddr_t)(&(var.names))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"names");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field names\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.path";info.offset=(caddr_t)(&(var.path))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"path");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field path\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.field";info.offset=(caddr_t)(&(var.field))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"field");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field field\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.fieldpath";info.offset=(caddr_t)(&(var.fieldpath))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fieldpath");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field fieldpath\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.autocol";info.offset=(caddr_t)(&(var.autocol))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"autocol");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field autocol\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.autodia";info.offset=(caddr_t)(&(var.autodia))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"autodia");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field autodia\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.labelmode";info.offset=(caddr_t)(&(var.labelmode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"labelmode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field labelmode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.cellmode";info.offset=(caddr_t)(&(var.cellmode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"cellmode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field cellmode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.allocated_interps";info.offset=(caddr_t)(&(var.allocated_interps))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"allocated_interps");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field allocated_interps\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.allocated_pts";info.offset=(caddr_t)(&(var.allocated_pts))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"allocated_pts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field allocated_pts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.npts";info.offset=(caddr_t)(&(var.npts))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"npts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field npts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.fromlist";info.offset=(caddr_t)(&(var.fromlist))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);__IFI(1);InfoHashPut(&info);strcat(fields,"fromlist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field fromlist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.tolist";info.offset=(caddr_t)(&(var.tolist))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);__IFI(1);InfoHashPut(&info);strcat(fields,"tolist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field tolist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.shapelist";info.offset=(caddr_t)(&(var.shapelist))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);__IFI(1);InfoHashPut(&info);strcat(fields,"shapelist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field shapelist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.nlist";info.offset=(caddr_t)(&(var.nlist))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"nlist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field nlist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.nfield";info.offset=(caddr_t)(&(var.nfield))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"nfield");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field nfield\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xcell_type.fieldref";info.offset=(caddr_t)(&(var.fieldref))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);__IFI(1);InfoHashPut(&info);strcat(fields,"fieldref");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xcell_type, field fieldref\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xcell_type",fields);
}
void INFO_xvar_type(){
struct xvar_type var;Info info;char fields[2500];fields[0]='\0';info.name="xvar_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xvar_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.tx";info.offset=(caddr_t)(&(var.tx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field tx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.ty";info.offset=(caddr_t)(&(var.ty))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ty");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field ty\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.tz";info.offset=(caddr_t)(&(var.tz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field tz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.value";info.offset=(caddr_t)(&(var.value))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"value");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field value\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.pixflags";info.offset=(caddr_t)(&(var.pixflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"pixflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field pixflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.shapes";info.offset=(caddr_t)(&(var.shapes))-(caddr_t)(&var);		info.type="varShape";info.type_size=sizeof(varShape);__IFI(1);InfoHashPut(&info);strcat(fields,"shapes");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field shapes\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.nshapes";info.offset=(caddr_t)(&(var.nshapes))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"nshapes");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field nshapes\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.mode";info.offset=(caddr_t)(&(var.mode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"mode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field mode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.varmode";info.offset=(caddr_t)(&(var.varmode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"varmode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field varmode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.value_min";info.offset=(caddr_t)((var.value_min))-(caddr_t)(&var);		info.type="double";info.type_size=sizeof(double);__IND(1);__IDS(0,5);InfoHashPut(&info);strcat(fields,"value_min");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field value_min\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.value_max";info.offset=(caddr_t)((var.value_max))-(caddr_t)(&var);		info.type="double";info.type_size=sizeof(double);__IND(1);__IDS(0,5);InfoHashPut(&info);strcat(fields,"value_max");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field value_max\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.values";info.offset=(caddr_t)((var.values))-(caddr_t)(&var);		info.type="double";info.type_size=sizeof(double);__IND(1);__IDS(0,5);InfoHashPut(&info);strcat(fields,"values");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field values\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.color_val";info.offset=(caddr_t)(&(var.color_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"color_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field color_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.morph_val";info.offset=(caddr_t)(&(var.morph_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"morph_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field morph_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.xoffset_val";info.offset=(caddr_t)(&(var.xoffset_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"xoffset_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field xoffset_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.yoffset_val";info.offset=(caddr_t)(&(var.yoffset_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"yoffset_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field yoffset_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.zoffset_val";info.offset=(caddr_t)(&(var.zoffset_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"zoffset_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field zoffset_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.text_val";info.offset=(caddr_t)(&(var.text_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"text_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field text_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.textcolor_val";info.offset=(caddr_t)(&(var.textcolor_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"textcolor_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field textcolor_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.linethickness_val";info.offset=(caddr_t)(&(var.linethickness_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"linethickness_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field linethickness_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.autolimits";info.offset=(caddr_t)(&(var.autolimits))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"autolimits");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field autolimits\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xvar_type.sizescale";info.offset=(caddr_t)(&(var.sizescale))-(caddr_t)(&var);		info.type="double";info.type_size=sizeof(double);InfoHashPut(&info);strcat(fields,"sizescale");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xvar_type, field sizescale\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xvar_type",fields);
}
void INFO_xview_type(){
struct xview_type var;Info info;char fields[2500];fields[0]='\0';info.name="xview_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xview_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.tx";info.offset=(caddr_t)(&(var.tx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field tx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.ty";info.offset=(caddr_t)(&(var.ty))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ty");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field ty\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.tz";info.offset=(caddr_t)(&(var.tz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field tz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.value";info.offset=(caddr_t)(&(var.value))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"value");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field value\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.pixflags";info.offset=(caddr_t)(&(var.pixflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"pixflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field pixflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.shapes";info.offset=(caddr_t)(&(var.shapes))-(caddr_t)(&var);		info.type="varShape";info.type_size=sizeof(varShape);__IFI(1);InfoHashPut(&info);strcat(fields,"shapes");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field shapes\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.nshapes";info.offset=(caddr_t)(&(var.nshapes))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"nshapes");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field nshapes\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.mode";info.offset=(caddr_t)(&(var.mode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"mode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field mode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.viewmode";info.offset=(caddr_t)(&(var.viewmode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"viewmode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field viewmode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.value_min";info.offset=(caddr_t)((var.value_min))-(caddr_t)(&var);		info.type="double";info.type_size=sizeof(double);__IND(1);__IDS(0,5);InfoHashPut(&info);strcat(fields,"value_min");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field value_min\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.value_max";info.offset=(caddr_t)((var.value_max))-(caddr_t)(&var);		info.type="double";info.type_size=sizeof(double);__IND(1);__IDS(0,5);InfoHashPut(&info);strcat(fields,"value_max");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field value_max\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.values";info.offset=(caddr_t)((var.values))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);__IFI(1);__IND(1);__IDS(0,5);InfoHashPut(&info);strcat(fields,"values");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field values\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.color_val";info.offset=(caddr_t)(&(var.color_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"color_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field color_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.morph_val";info.offset=(caddr_t)(&(var.morph_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"morph_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field morph_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.xoffset_val";info.offset=(caddr_t)(&(var.xoffset_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"xoffset_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field xoffset_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.yoffset_val";info.offset=(caddr_t)(&(var.yoffset_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"yoffset_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field yoffset_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.zoffset_val";info.offset=(caddr_t)(&(var.zoffset_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"zoffset_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field zoffset_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.text_val";info.offset=(caddr_t)(&(var.text_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"text_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field text_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.textcolor_val";info.offset=(caddr_t)(&(var.textcolor_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"textcolor_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field textcolor_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.linethickness_val";info.offset=(caddr_t)(&(var.linethickness_val))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"linethickness_val");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field linethickness_val\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.autolimits";info.offset=(caddr_t)(&(var.autolimits))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"autolimits");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field autolimits\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.sizescale";info.offset=(caddr_t)(&(var.sizescale))-(caddr_t)(&var);		info.type="double";info.type_size=sizeof(double);InfoHashPut(&info);strcat(fields,"sizescale");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field sizescale\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.xpts";info.offset=(caddr_t)(&(var.xpts))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"xpts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field xpts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.ypts";info.offset=(caddr_t)(&(var.ypts))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"ypts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field ypts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.zpts";info.offset=(caddr_t)(&(var.zpts))-(caddr_t)(&var);		info.type="interpol_struct";info.type_size=sizeof(struct interpol_struct);__IFI(1);InfoHashPut(&info);strcat(fields,"zpts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field zpts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.ncoords";info.offset=(caddr_t)(&(var.ncoords))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"ncoords");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field ncoords\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.max_ncoords";info.offset=(caddr_t)(&(var.max_ncoords))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"max_ncoords");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field max_ncoords\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.autoscale";info.offset=(caddr_t)(&(var.autoscale))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"autoscale");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field autoscale\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.undraw_by_blanking";info.offset=(caddr_t)(&(var.undraw_by_blanking))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"undraw_by_blanking");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field undraw_by_blanking\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.path";info.offset=(caddr_t)(&(var.path))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"path");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field path\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.relpath";info.offset=(caddr_t)(&(var.relpath))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"relpath");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field relpath\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.field";info.offset=(caddr_t)(&(var.field))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"field");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field field\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.field2";info.offset=(caddr_t)(&(var.field2))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"field2");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field field2\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.msgpath";info.offset=(caddr_t)(&(var.msgpath))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"msgpath");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field msgpath\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.msgtype";info.offset=(caddr_t)(&(var.msgtype))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"msgtype");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field msgtype\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.msgslotno";info.offset=(caddr_t)(&(var.msgslotno))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"msgslotno");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field msgslotno\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.valuemode";info.offset=(caddr_t)(&(var.valuemode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"valuemode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field valuemode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.allocated_pts";info.offset=(caddr_t)(&(var.allocated_pts))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"allocated_pts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field allocated_pts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.viewflags";info.offset=(caddr_t)(&(var.viewflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"viewflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field viewflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.coord_elist";info.offset=(caddr_t)(&(var.coord_elist))-(caddr_t)(&var);		info.type="ElementList";info.type_size=sizeof(ElementList);__IFI(1);InfoHashPut(&info);strcat(fields,"coord_elist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field coord_elist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.value_elist";info.offset=(caddr_t)(&(var.value_elist))-(caddr_t)(&var);		info.type="ElementList";info.type_size=sizeof(ElementList);__IFI(1);InfoHashPut(&info);strcat(fields,"value_elist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field value_elist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xview_type.msg_elist";info.offset=(caddr_t)(&(var.msg_elist))-(caddr_t)(&var);		info.type="ElementList";info.type_size=sizeof(ElementList);__IFI(1);InfoHashPut(&info);strcat(fields,"msg_elist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xview_type, field msg_elist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xview_type",fields);
}
void INFO_xtree_leaf_type(){
struct xtree_leaf_type var;Info info;char fields[2500];fields[0]='\0';info.name="xtree_leaf_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xtree_leaf_type.xpts";info.offset=(caddr_t)(&(var.xpts))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"xpts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_leaf_type, field xpts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_leaf_type.ypts";info.offset=(caddr_t)(&(var.ypts))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ypts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_leaf_type, field ypts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_leaf_type.zpts";info.offset=(caddr_t)(&(var.zpts))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"zpts");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_leaf_type, field zpts\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_leaf_type.ptname";info.offset=(caddr_t)(&(var.ptname))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"ptname");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_leaf_type, field ptname\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_leaf_type.shapeindex";info.offset=(caddr_t)(&(var.shapeindex))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"shapeindex");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_leaf_type, field shapeindex\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_leaf_type.shapeflags";info.offset=(caddr_t)(&(var.shapeflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"shapeflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_leaf_type, field shapeflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_leaf_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="long";info.type_size=sizeof(long);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_leaf_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_leaf_type.textfg";info.offset=(caddr_t)(&(var.textfg))-(caddr_t)(&var);		info.type="long";info.type_size=sizeof(long);InfoHashPut(&info);strcat(fields,"textfg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_leaf_type, field textfg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_leaf_type.elm";info.offset=(caddr_t)(&(var.elm))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"elm");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_leaf_type, field elm\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xtree_leaf_type",fields);
}
void INFO_xtree_msgarrow_type(){
struct xtree_msgarrow_type var;Info info;char fields[2500];fields[0]='\0';info.name="xtree_msgarrow_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xtree_msgarrow_type.msgtype";info.offset=(caddr_t)(&(var.msgtype))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"msgtype");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_msgarrow_type, field msgtype\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_msgarrow_type.msgdesttype";info.offset=(caddr_t)(&(var.msgdesttype))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"msgdesttype");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_msgarrow_type, field msgdesttype\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_msgarrow_type.msgsrc";info.offset=(caddr_t)(&(var.msgsrc))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"msgsrc");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_msgarrow_type, field msgsrc\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_msgarrow_type.msgdest";info.offset=(caddr_t)(&(var.msgdest))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"msgdest");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_msgarrow_type, field msgdest\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_msgarrow_type.msgfgstr";info.offset=(caddr_t)(&(var.msgfgstr))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"msgfgstr");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_msgarrow_type, field msgfgstr\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_msgarrow_type.msgfg";info.offset=(caddr_t)(&(var.msgfg))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"msgfg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_msgarrow_type, field msgfg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_msgarrow_type.fliparrow";info.offset=(caddr_t)(&(var.fliparrow))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"fliparrow");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_msgarrow_type, field fliparrow\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_msgarrow_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_msgarrow_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_msgarrow_type.script_add";info.offset=(caddr_t)(&(var.script_add))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script_add");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_msgarrow_type, field script_add\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_msgarrow_type.script_drop";info.offset=(caddr_t)(&(var.script_drop))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script_drop");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_msgarrow_type, field script_drop\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xtree_msgarrow_type",fields);
}
void INFO_xtree_type(){
struct xtree_type var;Info info;char fields[2500];fields[0]='\0';info.name="xtree_type";info.type_size=sizeof(var);InfoHashPut(&info);
__BZ;info.name="xtree_type.name";info.offset=(caddr_t)(&(var.name))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"name");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field name\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.index";info.offset=(caddr_t)(&(var.index))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"index");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field index\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.object";info.offset=(caddr_t)(&(var.object))-(caddr_t)(&var);		info.type="object_type";info.type_size=sizeof(struct object_type);__IFI(1);InfoHashPut(&info);strcat(fields,"object");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field object\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.flags";info.offset=(caddr_t)(&(var.flags))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"flags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field flags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.nextfields";info.offset=(caddr_t)(&(var.nextfields))-(caddr_t)(&var);		info.type="short";info.type_size=sizeof(short);InfoHashPut(&info);strcat(fields,"nextfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field nextfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.extfields";info.offset=(caddr_t)(&(var.extfields))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"extfields");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field extfields\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.x";info.offset=(caddr_t)(&(var.x))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"x");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field x\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.y";info.offset=(caddr_t)(&(var.y))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"y");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field y\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.z";info.offset=(caddr_t)(&(var.z))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"z");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field z\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.nmsgin";info.offset=(caddr_t)(&(var.nmsgin))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field nmsgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.msgin";info.offset=(caddr_t)(&(var.msgin))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgin");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field msgin\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.msgintail";info.offset=(caddr_t)(&(var.msgintail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgintail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field msgintail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.nmsgout";info.offset=(caddr_t)(&(var.nmsgout))-(caddr_t)(&var);		info.type="unsigned int";info.type_size=sizeof(unsigned int);InfoHashPut(&info);strcat(fields,"nmsgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field nmsgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.msgout";info.offset=(caddr_t)(&(var.msgout))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgout");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field msgout\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.msgouttail";info.offset=(caddr_t)(&(var.msgouttail))-(caddr_t)(&var);		info.type="Msg";info.type_size=sizeof(Msg);__IFI(1);InfoHashPut(&info);strcat(fields,"msgouttail");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field msgouttail\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.compositeobject";info.offset=(caddr_t)(&(var.compositeobject))-(caddr_t)(&var);		info.type="GenesisObject";info.type_size=sizeof(GenesisObject);__IFI(1);InfoHashPut(&info);strcat(fields,"compositeobject");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field compositeobject\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.componentof";info.offset=(caddr_t)(&(var.componentof))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"componentof");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field componentof\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.parent";info.offset=(caddr_t)(&(var.parent))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"parent");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field parent\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.child";info.offset=(caddr_t)(&(var.child))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"child");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field child\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.next";info.offset=(caddr_t)(&(var.next))-(caddr_t)(&var);		info.type="Element";info.type_size=sizeof(Element);__IFI(1);InfoHashPut(&info);strcat(fields,"next");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field next\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.widget";info.offset=(caddr_t)(&(var.widget))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"widget");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field widget\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.fg";info.offset=(caddr_t)(&(var.fg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"fg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field fg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.script";info.offset=(caddr_t)(&(var.script))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"script");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field script\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.tx";info.offset=(caddr_t)(&(var.tx))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tx");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field tx\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.ty";info.offset=(caddr_t)(&(var.ty))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"ty");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field ty\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.tz";info.offset=(caddr_t)(&(var.tz))-(caddr_t)(&var);		info.type="float";info.type_size=sizeof(float);InfoHashPut(&info);strcat(fields,"tz");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field tz\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.value";info.offset=(caddr_t)(&(var.value))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"value");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field value\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.pixflags";info.offset=(caddr_t)(&(var.pixflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"pixflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field pixflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.shapes";info.offset=(caddr_t)(&(var.shapes))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"shapes");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field shapes\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.shapevals";info.offset=(caddr_t)(&(var.shapevals))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(2);InfoHashPut(&info);strcat(fields,"shapevals");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field shapevals\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.nshapes";info.offset=(caddr_t)(&(var.nshapes))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"nshapes");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field nshapes\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.arrowmode";info.offset=(caddr_t)(&(var.arrowmode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"arrowmode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field arrowmode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.treemode";info.offset=(caddr_t)(&(var.treemode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"treemode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field treemode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.namemode";info.offset=(caddr_t)(&(var.namemode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"namemode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field namemode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.sizescale";info.offset=(caddr_t)(&(var.sizescale))-(caddr_t)(&var);		info.type="double";info.type_size=sizeof(double);InfoHashPut(&info);strcat(fields,"sizescale");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field sizescale\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.ptlist";info.offset=(caddr_t)(&(var.ptlist))-(caddr_t)(&var);		info.type="xtree_leaf_type";info.type_size=sizeof(struct xtree_leaf_type);__IFI(1);InfoHashPut(&info);strcat(fields,"ptlist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field ptlist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type._ptnames";info.offset=(caddr_t)(&(var._ptnames))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"_ptnames");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field _ptnames\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type._currptname";info.offset=(caddr_t)(&(var._currptname))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"_currptname");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field _currptname\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type._ptnamesize";info.offset=(caddr_t)(&(var._ptnamesize))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"_ptnamesize");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field _ptnamesize\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.ncoords";info.offset=(caddr_t)(&(var.ncoords))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"ncoords");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field ncoords\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.path";info.offset=(caddr_t)(&(var.path))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"path");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field path\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.iconfunc";info.offset=(caddr_t)(&(var.iconfunc))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"iconfunc");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field iconfunc\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.treefg";info.offset=(caddr_t)(&(var.treefg))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"treefg");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field treefg\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.msgpathmode";info.offset=(caddr_t)(&(var.msgpathmode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"msgpathmode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field msgpathmode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.highlight1";info.offset=(caddr_t)(&(var.highlight1))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"highlight1");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field highlight1\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.highlight2";info.offset=(caddr_t)(&(var.highlight2))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"highlight2");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field highlight2\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.hlmode";info.offset=(caddr_t)(&(var.hlmode))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"hlmode");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field hlmode\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.orientation";info.offset=(caddr_t)(&(var.orientation))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"orientation");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field orientation\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.select_elist";info.offset=(caddr_t)(&(var.select_elist))-(caddr_t)(&var);		info.type="ElementList";info.type_size=sizeof(ElementList);__IFI(1);InfoHashPut(&info);strcat(fields,"select_elist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field select_elist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.coord_elist";info.offset=(caddr_t)(&(var.coord_elist))-(caddr_t)(&var);		info.type="ElementList";info.type_size=sizeof(ElementList);__IFI(1);InfoHashPut(&info);strcat(fields,"coord_elist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field coord_elist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.coord_hash";info.offset=(caddr_t)(&(var.coord_hash))-(caddr_t)(&var);		info.type="char";info.type_size=sizeof(char);__IFI(1);InfoHashPut(&info);strcat(fields,"coord_hash");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field coord_hash\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.fromlist";info.offset=(caddr_t)(&(var.fromlist))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);__IFI(1);InfoHashPut(&info);strcat(fields,"fromlist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field fromlist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.tolist";info.offset=(caddr_t)(&(var.tolist))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);__IFI(1);InfoHashPut(&info);strcat(fields,"tolist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field tolist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.arrowflags";info.offset=(caddr_t)(&(var.arrowflags))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);__IFI(1);InfoHashPut(&info);strcat(fields,"arrowflags");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field arrowflags\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.nlist";info.offset=(caddr_t)(&(var.nlist))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"nlist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field nlist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.max_nlist";info.offset=(caddr_t)(&(var.max_nlist))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"max_nlist");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field max_nlist\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.msgarrows";info.offset=(caddr_t)(&(var.msgarrows))-(caddr_t)(&var);		info.type="xtree_msgarrow_type";info.type_size=sizeof(struct xtree_msgarrow_type);__IFI(1);InfoHashPut(&info);strcat(fields,"msgarrows");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field msgarrows\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.nmsgtypes";info.offset=(caddr_t)(&(var.nmsgtypes))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"nmsgtypes");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field nmsgtypes\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
__BZ;info.name="xtree_type.max_nmsgtypes";info.offset=(caddr_t)(&(var.max_nmsgtypes))-(caddr_t)(&var);		info.type="int";info.type_size=sizeof(int);InfoHashPut(&info);strcat(fields,"max_nmsgtypes");strcat(fields,"\n");
if (strlen(fields) > 2500) { Error(); printf("Field size too long for object xtree_type, field max_nmsgtypes\n**See sys/code_sym.c and increase the value of MAX_FIELDS_SIZE\n\n"); }
FieldHashPut("xtree_type",fields);
}
#undef __BZ
#undef __IFI
#undef __IFT
#undef __IND
#undef __IDS
void DATA_draw(){
INFO_xcoredraw_type();
INFO_xdumbdraw_type();
INFO_xgraph_type();
INFO_xdraw_type();
INFO_xpix_type();
INFO_xsphere_type();
INFO_xshape_type();
INFO_xplot_type();
INFO_xaxis_type();
INFO_xgif_type();
INFO_xcell_type();
INFO_xvar_type();
INFO_xview_type();
INFO_xtree_leaf_type();
INFO_xtree_msgarrow_type();
INFO_xtree_type();
}
