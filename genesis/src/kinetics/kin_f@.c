#define PF(F,T) HashFunc("F",F,"T")
void FUNC_kin(){
extern int ReacFunc();
extern int PoolFunc();
extern int EnzFunc();
extern int ConcchanFunc();
extern int GsolveFunc();
HashFunc("ReacFunc",ReacFunc,"int");
HashFunc("PoolFunc",PoolFunc,"int");
HashFunc("EnzFunc",EnzFunc,"int");
HashFunc("ConcchanFunc",ConcchanFunc,"int");
HashFunc("GsolveFunc",GsolveFunc,"int");
}
#undef PF
