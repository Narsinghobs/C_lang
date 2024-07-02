#include <stdio.h>

int main()
{
    int a[20];
    int i, sum=0;
    int *ptr;
    float avg;


    for(sum=0,i=0, ptr = a;i<10;i++,ptr++){
        scanf("%d",ptr);
        sum += *ptr;
    }

    avg = (float)sum/10;

    for(i=0,ptr = a;i<10;i++, ptr++)
        printf(" %d",*ptr);
    printf("\nAvg = %f",avg);

    printf("\n\n");

    return 0;
    
}