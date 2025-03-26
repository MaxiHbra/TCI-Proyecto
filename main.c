#include <stdio.h>
#include "TAD_strings.h"
#include "TAD_lista.h"

void funcionStr(str*,str*);
/*void funcionList(list*,list*);*/

int main(void){
	str cabStr,cab2Str;
	printf("\nEjecutando funciones del TAD str... ");
	funcionStr(&cabStr,&cab2Str);
	/*Implementar lo mismo para el TAD lista*/
	return 0;
}
	
void funcionStr(str *cab,str *cab2){
	str aux;
	printf("\nPor favor ingresar STR: ");
	(*cab)=loadStr();
	printStr((*cab));
	printf("\nCargano STR2 por parametro... ");
	(*cab2)=load2Str("Test STR");
	printStr((*cab2));
	printf("\nConcatenando ambos STR: ");
	aux=concatStr((*cab),(*cab2));
	printStr(aux);
	printf("\nCortando la concatenacion: ");
	aux=beforeToken(aux,'s');
	printStr(aux);
}
