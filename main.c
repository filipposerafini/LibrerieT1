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
#include "function.h"

int main() 
{

	list l, lo;

	l = leggiTraslochi("file.txt");
	stampaTraslochi(l);
	lo = ordina(l);
	stampaTraslochi(lo);

	freeList(lo);
	freeList(l);
	
	system("PAUSE");
	return 0;
}
