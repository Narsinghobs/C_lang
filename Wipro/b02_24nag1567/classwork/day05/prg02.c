#include <stdio.h>
#include <string.h>

int initChars(char *s, int CAP)
{
    int i;
    printf("\nSizeof s: %d",CAP);
    for(i=0;i<CAP;i++)
        s[i] = '\0';
}

int main()
{
    char str1[20];
    char str2[20];
    
    int length=0;

    initChars(str2, sizeof(str2));
    initChars(str1, sizeof(str1));
    
    scanf("%[^\n]s",str1);

    printf("\nstr2: %s",str2);
    length = strlen(str1);

    printf("\nLength = %d\n",length);
    strcpy(str2,str1);
    printf("\nStr2 contents: %s",str2);

    initChars(str2,sizeof(str2));

    /*scanf("%s",str2);

    strcat(str1,str2);
    printf("\nstr1 : %s", str1);
    printf("\nstr2: %s", str2);
    */
    printf("\n\n");
    return 0;
}