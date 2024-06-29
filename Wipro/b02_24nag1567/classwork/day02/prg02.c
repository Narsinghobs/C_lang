#include <stdio.h>

#define PlateFull 10

int main()
{
    char taste;
    int count;
    count = 0;
    do
    {
        printf("\nEat the food");
        count++;
        printf("\nWhether taste is good (y/n): ");
        scanf(" ");
        scanf("%c", &taste);
        if (count >= PlateFull)
            printf("\nEmpty Plate");
    } while (taste == 'y' && count <= PlateFull);

    printf("\n\n");
    return 0;
}