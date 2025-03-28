#include "TAD_strings.h"

str createStr(){
	str stri;
	stri=(str)malloc(sizeof(treg));
	stri->dato=NULL;
	stri->sig=NULL;
	return stri;
}
	void agregaCola(str *cab,str nue){
		str aux;
		if(*cab!=NULL){aux=createStr();
		aux=*cab;
		while(aux->sig!=NULL) aux=aux->sig;
		aux->sig=nue;
		}else *cab=nue;
	}
		str loadStr(){
			str stri,aux;
			char c;
			stri=createStr();
			stri = NULL;
			c=getchar();
			while(c!='\n'&& c!=EOF){
				aux=createStr();
				aux->dato=c;
				agregaCola(&stri,aux);
				c=getchar();	
			}
			return stri;
		}

void printStr(str cab){
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

str load2Str(const char *l){
	int i=0;
	str cab=createStr();
	str aux;
	while(l[i]!='\n' && l[i]!='\0' && l[i]!=EOF){
		if(cab->dato==NULL)
			cab->dato=l[i];
		else{
			aux=cab;
			while(aux->sig!=NULL) aux=aux->sig;
			aux->sig=createStr();
			aux=aux->sig;
			aux->dato=l[i];
		}
		i++;
	}
	return cab;
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

str afterToken(str cab, char tk){ /*¿Qué deberia de retornar si no se encuentra?*/
	str aux=cab;
	int b=0;
	while(aux!=NULL && b==0){
		if(aux->dato==tk){
			aux=aux->sig;
			b=1;
		}
		else aux=aux->sig;
	}
	return aux; /*Por el momento retornara el puntero que recorre, si no encuentra retorna puntero a NULL*/
}
