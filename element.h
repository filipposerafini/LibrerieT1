// Matricola:
// Nome:

#ifndef ELEMENT_H
#define ELEMENT_H

#include "common.h"

#define FORMAT_TA "%d %c %s\n" //stringa di formato per type_arr
#define FORMAT_TL "%d %c %s" //stringa di formato per type_list	

//DEFINIZIONE DEI TIPI
typedef struct
{
	int i;
	char c;
	char s[30];
} element; //Sostituire int con il tipo voluto

typedef element type_arr; //sostituire int con il tipo voluto
typedef element type_list; //sostituire int con il tipo voluto

//Element
int elementCompare(element a, element b);
boolean elementEquals(element a, element b);

//Array
int type_arrCompare(type_arr a, type_arr b);
boolean type_arrEquals(type_arr a, type_arr b);
void type_arrSwap(type_arr *a, type_arr *b);
void type_arrPrint(type_arr a);
void type_arrFPrint(FILE* stream, type_arr a);

//Liste
int type_listCompare(type_list a, type_list b);
boolean type_listEquals(type_list a, type_list b);
void type_listSwap(type_list *a, type_list *b);
void type_listPrint(type_arr a);
void type_listFPrint(FILE* stream, type_arr a);

#endif 
