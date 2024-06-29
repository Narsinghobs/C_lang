#include<stdio.h>

int main()
{
    char Name[20] = "Bhimashankar";
    char str1[20];
    int i, sPos, ePos, count=0;

    for(i=0;i<20;i++)
        printf("\n%c = %d",Name[i], Name[i]);
    
    for(i=0;i<20;i++){
        if(Name[i]=='a')
            Name[i] = 'Z';

    }

    for(i=0, sPos=5, ePos=8, count=0;i<sizeof(Name);i++)
    {
        if(i >= sPos)
        {
            if(ePos == i)
            {
                str1[count]=Name[i];
                count++;
                str1[count] = '\0';
                break;
            }
            str1[count] = Name[i];
            count++;
        }
    }

    printf("\n\n");

    for(i=0;i<sizeof(Name);i++)
        printf("%c ",Name[i]);
    
    printf("\nStr1: %s",str1);
    printf("\n\n");
    return 0;
}