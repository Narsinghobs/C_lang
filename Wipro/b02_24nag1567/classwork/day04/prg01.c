/*

Array

decalartion

    dt arrayName[SIZE];

    float marks[10];

use the array:

    arrayName[indexValue]

    marks[0] = 101.1;
    marks[1] = 102.2;

Note: indexValue should be integers

Indexvalues will range from 0 to SIZE-1

i.e 0 - indexvalue is the first element of the array

and SIZE-1 indexvalue is the last element of the array

*/

/*
PSts: find the Eq. position 
Note: sum of elements before and after it should match
*/
#include <stdio.h>
#define CAP 20
int main()
{
    int arr[CAP];
    int n, i,j;
    int sumL=0, sumR=0;
    int ePos=0, flag = 0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        ePos = i;
        for(j=0, sumL=0;j<i;j++)//get sum of left elements
        {
            sumL += arr[j];
        }
        for(j=i+1, sumR=0;j<n;j++)//get sum of right elements
        {
            sumR += arr[j];
        }

        if(sumL == sumR)
        {
            flag = 1;
            break;
        }

    }

    if(flag == 1)
    {
        printf("\nEq Pos = %d",ePos);
    }
    else
        printf("-1");

    printf("\n\n");

    return 0;
}