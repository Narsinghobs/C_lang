/*
dangling ptr situation is handled using static 
*/
#include <stdio.h>

int *dangFunc(int);
// int result=5;
int main()
{
    int *ptr=NULL;
    ptr = dangFunc(10);
    printf("\nresult = %d", *ptr);

    printf("\n\n");
    return 0;
}

int *dangFunc(int n)
{
    static int result=5;
    result *= n;

    return &result;
}