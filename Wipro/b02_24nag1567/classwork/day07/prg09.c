#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr = NULL;
    char line[1024] ="Bhima Shankar Takalki";
    char line1[1024];
    fptr = fopen("readme.txt", "a+");
    if(fptr == NULL)
    {
        perror("fopen()");
        exit(0);
    }

    printf("\nFile opened successfully");
    fprintf(fptr,"%s",line);
    printf("\nfptr is at %d position", ftell(fptr));
    fseek(fptr,0L,0);
    printf("\nfptr is at %d position", ftell(fptr));
    fscanf(fptr,"%s", line1);
    printf("\nLine: %s",line1);
    fclose(fptr);

    printf("\n\n");
    return 0;
}