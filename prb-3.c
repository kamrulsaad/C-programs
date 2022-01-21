//2. Write a C program to calculate the sum of 2​ 2​ + 4 2 ​ ​ + 6​ 2​ +... + n 2

#include<stdio.h>
void main()
{
    int n, i, sum=0;
    printf("Enter an even integer: ");
    scanf("%d", &n);
    if( n%2!=0){
        printf("The input is invalid");
    }
    else{
        for (i = 2; i <=n; i++) {
            if(i%2==0){
                sum = sum + (i*i);
                }
            }
    printf("\nSummation of the series 2^2+4^2+6^2..+n^2 is : %d\n",sum);
    }
}
