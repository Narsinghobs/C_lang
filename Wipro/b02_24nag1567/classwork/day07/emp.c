#include <stdio.h>
#include <string.h>
#include "emp.h"

void display(EMP e)
{
    printf("\nEMployee Details are\n");
    printf("\nName: %s",e.empName);
    printf("\nID: %d",e.empId);
    printf("\nSalary: %d",e.empSal);

    printf("\n\n");
}

void getData(EMP *e)
{
    printf("\nEnter the details of Employee\n");
    printf("\nName: ");
    scanf("%s",e->empName);
    printf("\nID: ");
    scanf("%d",&e->empId);
    printf("\nSalary: ");
    scanf("%d",&e->empSal);
}


int findEmpName(EMP *e, int n, char *key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(e[i].empName, key)==0)
        {
            return i;
        }
    }

    return -1;
}


int findEmpID(EMP *e, int n, int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(e[i].empId == key)
        {
            return i;
        }
    }

    return -1;
}