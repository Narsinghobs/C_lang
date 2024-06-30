#include <stdio.h>

int main() {
    int sumToFind,arr[100],i,j,sum,FlagToindicateNumberFound=0,SizeOfArray;
    scanf("%d",&SizeOfArray);
    for(i=0;i<SizeOfArray;i++)
    {
        scanf("%d",arr+i);
    }
    scanf("%d",&sumToFind);
    for (i=0;i<SizeOfArray;i++)
    {   sum=0;
        
        for(j=i;j<SizeOfArray;j++)
        {
            sum+=arr[j];
            if(sum==sumToFind)
            {
                printf("Sum Found Between Indexex %d & %d",i, j);
                FlagToindicateNumberFound=1;
                break;
            }
            
        }
        if(FlagToindicateNumberFound==1)
        {
            break;
        }
    }
    if(FlagToindicateNumberFound==0)
    {
        printf("No subarray found");
    }
    return 0;
}
