#include "static.h"
#include <stdio.h>
#include <string.h>

int static_lib_function(char* msg)
{
    printf("Hi! Im a static lib that receives '%s' and returns '%d'\n", msg, strlen(msg));
    return strlen(msg);
}
