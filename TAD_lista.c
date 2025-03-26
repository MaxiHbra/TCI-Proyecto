#include "TAD_lista.h"

lista createList(void){
	lista aux;
	aux=(lista)malloc(sizeof(reg));
	aux->sig=NULL;
	return aux;
}

void showList(lista a){
	printf("\n[");
	while(a!=NULL){
		printStr(a->dato);
		a=a->sig;
		if(a!=NULL)printf(",");
	}
	printf("]");
}

void append(lista *a, str cab){
	lista aux;
	if((*a)==NULL){
		(*a)=createList();
		(*a)->dato=cab->dato;
	}
	else{
		aux=*a;
		while(aux->sig!=NULL) 
			aux=aux->sig;
		aux->sig=createList();
		aux=aux->sig;
		aux->dato=cab->dato;
	}
}

str toStr(lista a){ /* Consultar ubicacion de esta funcion */
	str cab=createStr();
	cab=NULL;
	while(a!=NULL){
		cab=concatStr(cab,a->dato);
		a=a->sig;
	}
	return cab;
}

lista strToList(str cadStr){
	lista cab=createList();
	while(cadStr!=NULL){
		append(&cab,cadStr);
		cad=cad->sig;
	}
}
