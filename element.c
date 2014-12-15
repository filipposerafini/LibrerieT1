// Nome:
// Cognome:
// Matricola:

#include "element.h"

int elementCompare(element a, element b) //TODO//
{
	return a - b;

	//Per numeri e char
	// return a-b;
	//Per le stringhe
	// return strcmp(a, b);
}

boolean elementEquals(element a, element b) //TODO//
{
	return (a == b); //DA MODIFICARE A SECONDA DI ELEMENT
}

int type_arrCompare(type_arr a, type_arr b) //TODO//
{
	//Se element e type_arr UGUALI
	return elementCompare(a, b);

	//Se element e type_arr DIVERSI

	//Per numeri e char
	// return a-b;

	//Per le stringhe
	// return strcmp(a, b);
}

boolean type_arrEquals(type_arr a, type_arr b) //TODO//
{
	return elementEquals(a, b); //DA MODIFICARE A SECONDA DI ELEMENT (se type_arr diverso da element)
}

void type_arrSwap(type_arr *a, type_arr *b)
{
	type_arr temp = *a;
	*a = *b;
	*b = temp;
}

int type_listCompare(type_list a, type_list b) //TODO//
{
	//Se element e type_arr UGUALI
	return elementCompare(a, b);

	//Per i numeri e i char..
	// return a - b
	//Per le stringhe
	// return strcmp(a, b);

}

boolean type_listEquals(type_list a, type_list b) //TODO//
{
	return elementEquals(a, b); //DA MODIFICARE A SECONDA DI ELEMENT (se type_arr diverso da element)
}

void type_listSwap(type_list *a, type_list *b)
{
	type_list temp = *a;
	*a = *b;
	*b = temp;
}

void type_listFPrint(FILE* f, type_list a) //TODO//
{
	fprintf(f, FORMAT_TL, a); //CAMBIARE LE VARIABILI
}

void type_arrFPrint(FILE* f, type_arr a) //TODO//
{
	fprintf(f, FORMAT_TA, a); //CAMBIARE LE VARIABILI
}

void type_listPrint(type_list a)
{
	type_listFPrint(stdout, a);
}
void type_arrPrint(type_arr a)
{
	type_arrFPrint(stdout, a);
}
