#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr = NULL;
    char line[1024];
    fptr = fopen("readme.txt", "r");
    if(fptr == NULL)
    {
        perror("fopen()");
        exit(0);
    }

    printf("\nFile opened successfully");
    fscanf(fptr,"%[^\n]s",line);
    printf("\nLine: %s",line);
    fclose(fptr);

    printf("\n\n");
    return 0;
}