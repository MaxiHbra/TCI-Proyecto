#ifndef TAD_SET_H
#define TAD_SET_H
#include "TAD_string.h"
typedef struct nodo{
	str dato;
	struct nodo * sig;
}T_Nodo;
typedef T_Nodo * set;
set createSet();
void appenSet(set*,str);
void showSet(set);
set strToSetToken(str.char);
set unionSet(set,set);
set intersetionSEt(set,set);
set deferenciaSet(set,set);
int pertenence(str,set);
int include(set,set);
#endif
