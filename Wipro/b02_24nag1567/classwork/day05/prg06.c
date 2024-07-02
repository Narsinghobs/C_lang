#include <stdio.h>
#include <string.h>

int main()
{
    char *str1;
    char line[] = "This is a C Programming Class";
    char sStr[10] = "C";

    str1 = strstr(line,sStr);

    if(str1 == NULL)
        printf("\nString not found");
    else
        printf("\nStr1: %s",str1);

    printf("\n\n");
    return 0;

}