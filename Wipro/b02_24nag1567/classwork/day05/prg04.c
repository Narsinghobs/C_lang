#include <stdio.h>
#include <string.h>

int main()
{

    char s1[] = "abca";
    char s2[] = "ab1c";

    int val=0;

    val = strcmp(s1,s2);

    printf("\nRet Value: %d",val);
    printf("\n\n");

    return 0;
}