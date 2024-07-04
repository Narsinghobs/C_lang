#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *ptr;
};

typedef struct node NODE;


int main()
{
    
    NODE n1,n2,n3,n4,n5,n6; // creating nodes
    NODE *pm;
    /*

    printf("\nAddress of n1= %u",&n1);
    printf("\nAddress of n2= %u",&n2);
    printf("\nAddress of n3= %u",&n3);
    */

    //initialze nodes
    n1.val = 10;
    n1.ptr = NULL;

    n2.val = 20;
    n2.ptr = NULL;

    n3.val = 30;
    n3.ptr = NULL;

    //make a relationship
    n1.ptr = &n2;
    n2.ptr = &n3;

    //hence we created a Linked list
    /*
    printf("\nAddress of n1= %u \t n1.ptr = %u",&n1,n1.ptr);
    printf("\nAddress of n2= %u \t n2.ptr = %u",&n2, n2.ptr);
    printf("\nAddress of n3= %u \t n3.ptr = %u",&n3,n3.ptr);
    */

    //traving through the list to access the values

    /*
    pm = &n1; //pm is pointing to the base address of the list
    printf("\npm is now pointing to = %u ",pm);

    printf("\nn1 val = %d",n1.val);
    printf("\nn1 val = %d",pm->val);
    
    // pm = n1.ptr;
    pm = pm->ptr; //pm is representing n2
    printf("\npm is now pointing to = %u ",pm);
    printf("\nn2 val = %d",pm->val);
    
    // pm = n2.ptr;
    pm = pm->ptr;
    printf("\npm is now pointing to = %u ",pm);
    printf("\nn3 val = %d",pm->val);

    */
    pm = &n1;

    do{
        printf(" %d->",pm->val);
        pm = pm->ptr;
    }while(pm != NULL);
    printf("Null\n");

    n4.val = 40;
    n4.ptr = NULL;

    n1.ptr = &n4;
    n4.ptr = &n2;

    pm = &n1;

    do{
        printf(" %d->",pm->val);
        pm = pm->ptr;
    }while(pm != NULL);
    printf("Null\n");

    n5.val = 50;
    n5.ptr = NULL;

    n3.ptr = &n5;

    pm = &n1;

    do{
        printf(" %d->",pm->val);
        pm = pm->ptr;
    }while(pm != NULL);
    printf("Null\n");


    n6.val = 60;
    n6.ptr = NULL;

    n6.ptr = &n1;

    pm = &n6;
    do{
        printf(" %d->",pm->val);
        pm = pm->ptr;
    }while(pm != NULL);
    printf("Null\n");


    printf("\n\n");

    return 0;
    
}