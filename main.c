#include "list.h"
#include "array.h"
#include "file.h"

element casualEl()
{
	element a;
	int i;

	a.i = rand() % 200;
	a.c = (rand() % 26) + 65;

	for (i = 0; i < rand() % 28 +1; i++)
		a.s[i] = (rand() % 26) + 'a' ;

	a.s[i] = '\0';

	return a;
}

void printEl(element a)
{
	printf("%d %c %s\n", a.i, a.c, a.s);
}

int main() 
{
	int i;
	element a;
	list l = emptyList();

	for (i = 0; i < 30; i++)
	{
		a = casualEl();
		l = cons(a, l);
	}
		
	showList(l);
	printf("\n\n\n");

	sortList(&l);
	showList(l);

	system("PAUSE");
	return 0;
}