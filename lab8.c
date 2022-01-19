#include <stdio.h>

int main()

{
    printf("Enter Your Age :");
    int age;
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Congratualtions! You are eligible for casting your vote.");
    }
    else{
        printf("Grow up Bro");
    }
    getchar();
}

