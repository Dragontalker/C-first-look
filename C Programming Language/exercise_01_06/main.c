/*
    Exercise 1-6:
    Verify that the expression getchar() != EOF is 0 or 1.
*/

#include <stdio.h>

int main(void)
{
    int c;

    printf("Please enter any character: ");

    c = getchar() != EOF;

    printf("getchar() != EOF: %d\n", c);

    return 0;
}
