/*
__FILE__
__LINE__
__DATE__
__TIME__
__STDC__


*/

#include <stdio.h>


struct Employee{
    char empName[20];
    int empId;
    int empSal;
    
};

typedef struct Employee EMP;

int main()
{
    EMP e;

    printf("\nFILE Name: %s\n",__FILE__);
    printf("\nDate: %s\n",__DATE__);
    printf("\nTIME %s",__TIME__);
    printf("\nCompiler standard %d",__STDC__);
    printf("\nCompiler version %ld",__STDC_VERSION__);

    printf("\nEnter the details of Employee\n");
    printf("\nName: ");
    scanf("%s",e.empName);
    printf("\nID: ");
    scanf("%d",&e.empId);

    printf("\nSalary: ");
    scanf("%d",&e.empSal);
    printf("\nLINE No: %d\n",__LINE__);
    printf("\nEMployee Details are\n");
    printf("\nName: %s",e.empName);
    printf("\nID: %d",e.empId);
    printf("\nSalary: %d",e.empSal);


   

    printf("\n\n");
    
    printf("\n\n");
    return 0;

}