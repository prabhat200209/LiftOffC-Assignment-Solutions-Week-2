#include <stdio.h>

int main()

{
    int NUMBER, REMINDER, SUM = 0;

    printf("\n ENTER A NUMBER: ");
    scanf("%d", &NUMBER);

    while (NUMBER > 0)
    {
        REMINDER = NUMBER % 10;
        SUM = SUM + REMINDER;
        NUMBER = NUMBER / 10;
    }

    printf("\n-----------------------------------------------");

    printf("\n SUM OF DIGITS OF THE GIVEN NUMBER: %d", SUM);

    printf("\n-----------------------------------------------");

    return (0);
}