#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "emp.h"
#include "emp.c"

int main()
{
    EMP e;
    char line[1024];
    char *tokens;
    FILE *fptr;
    fptr = fopen("emp.data","r");
    // fscanf(fptr,"%s %d %d",e.empName, &e.empId, &e.empSal);
    fgets(line,1024,fptr);
    
    printf("\n%s",line);

    tokens = strtok(line," ");
    strcpy(e.empName, tokens);
    tokens = strtok(NULL, " ");
    e.empId = atoi(tokens);
    tokens = strtok(NULL, " ");
    e.empSal = atoi(tokens);
     
    
    display(e);
    
    printf("\n\n");
    fclose(fptr);
    return 0;
}