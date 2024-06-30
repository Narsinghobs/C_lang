// Online C compiler to run C program online
#include <stdio.h>

int main() {
    long int n;
    scanf("%ld",&n);
    if(n==0)
    {
        printf("%ld",n);
    }
    // Reverse a Number
    while(n!=0)
    {
        printf("%ld",n%10);
        n=n/10;
    }
  

    return 0;
}