/*

str1 = "This is C Progrmming Class"

*/
#include <stdio.h>
#include <string.h>

char *revStr(char *s)
{
    int i;
    int l = strlen(s);
    int mid = l/2;
    char temp;

    for(i=0;i<mid;i++)
    {
        temp = s[i];
        s[i] = s[l-1-i];
        s[l-1-i] = temp;
    }
}

int main()
{
    char line[] = "This is a C Programming Class";
    char words[20][30];
    char *tokens;
    int count = 0,i;
    /*
    tokens = strtok(line, " ");
    printf("\nwords = %s", tokens);
    strcpy(words[count],tokens);
    printf("\n%d word = %s", count, words[count]);
    count++;


    tokens = strtok(NULL, " ");
    printf("\nwords = %s", tokens);
    strcpy(words[count],tokens);
    printf("\n%d word = %s", count, words[count]);
    count++;

    tokens = strtok(NULL, " ");
    printf("\nwords = %s", tokens);
    strcpy(words[count],tokens);
    printf("\n%d word = %s", count, words[count]);
    count++;

    tokens = strtok(NULL, " ");
    printf("\nwords = %s", tokens);
    strcpy(words[count],tokens);
    printf("\n%d word = %s", count, words[count]);
    count++;

    tokens = strtok(NULL, " ");
    printf("\nwords = %s", tokens);
    strcpy(words[count],tokens);
    printf("\n%d word = %s", count, words[count]);
    count++;

    tokens = strtok(NULL, " ");
    printf("\nwords = %s", tokens);
    strcpy(words[count],tokens);
    printf("\n%d word = %s", count, words[count]);
    count++;

    tokens = strtok(NULL, " ");
    if(tokens != NULL){
        printf("\nwords = %s", tokens);
        strcpy(words[count],tokens);
        printf("\n%d word = %s", count, words[count]);
        count++;
    }


    */

   tokens = strtok(line, " ");

   do
   {
    // printf("\nwords = %s", tokens);
    strcpy(words[count],tokens);
    // printf("\n%d word = %s", count, words[count]);
    tokens = strtok(NULL, " ");
    count++;
    
   } while (tokens != NULL);
   
   printf("\nNo of words Present: %d", count);

   for(i=0;i<count;i++)
    printf("\n%s",words[i]);

    for(i=0;i<count;i++)
        revStr(words[i]);
    printf("\nAfter reversing each words\n");
    for(i=0;i<count-1;i++){
        
            printf("%s ",words[i]);
        
    }
    printf("%s", words[i]);

    printf("\n\n");
    return 0;
}