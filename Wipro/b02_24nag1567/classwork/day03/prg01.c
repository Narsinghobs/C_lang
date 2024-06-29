/*

1. scope of variables
2. storage classes

    a. auto, b. register. c. extern. d. static
*/

#include <stdio.h>

int addition(int, int);
int result = 0; // global variable
int main()
{
    int result = 10; // local variables
    {
        int result = 20;
        printf("\n\naddress of result = %u result = %d", &result, result);
    }
    printf("\n\naddress of result = %u result = %d", &result, result);
    result = addition(2, 3);
    printf("\n\naddress of result = %u result = %d", &result, result);
    addition(5, 6);
    printf("\n\naddress of result = %u result = %d", &result, result);

    printf("\n\n");
    return 0;
}

int addition(int v1, int v2)
{
    result = v1 + v2;
    printf("\naddress of result = %u value=%d", &result, result);

    return result;
}