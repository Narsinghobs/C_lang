#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXL 1024
struct Employee{
    char *empName;
    int empId;
    int empSal;
    
};

typedef struct Employee EMP;


int main()
{
    EMP e;
    char str1[MAXL];
    fgets(str1,MAXL,stdin);
    str1[strlen(str1)-1] = '\0';
    
    e.empName = (char *)malloc(strlen(str1)+1);
    strcpy(e.empName,str1);
    // scanf("%s",e.empName);
    scanf("%d",&e.empId);
    scanf("%d",&e.empSal);

    printf("\nName: %s",e.empName);
    printf("\nID: %d",e.empId);
    printf("\nSalary: %d",e.empSal);

    printf("\n\n");
    return 0;

}