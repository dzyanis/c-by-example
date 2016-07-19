#include <stdio.h>
#include <stdlib.h>

// @url http://stackoverflow.com/questions/252780/why-should-we-typedef-a-struct-so-often-in-c
typedef struct Person {
    char name[255];
    int age;
}

int main(int argc, char * argv[])
{
    Person me = {
        name: "Dzysanis"
    }
    exit(EXIT_SUCCESS);
}
