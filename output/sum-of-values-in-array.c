#include <stdio.h>

int main(void)
{
    int myArray[] = {1, 2, 6, 9, 8, 7, 6, 5};
    int sum = 0;

    for (int i = 0; i < 8; i++)
    {
        sum = sum + myArray[i];
        printf("myArray[%d] = %d\n", i, myArray[i]);
        printf("sum so far: %d\n", sum);
    }

    printf("Sum of array: %d\n", sum);

    return 0;
}