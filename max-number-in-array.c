#include <stdio.h>

int findMax(int array[], int length);
int main(void)
{
    int myArray[] = {8, 7, 5, 3, 9, 24, 12, 18, 27, 29, 31};
    int myArray2[] = {2, 5, 6, 3, 7, 15, 0};

    int max1 = findMax(myArray, 11);
    int max2 = findMax(myArray2, 7);

    printf("max1: %d\n", max1);
    printf("max2: %d\n", max2);

    return 0;
}

int findMax(int array[], int length)
{
    int max = array[0];

    for (int i = 1; i < length; i++)
    {
        printf("myArray[%d] = %d\n", i, array[i]);
        if (array[i] > max)
        {

            max = array[i];
            printf("New max found: %d\n", max);
        }
    }
    return max;
}
