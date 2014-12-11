#include "common.h"


int type_arrCompare(type_arr a, type_arr b)
{
    //Per i numeri e i char..
    return a-b;
    
    //Per le stringhe
    // return strcmp(a, b);
    
}

boolean type_arrEquals(type_arr a, type_arr b)
{
    return (a == b);
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
    return a-b;
    
    //Per le stringhe
    // return strcmp(a, b);
    
}

boolean type_listEquals(type_list a, type_list b)
{
    return (a == b);
}

void type_listSwap(type_list *a, type_list *b)
{
    type_arr temp = *a;
    *a = *b;
    *b = temp;
}

