#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int* pi = &num;
    printf("Value of pi = %p\n", pi);

    void* pv = pi;
    pi = (int*) pv;
    printf("value of pi = %p\n", pi);

    return EXIT_SUCCESS;
}
