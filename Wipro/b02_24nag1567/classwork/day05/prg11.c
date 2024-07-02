#include <stdio.h>
#include <stdlib.h>


int main()
{
    // int a[20];
    int i, sum=0;
    int *ptr, *temp;
    float avg;
    int noOfElem = 5;

    // ptr = a;
    ptr  = (int *) malloc(noOfElem *sizeof(int));
    temp = ptr;
    for(sum=0,i=0;i<noOfElem;i++,ptr++){
        scanf("%d",ptr);
        sum += *ptr;
    }

    avg = (float)sum/noOfElem;
    ptr = temp;
    for(i=0;i<noOfElem;i++, ptr++)
        printf(" %d",*ptr);
    printf("\nAvg = %f",avg);

    printf("\n\n");

    return 0;
    
}