#include<stdio.h>

int main()

{
    int array[100], R, M, SMALL, LARGE;

    printf("\nENTER THE NUMBER OF ELEMENTS: ");
    scanf("%d", &M);
    printf("\nARRAY: ");

    for (R = 0; R < M; ++ R)
    scanf("%d", &array[R]);

    LARGE = SMALL = array[0];

    for (R = 1; R < M; ++ R)
    {
        if (array[R] < SMALL)
        
            SMALL = array[R];

        if (array[R] > LARGE)
        
            LARGE = array[R];
        

    }
    printf("\n-----------------------------------------");

    printf("\nLARGEST ELEMENT IN THE ARRAY: %d", LARGE);
    printf("\nSMALLEST ELEMENT IN THE ARRAY: %d", SMALL);

    printf("\n-----------------------------------------");

    return(0);

}