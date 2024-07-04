#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXL 1024

union Employee{
    char empName[20];
    int empId;
    int empSal;
    
};

typedef union Employee EMP;


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
    EMP e1;
    // printf("\nSize of union = %d",sizeof(EMP)); 
    scanf("%s",e1.empName);
    scanf("%d",&e1.empId);
    printf("\n%s",e1.empName);
    printf("\n%d",e1.empId);
    printf("\n\n");
    return 0;

}