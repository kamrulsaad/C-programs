//3. Write a C program to calculate the sum of 1 1 ​ ​ + 2 2 ​ ​ + 3 3 ​ ​ +... + n n

#include<stdio.h>
#include<math.h>
void main()
{
    int n, i, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <=n; i++) {
       sum= sum+ pow(i,i);
    }
    printf("\nSummation of the series 1^1+2^2+3^3+...+n^n is : %d\n",sum);
}
