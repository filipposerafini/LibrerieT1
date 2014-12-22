// Nome: Filippo
// Cognome: Serafini
// Matricola: 0000723678

#include "element.h"

int type_arrCompare(type_arr a, type_arr b) //TODO//
{
	
}

boolean type_arrEquals(type_arr a, type_arr b) //TODO//
{
	 
}

void type_arrSwap(type_arr *a, type_arr *b)
{
	type_arr temp = *a;
	*a = *b;
	*b = temp;
}

int type_listCompare(type_list a, type_list b) //TODO//
{

}

boolean type_listEquals(type_list a, type_list b) //TODO//
{

}

void type_listSwap(type_list *a, type_list *b)
{
	type_list temp = *a;
	*a = *b;
	*b = temp;
}

void type_listFPrint(FILE* f, type_list a) //TODO////CAMBIARE LE VARIABILI
{
	fprintf(f, FORMAT_TL, a); 
}

void type_arrFPrint(FILE* f, type_arr a) //TODO////CAMBIARE LE VARIABILI
{
	fprintf(f, FORMAT_TA, a); 
}

void type_listPrint(type_list a)
{
	type_listFPrint(stdout, a);
}
void type_arrPrint(type_arr a)
{
	type_arrFPrint(stdout, a);
}

int readField(char buffer[], char sep, FILE *f)
{
	int i = 0;
	char ch = fgetc(f);
	while (ch != sep && ch != '\n' && ch != EOF)
	{
		buffer[i] = ch;
		i++;
		ch = fgetc(f);
	}
	buffer[i] = '\0';
	return ch;
}
