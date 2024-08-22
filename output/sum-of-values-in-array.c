#include <stdio.h>

int sum(int array[], int length);

int main(void)
{
    int a1[] = {1, 2, 6, 9, 8, 7, 6, 5};
    int a2[] = {100};
    int a3[] = {99, 99};
    int a4[] = {50, -50, 100, -100, 200, -200};

    printf("a1 sum: %d\n", sum(a1, 8));
    printf("a1 sum: %d\n", sum(a2, 1));
    printf("a1 sum: %d\n", sum(a3, 2));
    printf("a1 sum: %d\n", sum(a4, 6));

    return 0;
}

int sum(int array[], int length)
{
    int sumValue = 0;
    for (int i = 0; i < length; i++)
    {
        sumValue = sumValue + array[i];
    }

    return sumValue;
}

// Code Breakdown:
// Function Declaration:

// c
// Copy code
// int sum(int array[], int length);
// This line declares the sum function, which takes two parameters: an integer array (array[]) and its length (length).
// The function returns an integer, which will be the sum of the elements in the array.
// main() Function:

// c
// Copy code
// int main(void)
// The main function is the entry point of the program.
// Array Declarations:

// c
// Copy code
// int a1[] = {1, 2, 6, 9, 8, 7, 6, 5};
// int a2[] = {100};
// int a3[] = {99, 99};
// int a4[] = {50, -50, 100, -100, 200, -200};
// Four arrays a1, a2, a3, and a4 are declared and initialized with different sets of integer values.
// Calling the sum() Function:

// c
// Copy code
// printf("a1 sum: %d\n", sum(a1, 8));
// printf("a1 sum: %d\n", sum(a2, 1));
// printf("a1 sum: %d\n", sum(a3, 2));
// printf("a1 sum: %d\n", sum(a4, 6));
// The sum() function is called for each array with the array and its length as arguments.
// The results (sums of the arrays) are printed using printf.
// sum() Function Definition:

// c
// Copy code
// int sum(int array[], int length)
// This is the function that calculates the sum of the elements in the array.
// array[]: The array of integers.
// length: The number of elements in the array.
// Initializing the Sum:

// c
// Copy code
// int sumValue = 0;
// The variable sumValue is initialized to 0. This variable will hold the cumulative sum of the elements in the array.
// For Loop:

// c
// Copy code
// for (int i = 0; i < length; i++)
// {
//     sumValue = sumValue + array[i];
// }
// A for loop iterates through each element of the array.
// i starts at 0 and increments by 1 until it reaches length - 1.
// During each iteration, the current element array[i] is added to sumValue.
// Return Statement:

// c
// Copy code
// return sumValue;
// After the loop completes, the total sum of the array (sumValue) is returned.
// Example Execution for Each Array:
// Array a1[] = {1, 2, 6, 9, 8, 7, 6, 5}:

// The sum() function is called with a1 and length = 8.
// Initial sumValue = 0.
// Iterations:
// Iteration 1: i = 0, array[0] = 1, sumValue = 0 + 1 = 1
// Iteration 2: i = 1, array[1] = 2, sumValue = 1 + 2 = 3
// Iteration 3: i = 2, array[2] = 6, sumValue = 3 + 6 = 9
// Iteration 4: i = 3, array[3] = 9, sumValue = 9 + 9 = 18
// Iteration 5: i = 4, array[4] = 8, sumValue = 18 + 8 = 26
// Iteration 6: i = 5, array[5] = 7, sumValue = 26 + 7 = 33
// Iteration 7: i = 6, array[6] = 6, sumValue = 33 + 6 = 39
// Iteration 8: i = 7, array[7] = 5, sumValue = 39 + 5 = 44
// The function returns 44, and the output is "a1 sum: 44".
// Array a2[] = {100}:

// The sum() function is called with a2 and length = 1.
// Initial sumValue = 0.
// Iteration:
// Iteration 1: i = 0, array[0] = 100, sumValue = 0 + 100 = 100
// The function returns 100, and the output is "a1 sum: 100".
// Array a3[] = {99, 99}:

// The sum() function is called with a3 and length = 2.
// Initial sumValue = 0.
// Iterations:
// Iteration 1: i = 0, array[0] = 99, sumValue = 0 + 99 = 99
// Iteration 2: i = 1, array[1] = 99, sumValue = 99 + 99 = 198
// The function returns 198, and the output is "a1 sum: 198".
// Array a4[] = {50, -50, 100, -100, 200, -200}:

// The sum() function is called with a4 and length = 6.
// Initial sumValue = 0.
// Iterations:
// Iteration 1: i = 0, array[0] = 50, sumValue = 0 + 50 = 50
// Iteration 2: i = 1, array[1] = -50, sumValue = 50 + (-50) = 0
// Iteration 3: i = 2, array[2] = 100, sumValue = 0 + 100 = 100
// Iteration 4: i = 3, array[3] = -100, sumValue = 100 + (-100) = 0
// Iteration 5: i = 4, array[4] = 200, sumValue = 0 + 200 = 200
// Iteration 6: i = 5, array[5] = -200, sumValue = 200 + (-200) = 0
// The function returns 0, and the output is "a1 sum: 0".

// Summary:
// The sum() function iterates through each element of the given array, adding it to sumValue.
// After processing all elements, the final sum is returned.
// The main function prints the sum for each array.