#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i > 5)
            continue;
        printf("%d ", i);
    }
    printf("\ni=%d\n", i);

    return 0;
}