#include "shared.h"
#include <stdio.h>
#include <string.h>

int shared_lib_function(char* msg)
{
    printf("Hi! Im a shared lib that receives '%s' and returns '%d'\n", msg, strlen(msg));
    return strlen(msg);
}