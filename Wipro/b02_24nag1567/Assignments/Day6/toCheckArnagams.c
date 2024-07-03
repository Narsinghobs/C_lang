// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void sort_strings(char *string)
{ int i,j,strLen;
  char temp;
    
    strLen=strlen(string);
    for(i=0;i<strLen-1;i++)
    {
        for(j=i+1;j<strLen;j++)
        { if(string[i]>string[j])
          {
              temp=string[i];
              string[i]=string[j];
              string[j]=temp;
          }
            
        }
    }
    
}
void tolowerString(char*string)
{  int i,strLen;
   strLen=strlen(string);
    for(i=0;i<strLen;i++)
    {
        if(isupper(string[i]))
        {
            string[i]=tolower(string[i]);
        }
    }
    
}
int check_anagram(char*string1,char*string2)
{   int i;
    if(strlen(string1)!=strlen(string2))
    return 0;
    for(i=0;i<strlen(string1);i++)
    {
        if(string1[i]!=string2[i])
        {
            return 0;
        }
    }
    return 1;
}
int main() {
    // Write C code here
    //printf("Try programiz.pro");
    char*string1,*string2;
    int string1Size,string2Size;
    scanf("%d\n",&string1Size);
    string1=(char*)malloc(string1Size*sizeof(char));
    fflush(stdin);
    gets(string1);
    // scanf("%d",&string2Size)
    // char s[]="Narsingh";
    // nar=s;
    tolowerString(string1);
    sort_strings(string1);
    scanf("%d\n",&string2Size);
    string2=(char*)malloc(string2Size*sizeof(char));
    fflush(stdin);
    gets(string2);
    tolowerString(string2);
    sort_strings(string2);
    if(check_anagram(string1,string2))
    {
        printf("Anagrams");
    }
    else
    {
        printf("Not Arnagrams");
    }
    
    
    return 0;
}