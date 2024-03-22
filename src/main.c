#include <greetings.h>
#include <stdio.h>

#include "shared.h"
#include "static.h"

int main(int argc, char const* argv[])
{
    printf("Hello OSII 2024!\n");
    greetings();
    printf("Calling shared lib from main program. I get '%d'\n", shared_lib_function("Hello, OSII"));
    printf("Calling static lib from main program. I get '%d'\n", static_lib_function("Bye, OSII"));
    return 0;
}
