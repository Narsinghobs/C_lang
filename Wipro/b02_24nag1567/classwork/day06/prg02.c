//call by value type of function
//call by ref/pointer
#include <stdio.h>

//prototyping a function
void swapValues(int, int);
void swapRef(int *, int *);

//driver code
int main()
{
    int val1, val2;
    scanf("%d%d",&val1,&val2);

    printf("\nFunction swap by value");
    printf("\nBefore swapping values are\n");
    printf("\nval1= %d \t val2 = %d",val1,val2);
    
    printf("\nAfter swapping values are\n");
    //call the swap function 
    // call by value
    swapValues(val1,val2);
    printf("\nSwapped values in driver code\n");
    printf("\nval1= %d \t val2 = %d",val1,val2);

    printf("\n=====================================\n");
    printf("\nFunction swap by ref/pointer");
    printf("\nBefore swapping values are\n");
    printf("\nval1= %d \t val2 = %d",val1,val2);
    
    printf("\nAfter swapping values are\n");
    //call the swap function 
    // call by ref/ptr
    swapRef(&val1,&val2);
    printf("\nSwapped values in driver code\n");
    printf("\nval1= %d \t val2 = %d",val1,val2);


    printf("\n\n");
    return 0;
}


//defining a function
void swapValues(int v1, int v2)
{
    int t;
    t = v1;
    v1 = v2;
    v2 = t;
    printf("\nSwapped values withing the function\n");
    printf("\nval1= %d \t val2 = %d",v1,v2);
}


void swapRef(int *v1, int *v2)
{
    int t;
    t = *v1;
    *v1 = *v2;
    *v2 = t;
    printf("\nSwapped values withing the function\n");
    printf("\nval1= %d \t val2 = %d",*v1,*v2);
}
