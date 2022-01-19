#include <stdio.h>

int main()
{
    int n=1;
    for(int j=1; j<=5;j++){
        for (int i =1;i<=5;i++)
        {
            printf("%d\t",n);
            n++;
            }
        printf("\n");
    }
    getchar();
}
