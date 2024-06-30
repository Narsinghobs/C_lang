// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,count=0,i,j,k,flag=0,temp,rem,numOftestcases;
    scanf("%d",&numOftestcases);
    for (k=0;k<numOftestcases;k++)
    {
        
        scanf("%d",&n);
    // n=27;
    // temp=n;
    for(j=2;count<n;j++)
    {   flag=0;
        temp=j;
        while(temp!=0)
    {    rem=temp%10;
        if(rem==0 || rem==1)
        {
            flag=1;
        }
        for(i=2;i<=rem/2;i++)
        {
            if(rem%i==0)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            break;
        }
        // printf("%d",flag);
        // printf("%d",rem);
        
        
        
        temp=temp/10;
        
    }
    if(flag==0)
    {  count=count+1;
        printf("%d\n",j);
    }
    }
    }
    return 0;
}