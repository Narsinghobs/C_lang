#include <stdio.h> //link sec
#include <calc.h>
#define PI 3.142 //defination sec

float pi=3.142 //global dec

float div(int,int); //global declaration sec //prototyping function


int main() // main function/driver code
{
	int a=10; //local dec sec
	float res=0.0;
	printf("addition = %d\n",add(2,3)); //exec sts
	printf("\nSub = %d\n",sub(5,2));
	res = div(5,3);
	return 0;
}

float div(int v1, int v2) //sub programs/function definations
{
	return (v1/v2);
}
