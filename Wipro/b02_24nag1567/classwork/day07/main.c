#include <stdio.h>
#include "emp.h"

int main()
{
    EMP e[10];
    char name[20];
    int id;
    int i, res=0;
    for(i=0;i<3;i++)
        getData(&e[i]);
    for(i=0;i<3;i++)
        display(e[i]);
    printf("\nEnter the name to be searched: ");
    scanf("%s",name);
    res = findEmpName(e,3,name);
    if( res >= 0){
        printf("\nFound\n");
        display(e[res]);
    }
    else
        printf("\nNot Found\n");

    printf("\nEnter the id to be searched: ");
    scanf("%d",&id);
    res = findEmpID(e,3,id);
    if( res >= 0){
        printf("\nFound\n");
        display(e[res]);
    }
    else
        printf("\nNot Found\n");
    printf("\n\n");
    return 0;

}