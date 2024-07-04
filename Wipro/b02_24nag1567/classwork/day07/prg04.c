#include <stdio.h>

enum Week
{
    Monday = 'A',
    Tuesday,
    Wednesday,
    Thrusday,
    Friday,
    Saturday,
    Sunday
};


int main()
{
    enum Week day=Sunday;
    printf("\nDay = %d",day);

    printf("\n\n");
    return 0;
}