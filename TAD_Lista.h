#ifndef TAD_LISTA_H
#define TAD_LISTA_H

#include <stdio.h>
#include <stdlib.h>
#include "TAD_string.h"

typedef struct Nodo {
	str dato;           
	struct Nodo *sig;        
}Nodo;

typedef Nodo *lista;

lista createList();
void showList(lista);
void appendToEnd(lista *, str);
str toStr(lista);
lista strToList(str);
//void concatLists(List *, List);
//int isInList(List, str);

#endif
