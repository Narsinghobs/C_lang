/*
nth number made up of 1,4,6,9
i/p: 6
o/p: 14

*/
// jk
#include <stdio.h>

int checkDigits(int);

int getDigits(int);



int main()
{
    int i,count=0;
    int n;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        if(getDigits(i) == 1)
        {
            count++;
            if(count == n)
                break;
        }
    }

    printf("\nnth Number for %d is %d",n,i);

    printf("\n\n");
    return 0;
}


int checkDigits(int v)
{
    if((v==1) || (v==4) || (v==6) || (v ==9))
        return 1;
    else
        return 0;
}

int getDigits(int num)
{
    int d;
    int flag=0;
    int count=0;
    while(num)
    {
        
        d = num % 10;
        count++;
        if(checkDigits(d) == 1)
            flag++;
        num = num/10;
    }

    if(flag == count)
        return 1;
    else
        return 0;
}