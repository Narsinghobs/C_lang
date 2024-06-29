#include <stdio.h>
#include <string.h>

int main()
{

	char ch;
	ch = getchar();
	// scanf("%s",ch);
	
	switch(ch)
	{
		case 'a':
				printf("\nYou have entered a character\n");
				break;
		case 'b':
				printf("\nYou have entered b character\n");
				break;
		case 'c':
				printf("\nYou have entered c character\n");
				break;
		default:
				printf("\nNone of the cases matched\n");
				break;
	}

	
	/*
	if(strcmp(ch,"abc1")==0)
	{
		printf("\nabc1");
	}
	else if(strcmp(ch,"abc2")==0)
	{
		printf("\nabc2");
	}
	else if(strcmp(ch,"abc3")==0)
	{
		printf("\nabc3");
	}
	else if(strcmp(ch,"abc4")==0)
	{
		printf("\nabc4");
	}
	else
	{
		printf("\nNone of the cases matched\n");
	}

*/

	printf("\nEnd of the Program\n");

	return 0;
}