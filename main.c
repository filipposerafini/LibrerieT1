// Matricola:
// Nome:
//                 ERRORS
//                   |
//                 COMMON
//                   |
//           -----------------
//           |               |
//        ELEMENT            |
//           |               |
//      -----------          |
//      |         |          |
//    ARRAY      LIST       FILE
//      |         |          |
//      ----------------------
//                |
//               MAIN


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
	list l;

	l = cons(casualEl(), cons(casualEl(), cons(casualEl(), cons(casualEl(), emptyList()))));
	showList(l);

	sortList(&l);
	showList(l);

	system("PAUSE");
	return 0;
}