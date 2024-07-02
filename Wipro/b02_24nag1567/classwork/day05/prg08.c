/*

thumb rulesss:

a.
    1. arr[] <=> *arr
    2. *arr <=> arr[]


b.
    &* => nullify each other,hence we got no sybols

    

*/


#include <stdio.h>

int main()
{
    char str1[] = "This is a C Programming Class";
    char *sPtr;
    sPtr = &str1[0];

    // scanf("%s",str1);
    printf("%s",str1);

    printf("\nstr 1 content using sptr\n%s",sPtr);

    printf("\n\n");

    return 0;
}