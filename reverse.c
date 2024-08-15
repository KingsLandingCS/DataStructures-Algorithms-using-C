#include <stdio.h>

void reverse(int array[], int length);

int main(void)
{
    int myArray1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int myArray2[] = {6, 5, 4, 3, 2, 1};
    reverse(myArray1, 9);
    reverse(myArray2, 6);

    for (int i = 0; i < 9; i++)
    {
        printf("myArray1[%d] = %d\n", i, myArray1[i]);
    }

    printf("\n");

    for (int i = 0; i < 6; i++)
    {
        printf("myArray2[%d] = %d\n", i, myArray2[i]);
    }

    return 0;
}

void reverse(int array[], int length)
{
    int temp = 0;
    for (int i = 0; i < length / 2; i++)
    {
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
}

// Code Breakdown
// Array Initialization:

// c
// Copy code
// int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// int length = 9;

// An array myArray is declared and initialized with the values {1, 2, 3, 4, 5, 6, 7, 8, 9}.
// The variable length is set to 9, which is the number of elements in the array.

// Reversing the Array:
// c
// Copy code
// int temp = 0;
// for (int i = 0; i < length / 2; i++)
// {
//     temp = myArray[i];
//     myArray[i] = myArray[length - i - 1];
//     myArray[length - i - 1] = temp;
// }

// temp is a temporary variable used for swapping elements.
// The for loop runs from i = 0 to i = length / 2 - 1. Here, length / 2 is 9 / 2, which is 4 (integer division in C). The loop runs 4 times (i = 0 to i = 3).
// Why length / 2 = 4?

// In C, dividing two integers results in integer division. So, 9 / 2 equals 4, not 4.5. The loop will run length / 2 = 4 times to swap the first half with the second half.
// Detailed Iterations
// Let's analyze each iteration of the loop:

// Iteration 1: i = 0
// Calculate: myArray[length - i - 1] = myArray[9 - 0 - 1] = myArray[8]
// Swap: temp = myArray[0] = 1
// myArray[0] = myArray[8] = 9
// myArray[8] = temp = 1
// Array after Iteration 1: {9, 2, 3, 4, 5, 6, 7, 8, 1}

// Iteration 2: i = 1
// Calculate: myArray[length - i - 1] = myArray[9 - 1 - 1] = myArray[7]
// Swap: temp = myArray[1] = 2
// myArray[1] = myArray[7] = 8
// myArray[7] = temp = 2
// Array after Iteration 2: {9, 8, 3, 4, 5, 6, 7, 2, 1}

// Iteration 3: i = 2
// Calculate: myArray[length - i - 1] = myArray[9 - 2 - 1] = myArray[6]
// Swap: temp = myArray[2] = 3
// myArray[2] = myArray[6] = 7
// myArray[6] = temp = 3
// Array after Iteration 3: {9, 8, 7, 4, 5, 6, 3, 2, 1}

// Iteration 4: i = 3
// Calculate: myArray[length - i - 1] = myArray[9 - 3 - 1] = myArray[5]
// Swap: temp = myArray[3] = 4
// myArray[3] = myArray[5] = 6
// myArray[5] = temp = 4
// Array after Iteration 4: {9, 8, 7, 6, 5, 4, 3, 2, 1}

// Final State
// After all iterations, the array has been reversed:

// Final array: {9, 8, 7, 6, 5, 4, 3, 2, 1}
// Printing the Reversed Array
// Finally, the second for loop prints out each element in the reversed array:

// c
// Copy code
// for (int i = 0; i < length; i++)
//     printf("myArray[%d] = %d\n", i, myArray[i]);
// This will output:

// css
// Copy code
// myArray[0] = 9
// myArray[1] = 8
// myArray[2] = 7
// myArray[3] = 6
// myArray[4] = 5
// myArray[5] = 4
// myArray[6] = 3
// myArray[7] = 2
// myArray[8] = 1

// Summary
// The loop runs length / 2 = 4 times to swap elements from the start and end of the array.
// In each iteration, the expression myArray[length - i - 1] calculates the position of the corresponding element from the end of the array.
// The array is reversed after the loop completes.