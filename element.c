// Matricola:
// Nome:

#include "element.h"

int elementCompare(element a, element b)
{
	return (a.c - b.c);

	//Per numeri e char
	// return a-b;
	//Per le stringhe
	// return strcmp(a, b);
}

boolean elementEquals(element a, element b)
{
	return (a.c == b.c && a.i == b.i && strcmp(a.s, b.s) == 0);
}

int type_arrCompare(type_arr a, type_arr b)
{
	
	return elementCompare(a, b);

	//Per numeri e char
	// return a-b;
	//Per le stringhe
	// return strcmp(a, b);
}

boolean type_arrEquals(type_arr a, type_arr b)
{
	return elementEquals(a, b);
}

void type_arrSwap(type_arr *a, type_arr *b)
{
	type_arr temp = *a;
	*a = *b;
	*b = temp;
}

int type_listCompare(type_list a, type_list b)
{
	//Per i numeri e i char..
	return elementCompare(a, b);
	//Per le stringhe
	// return strcmp(a, b);

}

boolean type_listEquals(type_list a, type_list b)
{
	return elementEquals(a, b);
}

void type_listSwap(type_list *a, type_list *b)
{
	type_list temp = *a;
	*a = *b;
	*b = temp;
}

//Funzioni di output
void type_listFPrint(FILE* f, type_list a)
{
	fprintf(f, FORMAT_TL, a.i, a.c, a.s);
}

void type_arrFPrint(FILE* f, type_arr a)
{
	fprintf(f, FORMAT_TA, a.i, a.c, a.s);
}

void type_listPrint(type_list a)
{
	type_listFPrint(stdout, a);
}
void type_arrPrint(type_arr a)
{
	type_arrFPrint(stdout, a);
}
