// Nome:
// Cognome:
// Matricola:

#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "errors.h"

typedef enum { FALSE, TRUE } boolean;

int readField(char buffer[], char sep, FILE *f);

#endif
