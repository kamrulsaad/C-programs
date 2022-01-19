#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c", &a);
    switch(a)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("The character is a vowel");
        break;
    default:
        printf("Consonant");
    }
    getchar();
}

