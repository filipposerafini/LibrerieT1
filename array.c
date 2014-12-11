#include "array.h"

int searchFirst(type_arr arr[], int dim, type_arr el)
{
    int i;
    for (i = 0; i < dim; i++)
    {
        if ( type_arrEquals(el,arr[i]) )
            return i;
    }
    return -1;
}

int searchLast(type_arr arr[], int dim, type_arr el)
{
    int i;
    for (i = dim-1; i >= 0; i--)
    {
        if ( type_arrEquals(el,arr[i]) )
            return i;
    }
    return -1;
}

boolean inArray( type_arr arr[], int dim, type_arr el)
{
    int i;
    boolean found = FALSE;
    
    for (i = 0; i < dim && !found; i++)
    {
        if ( type_arrEquals(el,arr[i]) )
        {
            found = TRUE;
        }
    }
    return found;
}

int countRecurrance( type_arr arr[], int dim, type_arr el )
{
    int i, count = 0;
    for (i = 0; i < dim; i++)
    {
        if ( type_arrEquals(el,arr[i]) )
        {
            count++;
        }
    }
    return count;
}

int findMax( type_arr arr[], int dim )
{
    int i, posMax=0;
    
    for (i=1; i<dim; i++)
        if ( type_arrCompare(arr[posMax], arr[i]) < 0 ) posMax=i;
    return posMax;
}



int findMin( type_arr arr[], int dim )
{
    int i, posMax=0;
    
    for (i=1; i<dim; i++)
        if ( type_arrCompare(arr[posMax], arr[i]) > 0 ) posMax=i;
    return posMax;
}

//Confronto
boolean compareEquals(type_arr arr1[], int dim1, type_arr arr2[], int dim2)
{
    int i;
    boolean uguali = TRUE;
    
    if (dim1 != dim2) return FALSE;

    for (i = 0; i < dim1 && uguali == TRUE; i++)
    {
        if (!type_arrEquals(arr1[i],arr2[i]))
        {
            uguali = FALSE;
        }
    }
    return uguali;
}

boolean compareUnordered(type_arr arr1[], int dim1, type_arr arr2[], int dim2)
{
    boolean alreadyChecked[dim1];
    boolean uguali = TRUE;
    int i, j;
    
    if (dim1 != dim2) return FALSE;
    
    for (i = 0; i < dim1; i++)
        alreadyChecked[i] = FALSE;
    
    for(i = 0; i < dim1 && uguali; i++)
    {
        uguali = FALSE;
        
        for(j = 0; j < dim2 && !uguali; j++)
        {
            if(!alreadyChecked[j])
            {
                uguali = type_arrEquals(arr1[i], arr2[j]);
                if(uguali)
                {
                    alreadyChecked[j] = TRUE;
                }
            }
        }
    }
    
    return uguali;
}

//ORDINAMENTO
void naiveSort(int arr[], int dim)
{
    int p;
    while (dim>1) {
        p =  findMax(arr,dim);
        if (p < dim-1) type_arrSwap(&arr[p], &arr[dim-1]);
        dim--;
    }
}


void quickSort(int a[], int dim)
{
    quickSortR(a, 0, dim - 1);
}

void quickSortR(int a[], int iniz, int fine)
{
    int i, j, iPivot, pivot;
    
    if (iniz < fine)
    {
        i = iniz;
        j = fine;
        iPivot = fine;
        pivot = a[iPivot];
        do /* trova la posizione del pivot */
        {
            while (i < j && a[i] <= pivot) i++;
            while (j > i && a[j] >= pivot) j--;
            if (i < j) type_arrSwap(&a[i], &a[j]);
        }
        while (i < j);
        /* posiziona il pivot */
        if (i != iPivot && a[i] != a[iPivot])
        {
            type_arrSwap(&a[i], &a[iPivot]);
            iPivot = i;
        }
        /* ricorsione sulle sottoparti, se necessario */
        if (iniz < iPivot - 1)
            quickSortR(a, iniz, iPivot - 1);
        if (iPivot + 1 < fine)
            quickSortR(a, iPivot + 1, fine);
    }
}
