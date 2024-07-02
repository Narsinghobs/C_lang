#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a=10;
    int *ptr;
    int *temp;
    // ptr = &a;
    //ptr = address
    ptr = (int *)malloc(sizeof(int));
    temp = ptr;

    printf("\nptr's address = %u",&ptr);
    printf("\ntemp's address = %u",&temp);
    printf("\nAddress pointed/assigned to ptr = %u",ptr);
    *ptr = 101;
    printf("\nValue %d is stored at %u address", *ptr, ptr);
    printf("\nValue %d is stored at %u address", *temp, temp);

    printf("\n%d %d",*ptr,a);
    printf("\n\n");

    return 0;
}