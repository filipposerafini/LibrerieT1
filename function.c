#include "function.h"

list leggiTraslochi(char* fileName)
{
	list l = emptyList();
	int i = 1;
	FILE* f;
	trasloco temp;

	if ((f = fopen(fileName, "r")) == NULL)
	{
		handleError(FOPEN_R_ERR);
		return emptyList();
	}

	while ((i = fscanf(f, "%s %d %d\n", temp.nome, &temp.giorno, &temp.ore)) == 3)
	{
		l = cons(temp, l);
	}
	
	fclose(f);
	return l;
}
void stampaTraslochi(list elenco)
{
	showList(elenco);
}
list ordina(list elenco)
{
	list a = copyList(elenco);
	sortList(&a);
}