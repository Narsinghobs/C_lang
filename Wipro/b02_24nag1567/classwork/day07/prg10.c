#include <stdio.h>
#include "emp.h"
#include "emp.c"

int main()
{
    EMP e;
    FILE *fptr;
    fptr = fopen("emp.data","a+");
    getData(&e);
    fprintf(fptr,"%s %d %d\n",e.empName, e.empId, e.empSal);



    printf("\n\n");
    fclose(fptr);
    return 0;
}