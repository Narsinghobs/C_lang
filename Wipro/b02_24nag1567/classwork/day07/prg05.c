#include <stdio.h>


int main()
{
    #ifdef WINDOWS
        printf("\nOS is WINDOWS");
    #elif defined(LINUX)
        printf("\nOS is LINUX");
    #else
        printf("\nNo os defined");
    #endif
    printf("\n\n");
    return 0;
}

