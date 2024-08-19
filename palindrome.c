#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char string[]);
int main(void)
{
    char string1[] = "not a palindrome";
    char string2[] = "abccba";
    char string3[] = "abcdcba";

    if (isPalindrome(string1))
    {
        printf("%s\n - is a palindrome\n", string1);
    }

    else
    {
        printf("%s\n - is not a palindrome\n", string1);
    }

    printf("\n");

    if (isPalindrome(string2))
    {
        printf("%s\n - is a palindrome\n", string2);
    }

    else
    {
        printf("%s\n - is not a palindrome\n", string2);
    }

    printf("\n");

    if (isPalindrome(string3))
    {
        printf("%s\n - is a palindrome\n", string3);
    }

    else
    {
        printf("%s\n - is not a palindrome\n", string3);
    }
    printf("\n");

    return 0;
}

bool isPalindrome(char string[])
{
    int middle = strlen(string) / 2;
    int len = strlen(string); // strlen is a built function provided by C string.h library in c that calculates the length of a string
    for (int i = 0; i < middle; i++)
    {
        if (string[i] != string[len - i - 1]) // len - i - 1 is the index of the last character in the string
        {
            return false;
        }
    }
    return true;
}






// Algorithm Breakdown:
// 1. main() Function:
// The main() function initializes three strings and checks whether each one is a palindrome by calling the isPalindrome() function. It prints the result for each string.

// 2. isPalindrome() Function:
// The isPalindrome() function is where the actual palindrome check happens. Let's go through each part of the function and see how it works with a detailed iteration of one of the strings.

// Step-by-Step Explanation:
// Step 1: Calculating the Middle and Length of the String
// The function first calculates the middle of the string and its length.

// c
// Copy code
// int middle = strlen(string) / 2;
// int len = strlen(string);
// strlen(string) computes the number of characters in the string.
// middle = strlen(string) / 2 divides the length by 2 to get the index at which to stop comparing characters.
// len = strlen(string) stores the full length of the string for reference.
// Step 2: Iteration and Character Comparison
// The function then enters a loop to compare characters from the start and end of the string.

// c
// Copy code
// for (int i = 0; i < middle; i++)
// {
//     if (string[i] != string[len - i - 1])
//         return false;
// }
// i = 0 to i < middle: The loop runs from the start of the string (i = 0) to just before the middle (i < middle).
// string[i] != string[len - i - 1]: At each iteration, the character at position i (string[i]) is compared with the character at position len - i - 1 (the corresponding character from the end of the string).
// If any of these characters do not match, the function returns false, indicating the string is not a palindrome. If all characters match, the function returns true.

// Detailed Iteration Example:
// Let's walk through a detailed iteration using the string string2[] = "abccba":

// Initialization:

// c
// Copy code
// char string2[] = "abccba";
// len = strlen(string2) → len = 6
// middle = len / 2 → middle = 3
// The string has 6 characters, so the middle index is 3.

// Iteration 1: (i = 0)

// string[0] = 'a'
// string[len - 0 - 1] = string[5] = 'a'
// Comparison:

// 'a' == 'a' → Characters match.
// The loop continues.

// Iteration 2: (i = 1)

// string[1] = 'b'
// string[len - 1 - 1] = string[4] = 'b'
// Comparison:

// 'b' == 'b' → Characters match.
// The loop continues.

// Iteration 3: (i = 2)

// string[2] = 'c'
// string[len - 2 - 1] = string[3] = 'c'
// Comparison:

// 'c' == 'c' → Characters match.
// The loop completes since i has reached the middle.

// Conclusion:
// Since all corresponding characters matched during the iterations, the function returns true, indicating that string2 is a palindrome.

// Iterations for Other Strings:
// Let's also briefly check the iterations for the other strings:

// String 1: "not a palindrome"
// Length = 16, Middle = 8

// Iteration 1: n != e → Not a palindrome (returns false)
// String 3: "abcdcba"
// Length = 7, Middle = 3

// Iteration 1: a == a
// Iteration 2: b == b
// Iteration 3: c == c
// All characters match, so it is a palindrome.