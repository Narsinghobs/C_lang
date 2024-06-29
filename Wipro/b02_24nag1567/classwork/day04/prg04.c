#include <stdio.h>

int main()
{
    char Name[20];
    int i;
    printf("\nSize of Name: %d",sizeof(Name));

    for(i=0;i<sizeof(Name)-1;i++)
        scanf("%c",&Name[i]);
    Name[sizeof(Name)-1] = '\0';

    printf("\nName: %s",Name);

    for(i=0;i<20;i++)
        printf("\n%c = %d",Name[i],Name[i]);
    
    printf("\n\n");
    return 0;
}

