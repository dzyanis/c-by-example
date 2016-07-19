#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(int argc, char * argv[])
{
    int i = 2147483647;
    printf("integer: %d,\tsize: %ld\n", i, sizeof(i));
    i++;
    printf("integer: %d,\tsize: %ld\n", i, sizeof(i));

    long int li = 2147483647;
    printf("integer: %ld,\tsize: %ld\n", li, sizeof(li));
    li++;
    printf("integer: %ld,\tsize: %ld\n", li, sizeof(li));

    float f = 3.14;
    printf("float %f,\tsize: %ld\n", f, sizeof(f));

    double d = 3.14;
    printf("double %f,\tsize: %ld\n", d, sizeof(d));

    bool b = true;
    printf("bool %f,\tsize: %ld\n", d, sizeof(d));

    char ch = 'c';
    printf("char %c (int %d),\tsize: %ld\n", ch, ch, sizeof(ch));
}
