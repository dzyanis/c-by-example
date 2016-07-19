#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    char first_name[20] = "Dzyanis";
    printf("string '%s',\tsize %ld\n", first_name, sizeof(first_name));

    char second_name[20] = {'K', 'u', 'z', 'm', 'e', 'n', 'k', 'a', '\0'};
    printf("string '%s',\tsize %ld\n", second_name, sizeof(second_name));

    char city[] = "Minsk";
    printf("string '%s',\tsize %ld\n", city, sizeof(city));

    exit(EXIT_SUCCESS);
}