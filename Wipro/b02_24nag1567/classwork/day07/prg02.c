#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXL 1024

struct Employee{
    char empName[20];
    int empId;
    int empSal;
    
};

typedef struct Employee EMP;


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

int main()
{
    EMP *e, *temp;
    int n, i;
    printf("\nEnter the no of employee: ");
    scanf("%d",&n);
    printf("\nSize of EMP = %d",sizeof(EMP));
    
    e = (EMP *)malloc(n*sizeof(EMP));
    temp = e;

    for(i=0;i<n;i++,e++)
        getData(e);
    e = temp;
    for(i=0;i<n;i++,e++)
        display(*e);

    printf("\n\n");
    return 0;

}