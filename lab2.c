#include <stdio.h>

int main()
{
    int a;
    printf("Enter a year:");
    scanf("%d", &a);
    if(a%4==0)
    {
        printf("The year is leap year");
    }
    else
    {
        printf("not a leap year");
    }
    getchar();
}
