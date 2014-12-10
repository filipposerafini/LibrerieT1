#include "common.h"
#include "element.h"

#ifndef LIST_H
#define LIST_H

typedef struct list_element {
	type_list value;
	struct list_element *next;
} node;

typedef node *list;

//PRIMITIVE
list emptyList(); //Restituisce lista vuota
boolean empty(list l); //Verifica se lista vuota
element head(list l); //Restituisce il valore del primo elemento della lista
list tail(list l); //Restituisce un puntatore alla coda della lista
list cons(element el, list l); //Inserisce il valore el in testa alla lista l
void freeList(list l); //Dealloca la memoria della lista

//NON PRIMITIVE
void showList(list l); //Stampa la lista
boolean inList(element el, list l); //Verifica se l'elemento el è presente nella lista
int lengthList(list l); //Restituisce il numero di nodi della lista
list copyList(list l); //Restituisce una copia della lista l
list appendList(list l1, list l2); //Concatena la lista l2 alla lista l1
list reverseList(list l); //Crea una copia della lista con l'ordine inverso

#endif