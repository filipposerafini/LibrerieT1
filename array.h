#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include "common.h"


//Ricerca
int searchFirst(type_arr arr[], int dim, type_arr el); //Resistuisce la prima posizione dell'elemento el nell'array, -1 se non è presente
int searchLast(type_arr arr[], int dim, type_arr el); //Resistuisce l'ultima posizione dell'elemento el nell'array, -1 se non è presente
boolean inArray( type_arr arr[], int dim, type_arr el); //TRUE se el è presente nell'array, altrimenti FALSE
int countRecurrance( type_arr arr[], int dim, type_arr el ); //Conta quante volte l'elemento el è presente nell'array

int findMax( type_arr arr[], int dim ); //Trova la posizione dell'elemento massimo
int findMin( type_arr arr[], int dim ); //Trova la posizione dell'elemento minimo

//Confronto
boolean compareEquals(type_arr arr1[], int dim1, type_arr arr2[], int dim2); //Controlla se due array sono uguali (hanno gli stessi elementi nello stesso ordine)
boolean compareUnordered(type_arr arr1[], int dim1, type_arr arr2[], int dim2); //Controlla se due array hanno gli stessi elementi in ordine diverso

//Ordinamento
void naiveSort(int arr[], int dim);
void quickSort(int a[], int dim);
void quickSortR(int a[], int iniz, int fine);

//Altro
void showArray(type_arr arr[], int dim);



#endif