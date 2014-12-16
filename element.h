// Nome: Filippo
// Cognome: Serafini
// Matricola: 0000723678

#ifndef ELEMENT_H
#define ELEMENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "errors.h"

#define FORMAT_TA "%d" //stringa di formato per type_arr    //TODO//
#define FORMAT_TL "%d" //stringa di formato per type_list	  //TODO//

typedef enum { FALSE, TRUE } boolean;

//DEFINIZIONE DEI TIPI

typedef int type_arr; //sostituire con il tipo voluto  //TODO//
typedef int type_list; //sostituire con il tipo voluto  //TODO//

//ARRAY
int type_arrCompare(type_arr a, type_arr b);
boolean type_arrEquals(type_arr a, type_arr b);
void type_arrSwap(type_arr *a, type_arr *b);
void type_arrPrint(type_arr a);
void type_arrFPrint(FILE* stream, type_arr a);

//LISTE
int type_listCompare(type_list a, type_list b);
boolean type_listEquals(type_list a, type_list b);
void type_listSwap(type_list *a, type_list *b);
void type_listPrint(type_list a);
void type_listFPrint(FILE* stream, type_list a);

//COMMON
int readField(char buffer[], char sep, FILE *f);

#endif 
