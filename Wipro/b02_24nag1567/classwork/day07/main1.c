#include <stdio.h>


struct Employee{
    char empName[20];
    int empId;
    int empSal;
    
};

typedef struct Employee EMP;

int main()
{
    EMP e,e1,e2;

    printf("\nEnter the details of Employee\n");
    printf("\nName: ");
    scanf("%s",e.empName);
    printf("\nID: ");
    scanf("%d",&e.empId);
    printf("\nSalary: ");
    scanf("%d",&e.empSal);
    
    printf("\nEMployee Details are\n");
    printf("\nName: %s",e.empName);
    printf("\nID: %d",e.empId);
    printf("\nSalary: %d",e.empSal);


    printf("\nEnter the details of Employee\n");
    printf("\nName: ");
    scanf("%s",e1.empName);
    printf("\nID: ");
    scanf("%d",&e1.empId);
    printf("\nSalary: ");
    scanf("%d",&e1.empSal);
    
    printf("\nEMployee Details are\n");
    printf("\nName: %s",e1.empName);
    printf("\nID: %d",e1.empId);
    printf("\nSalary: %d",e1.empSal);


    printf("\n\n");
    
    printf("\n\n");
    return 0;

}