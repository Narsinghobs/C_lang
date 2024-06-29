/*
Problem statement: Write the logic to print
star pattern or rectangle star pattern.
o/p
*****
*****
*****
*****
*****
*/
#include <stdio.h>

// global dec sec
int main()
{
    // local declare variables initially before using it
    int i, n, count;
    // executable st
    scanf("%d", &n);

    /*
    for (i = 0; i < (n * n); i++)
    {

        if (i % n == 0)
            printf("\n");
        printf("*");
    }
    */
    count = 1;
    while (count <= n)
    {
        printf("%d ", count);
        count *= 2;
    }
    printf("\n\n");
    count = 1;
    i = 10;
    for (;;)
    {
        if ((count > n) || (i > 100))
            break;
        printf("%d ", count);
        count *= 2;
        i *= 2;
    }
    printf("\ni=%d\n", i);
    printf("\n\n");
    return 0;
}