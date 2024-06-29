#include<stdio.h>

int main()
{
    char Name[20] = "Bhimashankar Takalki";
    char Name1[20];

    scanf("%[^\n]s",Name1);
    printf("\nName: %s",Name);
    printf("\nName1: %s",Name1);

    printf("\n\n");
    return 0;
}