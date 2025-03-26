#include "TAD_strings.h"

str createStr(void){
	str aux;
	aux=(str)malloc(sizeof(treg));
	aux->sig=NULL;
	return aux;
}

str load(void){
	str cab=createStr();
	str aux;
	char c=getchar();
	while(c!='\0' && c!=EOF){
		if(cab==NULL)
			cab->dato=c;
		else{
			aux=cab;
			while(aux->sig != NULL)
				aux=aux->sig;
			aux->sig=createStr();
			aux=aux->sig;
			aux->dato=c;
		}
		c=getchar();
	}
	return aux;
}

void printStr(str cab){
	printf("\n");
	while(cab!=NULL){
		printf("%c",cab->dato);
		cab=cab->sig;
	}
}

str concatStr(str a, str b){
	str aux=a;
	while(aux->sig!=NULL) 
		aux=aux->sig;
	aux->sig=b;
	return a;
}

str beforeToken(str cab, char tkn){
	str ant,aux=cab;
	int b=0;
	while(aux!=NULL && b==0){
		if(aux->dato == tkn) 
			b=1;
		else {
			ant=aux;
			aux=aux->sig;
		}
	}
	if(b==1) ant->sig=NULL;
	return cab;
}
/*load2 y load3*/
