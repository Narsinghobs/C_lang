#include<stdio.h>
#define ROW 3
#define COL 30


int main()
{
    char empNames[ROW][COL];
    int r,c;

    for(r=0;r<ROW;r++)
    {
        scanf("%s",empNames[r]);
    }

    for(r=0;r<ROW;r++)
    {
        for(c=0;c<COL;c++)
        {
            if(empNames[r][c] == 'b')
            {
                empNames[r][c] = 'D';
            }
        }
    }

    printf("\nEmployee Names are\n");
    for(r=0;r<ROW;r++)
        printf("\nEmployee: %d \tName : %s",(r+1),empNames[r]);

    printf("\n\n");
    return 0;

}