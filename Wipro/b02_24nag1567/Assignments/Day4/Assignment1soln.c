// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i,j,k,flag1=0,flag=0,count=0,num1,num2;
    scanf("%d",&n);
    for (i=2;i<=n/2;i++)
     { 
     flag=0;
     flag1=0;
    num1=i;
     num2=n-i;
    //  printf("%d %d\n",num1,num2);
     
     
     for(j=2;j<=num1/2;j++)
     {
         if(num1%j==0)
         { flag=1;
           break;
             
         }
     }
     for(k=2;k<=num2/2;k++)
     {   
         if(num2%k==0)
         {
             flag1=1;
             break;
         }
     }
     if(flag==0 && flag1==0)
     {
         count=count+1;
        //  printf("Numbers are prime:\n");
        //  printf("%d  %d \n", num1,num2);
     }
        
    }
    if(count==0)
    {
        printf("Noofways%d",-1);
    }
    else
    {
        printf("NoofWays: %d",count);
    }

    return 0;
}