#include <stdio.h>

#define PlateFull 10

int main()
{
    char taste = 'y';
    int count;
    count = 9;
    while (taste == 'y' && count < PlateFull)
    {
        printf("\nEat the food");
        count++;
        printf("\nWhether taste is good (y/n): ");
        scanf(" ");
        scanf("%c", &taste);
        if (count >= PlateFull)
            printf("\nEmpty Plate");
    }

    printf("\n\n");
    return 0;
}