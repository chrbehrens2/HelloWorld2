#include <stdio.h>
#include "lib.h"

int main(int argc, char *argv[])
{
    int result;
 
     printf("Hello World!");
    result = add2Integer(12,8);
    printf("result = %d", result);
    return 0;
}