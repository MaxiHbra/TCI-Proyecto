#ifndef TAD_STRINGS_H
#define TAD_STRINGS_H
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	char dato;
	struct nodo *sig;
}treg;
typedef treg *str;

str createStr(void);
str loadStr(void);
str load2Str(const char*);
void printStr(str);
str concatStr(str,str);
str beforeToken(str,char);
str afterToken(str,char);

#endif
