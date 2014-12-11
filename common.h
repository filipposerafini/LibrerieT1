#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "errors.h"

#ifndef COMMON_H
#define COMMON_H

#define FORMAT_TL "%d" //stringa di formato per type_list	
#define FORMAT_TA "%d" //stringa di formato per type_arr


typedef enum {FALSE, TRUE} boolean;
typedef int type_list; //sostituire int con il tipo voluto
typedef int type_arr; //sostituire int con il tipo voluto

int type_listCompare(type_list a, type_list b);

#endif