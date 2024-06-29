/*

1. scope of variables
2. storage classes

    a. auto, b. register. c. extern. d. static
*/

#include <stdio.h>

int addition(int, int);
// int result = 0; // global variable
extern int Cap;
int main()
{

    // printf("\n\nresult = %d", result);
    printf("\nResult = %d\n", addition(2, 3));
    printf("\nResult = %d\n", addition(5, 1));
    printf("\nCapacity = %d", Cap);
    printf("\n\n");
    return 0;
}

int addition(int v1, int v2)
{
    static int result = 0;
    result += (v1 + v2);
    // printf("\nAddress of Result=%u", &result);
    return result;
}