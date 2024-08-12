#include <stdio.h>

int main(void)
{
    int myArray[] = {8, 7, 5, 3, 9, 24, 12, 18, 27, 29, 31};
    int max = myArray[0];

    for (int i = 0; i < 11; i++)
    {
        if (myArray[i] > max)
        {
            printf("myArray[%d] = %d\n", i, myArray[i]);
            max = myArray[i];
            printf("New max found: %d\n", max);
        }
    }
    printf("max: %d\n", max);

    return 0;
}