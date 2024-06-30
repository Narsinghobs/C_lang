// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int sumToFind,arr[100],i,j,sum,FlagToindicateNumberFound=0,SizeOfArray,NumberOfelementgreaterThanInLeftOfIndex=0,NumberOfelementsmallerThanInRightOfIndex=0;
    scanf("%d",&SizeOfArray);
    for(i=0;i<SizeOfArray;i++)
    {
        scanf("%d",arr+i);
    }
    
    for (i=0;i<SizeOfArray;i++)
    {   NumberOfelementgreaterThanInLeftOfIndex=0;
        NumberOfelementsmallerThanInRightOfIndex=0;
        for (j=0;j<i;j++)
        { if (arr[j]>arr[i])
          {
              NumberOfelementgreaterThanInLeftOfIndex+=1;
          }
            
        }
        for(j=i+1;j<SizeOfArray;j++)
        { if (arr[j]<arr[i])
          {
              NumberOfelementsmallerThanInRightOfIndex+=1;
          }
            
        }
        if(NumberOfelementsmallerThanInRightOfIndex==0 && NumberOfelementgreaterThanInLeftOfIndex==0)
        {
            printf("%d",i);
            break;
        }
        
    }
    
    return 0;
}


