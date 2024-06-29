/*
Desc: Calculate area of different shapes
Author: BT
DOC: 26-06-24
Version: 0.1v
*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.142

int main()
{
    float heigth, width, area;

    int ch;
    char *str1 = "Calculate";
    /* Menu to display */
    printf("\nPress,");
    printf("\n1. %s area of sqaure", str1);
    printf("\n2. %s area of rectangle", str1);
    printf("\n3. %s area of triangle", str1);
    printf("\n4. %s area of circle", str1);
    printf("\n0. Exit");
    printf("\nChoice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("\nCaculting are of Square\n");
        /* calculate*/
        printf("\nEnter the side: ");
        scanf("%f", &heigth);
        area = heigth * heigth;
        printf("\nArea of Square= %f", area);
        break;

    case 2:
        printf("\nCaculting are of Rectangle\n");
        /* calculate*/
        printf("\nEnter the height and width: ");
        scanf("%f%f", &heigth, &width);

        area = heigth * width;
        printf("\nArea of Rectangle= %f", area);
        break;

    case 3:
        printf("\nCaculting are of Triangle\n");
        /* calculate*/
        printf("\nEnter the base and height: ");
        scanf("%f%f", &width, &heigth);

        area = 0.5 * heigth * width;
        printf("\nArea of Triangle= %f", area);
        break;

    case 4:
        printf("\nCaculting are of Circle\n");
        /* calculate*/
        printf("\nEnter the radius: ");
        scanf("%f", &heigth);

        area = PI * heigth * heigth;
        printf("\nArea of Circle= %f", area);
        break;

    case 0:
        printf("\nExiting .....\n");
        exit(0);
        break;

    default:
        printf("\nEntered a wrong choice\n");
    }

    printf("\n\n");

    return 0;
}