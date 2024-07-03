#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int digitSum(char numberinstring)
{ 
    return numberinstring-'0'; 
}
int main() {
   int i,sum=0,num;
   char str[]="AM1234MHL";
   for(i=0;str[i]!='\0';i++)
   { 
       if(isdigit(str[i]))
       { 
         
          sum+=digitSum(str[i]);
       }

   }
   printf("%d",sum);
   return 0;
}