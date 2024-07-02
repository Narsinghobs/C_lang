#include <stdio.h>


int main()
{
    int i, count=0;
    char str1[] = "Hello";

    printf("\nSizeof = %d\n", sizeof(str1));
    i=0;
    count=0;
    while(str1[i]!='\0')
    {
        count++;
        i++;
    }

    printf("\nLenght of the string str1: %d",count);
    printf("\n\n");

    return 0;
}