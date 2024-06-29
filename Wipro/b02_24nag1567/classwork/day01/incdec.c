#include <stdio.h>

int main()
{

	int a=10;
	int b=++a; //a=11, b=11

	int c = ++b; //b=12, c=12
	b++; //b=13
	b = c--; //b=12, c=11,a=11  


	printf("\na=%d b = %d c= %d\n",--a,++b,--c); 
	//a=10, b=13, c=10

	return 0;
}

/*

13 11 10
9  13 10
11 12 11
10 12 10
11 13 11 


*/