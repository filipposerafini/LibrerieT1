// Nome:
// Cognome:
// Matricola:

#include <stdio.h>
#include <stdlib.h>
#include "errors.h"

char* errorMessages[] =
{
    "",
    "Errore nell'allocazione di memoria\n",
    "Errore nell'apertura del file in scrittura\n",
    "Errore nell'apertura del file in lettura\n",
    "Tentativo di accesso a una lista vuota\n",
};

int handleError(int err)
{
    printf("Errore #%d: %s", err, errorMessages[err]);
    return err;
}

void exitWithError(int err)
{
	handleError(err);
	exit(err);
}
