#include "list.h"

list emptyList() 
{
	return NULL;
}

boolean empty(list l)
{
	if (l == NULL)
		return TRUE; 
	else 
		return FALSE;
}

element head(list l)
{
	if (empty(l)) 
		abort(); //TODO errore accesso invalido
	else 
		return l->value;
}

list tail(list l)
{
	if (empty(l))
		abort(); //TODO
	else 
		return l->next;
}

list cons(element el, list l)
{
	list t;
	t = (list)malloc(sizeof(node));
	if (t == NULL)
		abort(); //TODO
	t->value = el;
	t->next = l;
	return t;
}

void freeList(list l)
{
	list temp = l;
	if (!empty(temp))
	{
		temp = tail(l);
		free(l);
		freeList(temp);
	}
}

void showList(list l)
{
	printf("[");
	while (!empty(l)) 
	{
		printf(FORMAT_TL, head(l));
		l = tail(l);
		if (!empty(l)) 
			printf(", ");
	} 
	printf("]\n");
}

boolean inList(element el, list l)
{
	while (!empty(l)) 
	{
		if (el == head(l))
			return TRUE;
		else
			l = tail(l);
	} 
	return FALSE;
}

int lengthList(list l)
{
	int n = 0;
	while (!empty(l))
	{
		n++;
		l = tail(l);
	}
	return n;
}

list copyList(list l) 
{
	if (empty(l))
		return l;
	else 
		return cons(head(l), copyList(tail(l)));
}

list appendList(list l1, list l2)
{
	if (empty(l1))
		return copyList(l2);
	else
		return cons(head(l1), appendList(tail(l1), copyList(l2)));
}

list reverseList(list l) 
{
	if (empty(l))
		return emptyList();
	else 
		return appendList(reverseList(tail(l)), cons(head(l), emptyList()));
}