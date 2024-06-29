#include <stdio.h>

int main()
{
	int i=10;
	char ch='D';
	double d=14.5;
	float f=16.35;


	printf("\nint = %d",i);
	printf("\nfloat = %f",f);
	printf("\nDouble = %lf",d);
	printf("\nchar = %c",ch);

	printf("\ni is at = %u",&i);
	printf("\nch is at = %u",&ch);
	printf("\nf is at = %u",&f);
	printf("\nd is at = %u",&d);

	printf("\nEnter the values: ");

	/*
	scanf("%d",&i);
	printf("\nint = %d",i);
	printf("\ni is at = %u",&i);
	*/

	scanf("%c %d %f %lf",&ch,&i,&f,&d);

	printf("\nint = %d",i);
	printf("\nfloat = %f",f);
	printf("\nDouble = %lf",d);
	printf("\nchar = %c",ch);

	printf("\n\n");
	return 0;
}