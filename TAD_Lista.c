#include "TAD_Lista.h"

lista createList(){
	return NULL;
}
	
lista createNodo() {
	lista list = (lista)malloc(sizeof(Nodo));
	list->dato = NULL;
	list->sig = NULL;  
	return list;  
}

void showList(lista list){
	if (list==NULL)
		printf("[]\n");
	else {
		printf("[");
		while (list!=NULL){
			printStr(list->dato);
			if(list->sig!=NULL)
				printf(",");
			list = list->sig;
		}
		printf("]");
	}
}
	
void appendToEnd(lista *list, str cadena){
	lista ult,nuevo;
	nuevo = createNodo();
	nuevo->dato=cadena;
	
	if (*list==NULL){
		*list=nuevo;
	}	
	else{
		ult=*list;
		while(ult->sig!=NULL)
			ult=ult->sig;
		ult->sig = nuevo;
	}	
}
lista strToList(str input) {
	lista list=createList();
	str aux;    
	
	while (input != NULL) {
		if(input->dato != ' '){
			aux=createStr();
			aux->dato=input->dato;
			appendToEnd(&list, aux);
		}
		input=input->sig;
	}
	return list;
}

str toStr(lista list){
	str string;
	string=createStr();
	string=list->dato;
	list=list->sig;
	while(list!=NULL){
		string=concatStr(string,list->dato);
		list=list->sig;
	}
	return string;
}

