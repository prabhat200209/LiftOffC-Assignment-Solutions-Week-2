#include <stdio.h>

    int main()
{
    int arr[7] = {14, 49, 16, 5, 12, 21, 63};
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    printf("\n--------------");
    printf("\nsum = %d", sum);
    printf("\n--------------");

    return (0);
    
}