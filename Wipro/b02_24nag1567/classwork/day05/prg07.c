/*
int a=10; => mem rep => a is at location 65520 
co(65520)=>10
a is a name given to reprsent 65520 as address

Pointers:

dec:
    dt *ptrName;

    ptrName is a name of pointer which is pointing 
    towards dt as datatype

    int *ptr;

    Note: pointer does not belong to any datatype
          it belongsss to void => nothing
            void *ptr; => generic pointer

    reading: ptr is a sp variable which is pointing towards
            integer datatype




*/

#include <stdio.h>

int main()
{
    int a=10;
    float f;
    double d;
    char ch;
    int *ptr;
    float *fptr;
    double *dptr;
    char *cptr;

    printf("\nAddress of a= %u",&a);
    printf("\nValue %d is stored in %u address",a,&a);

    printf("\nAddress of ptr: %u", &ptr);
    printf("\nValue %u is stored in %u address",ptr,&ptr);

    ptr = &a;

    printf("\nValue %u is stored in %u address",ptr,&ptr);

    //dereferencing of pointers

    printf("\nValue stored at %u = %d",ptr, *ptr);

    *ptr = 20;

    printf("\nValue %d is stored in %u address",a,&a);


    printf("\nSize of a = %d",sizeof(a));
    printf("\nSize of f = %d",sizeof(f));
    printf("\nSize of d = %d",sizeof(d));
    printf("\nSize of ch = %d",sizeof(ch));
    printf("\nSize of ptr = %d", sizeof(ptr));
    printf("\nSize of fptr = %d", sizeof(fptr));
    printf("\nSize of dptr = %d", sizeof(dptr));
    printf("\nSize of cptr = %d", sizeof(cptr));

    printf("\n\n");
    return 0;
}