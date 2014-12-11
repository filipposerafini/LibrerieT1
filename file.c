#include "file.h"

FILE* openFile(char* nomeFile, char* modo)
{
    FILE* fp;
    fp = fopen(nomeFile, modo);
    if (fp == NULL)
    {
        exitWithError(FOPEN_ERR);
    }
    return fp;
}

FILE* openFileRead(char* nomeFile)
{
    FILE* fp;
    fp = fopen(nomeFile, "r");
    if (fp == NULL)
    {
        exitWithError(FOPEN_R_ERR);
    }
    return fp;
}

FILE* openFileWrite(char* nomeFile)
{
    FILE* fp;
    fp = fopen(nomeFile, "w");
    if (fp == NULL)
    {
        exitWithError(FOPEN_W_ERR);
    }
    return fp;
}

//LETTURA
int readField(char buffer[], char sep, FILE *f)
{
    int i = 0;
    char ch = fgetc(f);
    while (ch != sep && ch != 10 && ch != EOF) {
        buffer[i] = ch;
        i++;
        ch = fgetc(f);
    }
    buffer[i] = '\0';
    return ch;
}
