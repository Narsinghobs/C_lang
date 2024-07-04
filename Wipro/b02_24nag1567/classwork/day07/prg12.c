#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "emp.h"
#include "emp.c"

int main()
{
    int i, size=0;
    // EMP e[20];
    EMP *e = (EMP *)malloc(sizeof(EMP));
    char line[1024];
    char *tokens;
    FILE *fptr;
    int count=0;
    fptr = fopen("emp.data","r");
    if(fptr == NULL)
    {
        perror("fopen(): ");
        exit(0);
    }
    while(fgets(line,1024,fptr)){
        if(strlen(line) !=0){
            //printf("\n%s",line);
            if(strncmp(line,"[data_user",10)==0)
            {
                
                fgets(line,1024,fptr);
                // printf("\n%s",line);
                tokens = strstr(line,"=");
                tokens = strtok(tokens,"=");
                // printf("\n%s %d",tokens,__LINE__);
                e[count].empName = (char *)malloc(strlen(tokens)+1);
                strcpy(e[count].empName,tokens);
                e[count].empName[strlen(e[count].empName)-1]='\0';

                fgets(line,1024,fptr);
                // printf("\n%s",line);
                tokens = strstr(line,"=");
                tokens = strtok(tokens,"=");
                // printf("\n%s %d",tokens,__LINE__);
                e[count].empId = atoi(tokens);

                fgets(line,1024,fptr);
                // printf("\n%s",line);
                tokens = strstr(line,"=");
                tokens = strtok(tokens,"=");
                // printf("\n%s %d",tokens,__LINE__);
                e[count].empSal = atoi(tokens);
                
                count++;
                size = count;
                e = (EMP *)realloc(e,++size*sizeof(EMP));
            }
        }
    }
    
    
    printf("\nNo of users= %d",count);
    
    for(i=0;i<count;i++)
    {
        display(e[i]);
    }
    printf("\n\n");
    fclose(fptr);
    return 0;
}