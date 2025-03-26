#ifndef TAD_LISTA_H
#define TAD_LISTA_H
#include "TAD_strings.h"

typedef struct node{
	str dato;
	struct node sig;
}reg;

typedef reg *lista;

lista createList(void);
void showList(lista);
void append(lista*,str);
str toStr(lista);
lista strToList(str);

#endif
