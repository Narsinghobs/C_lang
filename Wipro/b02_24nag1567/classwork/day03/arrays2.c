#include <stdio.h>
#define CAP 10

int main()
{
    int arr[CAP], i, sum=0, t;
    float avg=0.0;
    printf("\nEnter the elements of the array\n");
    for(i=0;i<CAP;i++)
        scanf("%d",&arr[i]);
    
    /*
    for(i=0;i<CAP;i++){
        arr[i] *=2;
        sum +=arr[i];
    }
    */
    for(i=0;i<CAP/2;i++)
    {
        t = arr[i];
        arr[i] = arr[CAP-1-i];
        arr[CAP-1-i]=t;
    }
    /*
    i=0
    arr[0] 5, arr[4] = 1
    i=1
    arr[1]=4, arr[3] = 2
    i=2
    t = arr[2] =3
    arr[2] = 3;
    arr[2]=t=3
    i=3
    t = arr[3]=2
    arr[3] =  4
    arr[1] = 2

    arr[0]5
    arr[1]=2
    arr[2]=3
    arr[3]=4
    arr[4]=1
    */
    printf("\nElement of the array are\n");
    for(i=0;i<CAP;i++)
        printf("%d ",arr[i]);
    // avg = (float)sum/CAP;
    // printf("\nAvg: = %f",avg);    

    printf("\n\n");

    return 0;
}