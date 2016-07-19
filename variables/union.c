#include <stdio.h>
#include <stdlib.h>

// @url http://www.tutorialspoint.com/cprogramming/c_unions.htm
typedef union {
    int i;
    float f;
} Number;

int main(int argc, char * argv[])
{
    Number n;
    printf( "Memory size occupied by data : %ld\n", sizeof(n));

    exit(EXIT_SUCCESS);
}