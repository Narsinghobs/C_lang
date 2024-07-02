#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    printf("\nNo of args passed = %d",argc);
    /*
    printf("\nargv[0] = %s",argv[0]);
    printf("\nargv[1] = %s",argv[1]);
    */
    for(i=0;i<argc;i++)
        printf("\nargv[%d] = %s",i,argv[i]);
    
    printf("\n\n");
}