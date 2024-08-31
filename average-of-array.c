#include <stdio.h>

int main(void)
{
    double arr1[] = {
        5.2,
        9.3,
        6.5,
        4.1,
        7.8};
    double sum = 0;
    double average = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr1[i];
        printf("arr1[%d]=%.2lf, sum=%.2lf\n", i, arr1[i], sum);
    }
    average = sum / 5;
    printf("average: %.2lf\n", average);
    return 0;
}