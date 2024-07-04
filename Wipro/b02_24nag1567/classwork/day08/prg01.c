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
    EMP e;
    FILE *fp;
    int res=0;
    
    fp = fopen("emp.data","a+");
    if(fp == NULL)
    {
        perror("fopen(): ");
        exit(0);
    }
    getData(&e);
    display(e);
    res = fwrite(&e,sizeof(EMP),1,fp);
    printf("\nres = %d", res);

    printf("\n\n");
    return 0;


}

