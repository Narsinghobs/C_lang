#include <stdio.h>


int main()
{
	char ch;
	long int i;
	float f;
	long double d;

	printf("\nSizeof %d",sizeof(ch));
	printf("\nSizeof %d",sizeof(i));
	printf("\nSizeof %d",sizeof(f));
	printf("\nSizeof %d",sizeof(d));

	printf("\n\n");
	printf("\n%d",printf("Hello"));

	return 0;	
}