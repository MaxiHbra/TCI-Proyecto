#ifndef TAD_STRINGS_H
#define TAD_STRINGS_H

typedef struct nodo{
	char dato;
	struct nodo sig;
}treg;
typedef treg *str;

str createStr(void);
str load(void);
str load2(const char*);
void printStr(str);
str concatStr(str,str);
str beforeToken(str,char);

#endif
