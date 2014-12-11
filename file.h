#ifndef FILE_H
#define FILE_H

#include "common.h"

FILE* openFile(char* nomeFile, char* modo);
FILE* openFileRead(char* nomeFile);
FILE* openFileWrite(char* nomeFile);

int readField(char buffer[], char sep, FILE *f);

#endif
