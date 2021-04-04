#include <stdio.h>
#include <string.h>

int main()

{
    char string[100];
    int R, TOTALWORDS;

    TOTALWORDS = 1;

    printf("\n PLEASE ENTER A STRING: ");
    gets(string);

    for (R = 0; string[R] != '\0'; R++)
    {
        if (string[R] == ' ' || string[R] == '\n' || string[R] == '\t')
        {
            TOTALWORDS++;
        }
    }
    printf("\n--------------------------------------------------------------------");

    printf("\n TOTAL NUMBER OF WORDS IN THE STRING |%s| :  %d", string, TOTALWORDS);

    printf("\n--------------------------------------------------------------------");

    return (0);
}