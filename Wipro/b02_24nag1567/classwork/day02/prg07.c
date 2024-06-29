/*
Write a program to Count number of
ways to divide a number in 4 parts
Note: 0 is not considered

i/p:6
o/p:2

1+1+2+2
3+1+1+1

i/p:3
o/p:-1


*/

#include <stdio.h>

int main()
{
    int i, j, k, l;
    int n, count = 0;
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = j; k < n; k++)
            {
                for (l = k; l < n; l++)
                {
                    printf("\n%d+%d+%d+%d", i, j, k, l);

                    if ((i + j + k + l) == n)
                    {
                        // printf("\n%d+%d+%d+%d = %d", i, j, k, l, n);
                        count++;
                    }
                }
            }
        }
    }

    if (count > 0)
        printf("%d", count);
    else
        printf("-1");
    printf("\n\n");
    return 0;
}
