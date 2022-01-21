/*Write a C program that takes an integer input and finds all of its factors (using if-else and
For loop).*/

#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}

