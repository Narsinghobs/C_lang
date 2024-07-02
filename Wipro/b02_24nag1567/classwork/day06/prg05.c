/*
wild ptr, void ptr, null ptr, dangling ptr

int *ptr; => without initialzing it is wild ptr
void *ptr; generic ptr => it can point to any datatype
int *ptr=NULL; => initialized to NULL will be called as null ptr


*/
#include<stdio.h>
#include <stdlib.h>
#include "myHeader.h"

int main(int argc, char *argv[])
{
    int *arr=NULL;
    int i, SIZE, key, oldSIZE;
    int si=0, count;
    int res=0;
    SIZE = atoi(argv[1]);
    oldSIZE = SIZE;
    arr = (int *)malloc(SIZE*sizeof(int));
    si = 0;
    // getData(arr, SIZE, si);
    if(SIZE > (argc-2))
    {
        printf("\nPlease enter correct no of args\n");
        exit(0);
    }
    for(i=0, count=2;i<SIZE;i++)
    {
        arr[i] = atoi(argv[count++]);
    }
    display(arr, SIZE);
    // printf("\nEnter the value to be searched in the list\n");
    // scanf("%d",&key);
    key = atoi(argv[count]);
    
    res = searchValue(arr, SIZE, key);
    if(res >=0)
    {
        printf("\nValue is Present in the list\n");
        printf("\n%d Key is found at %d position",key,res);
    }
    else
    {
        printf("\n%d Key is not present in the list\n", key);
    }

    

    printf("\n\n");

    free(arr);
    return 0;
}