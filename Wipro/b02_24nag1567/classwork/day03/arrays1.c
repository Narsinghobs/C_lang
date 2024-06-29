#include <stdio.h>
#define CAP 5

int main()
{
    int arr[50] = {11,21,31,41,15,40,24,19,67,87};
    char aChars[20] = "bhima";
    char aChars1[] = "Hello World!";
    char aChar2[] = {'B','h','i','m','a','\0'};

    int arr1[CAP];
    int noElement=0;
    int i;

    arr1[0] = 101;
    arr1[1] = 102;
    arr1[2] = 103;
    arr1[3] = 104;
    arr1[4] = 105;

    printf("\narr[2] = %d",arr[2]);


    printf("\nSize of the array in bytes: %d",sizeof(arr));
    noElement = sizeof(arr)/sizeof(arr[0]);
    printf("\nNo of elements : %d",noElement);
    noElement = sizeof(aChars1)/sizeof(aChars1[0]);
    printf("\nNo of elements : %d",noElement);

    printf("\n");
    for(i=0;i<CAP;i++)
        printf("\nAddress=%u\tvalue=%d ",&arr1[i],arr1[i]);
    

    printf("\n\n");

    return 0;
}