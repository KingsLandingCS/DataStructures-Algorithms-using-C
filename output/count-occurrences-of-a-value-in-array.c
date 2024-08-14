#include <stdio.h>

int occurrences(int array[], int length, int toFind);
int main(void)
{
    int myArray1[] = {4, 9, 7, 6, 5, 8, 3, 2, 1, 5};
    int myArray2[] = {5, 23, 4, 53, 4, 8, 6, 6, 2, 4, 1, 5, 8, 6};
    int findArr1Five = occurrences(myArray1, 10, 5);
    int findArr2Zero = occurrences(myArray2, 14, 0);
    printf("# of 5s found in MyArray1: %d\n", findArr1Five);
    printf("# of 0s found in MyArray2: %d\n", findArr2Zero);

    return 0;
}

int occurrences(int array[], int length, int toFind)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        printf("myArray[%d] = %d\n", array[i], i);
        if (array[i] == toFind)
        {
            count++;
            printf("found %d incremented count to %d\n", toFind, count);
        }
    }
    return count;
}