#include <stdio.h>
#include "TAD_strings.h"
#include "TAD_lista.h"

void moduloStr(str*,str*);
void moduloList(lista*,lista*);

int main(void){
	str cabStr,cab2Str;
	lista cabLis,cab2Lis;
	printf("\nEjecutando funciones del TAD str... ");
	moduloStr(&cabStr,&cab2Str);  /*Modulo que contiene un ejemplo de funcionamiento del TAD STR*/
	/*moduloList(&cabLis,&cab2Lis);*/ /*Modulo que contiene un ejemplo de funcionamiento del TAD LISTA*/
	return 0;
}
	
void moduloStr(str *cab,str *cab2){
	str aux;
	printf("\nPor favor ingresar STR: ");
	(*cab)=loadStr(); /*Carga STR, la funcion loadStr retorna un puntero de la lista*/
	printStr((*cab)); /*Imprime STR sin mas*/
	printf("\nCargano STR2 por parametro... ");
	(*cab2)=load2Str("Test STR"); /*Se envia por parametro una cadena que sera cargada al tipo STR, la funcion retorna un puntero al primer elemento*/
	printStr((*cab2)); /*Imprime STR2*/
	printf("\nConcatenando ambos STR: ");
	aux=concatStr((*cab),(*cab2)); /*La funcion concatena un nuevo puntero con la concatenacion de dos STR*/
	printStr(aux); /*Imprime concatenacion*/
	printf("\nCortando la concatenacion: "); 
	aux=beforeToken(aux,'s'); /*beforeToken recorta un STR al reconocer un token enviado por parametro, en este caso 'S'*/
	printStr(aux); /*Imprime STR recortado*/
}

/*void moduloList(lista *cab, lista *cab2){
	lista aux;
	str auxStr,aux2Str;
	inicializarList((cab));
	inicializarList((cab));
	printf("\nAgregue un elemento STR para añadirlo a una lista: ");
	auxStr=loadStr();
	append(cab,auxStr);
	showList((*cab));
	aux2Str=load2Str("Test Lista");
	append(cab,aux2Str);
	showList((*cab));
	printf("\nConvirtiendo lista a STR: \n");
	aux2Str=toStr((*cab));
	printStr(aux2Str);
	printf("\nConvirtiendo STR a lista: ");
	(*cab2)=strToList(aux2Str);
	showList((*cab2));
}*/
