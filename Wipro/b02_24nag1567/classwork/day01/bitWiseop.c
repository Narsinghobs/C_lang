#include <stdio.h>

int main()
{

	int a=5;
	int b=a<<1;
	int c=a>>1;
	int d;
	int e;

	printf("\nb=%d\n",b);
	printf("\nc=%d\n",c);

	d = b&c;
	printf("\nd=%d\n",d);

	e = b|c;
	printf("\ne=%d\n",e);

	return 0;
}