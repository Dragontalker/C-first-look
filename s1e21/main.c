#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 'F';
    int f = 123;

    char *pa = &a;
    int *pf = &f;

    printf("a = %c\n", *pa);
    printf("f = %d\n", *pf);

    return 0;
}