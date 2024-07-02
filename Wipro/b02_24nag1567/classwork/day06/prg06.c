#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char empNames[10][30];
    int i, count;
    printf("\nargc=%d\n",argc);

    for(i=0,count=1;i<argc-1;i++)
        strcpy(empNames[i],argv[count++]);

    for(i=0;i<argc-1;i++)
        puts(empNames[i]);
    printf("\n\n");
    return 0;
}