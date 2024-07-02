#include <stdio.h>

#include <string.h>

int main()
{

    char str1[20] = {'\0',};
    char str2[20] = "Shankar";
    char str3[20] = "Kumar";

    printf("\nBefore concat:");
    printf("\nstr1 : %s", str1);
    printf("\nstr2 : %s", str2);

    strcat(strcat(strcpy(str1, str2)," "),str3);
    
    // strcat(str1,str2);

    printf("\nAfter concat:");
    printf("\nstr1 : %s", str1);
    printf("\nstr2 : %s", str2);

    // str1 = "Shankar Kumar"
    
    // strcat(str1," ");
    // strcat(str1,str3);
    // strcat(strcat(str1," "),str3);
    
    // printf("\nstr1 : %s", str1);


    
    printf("\n\n");
    return 0;
}