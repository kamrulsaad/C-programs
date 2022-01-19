
#include <stdio.h>

int main()

{
    int x,sum=0 ;
    printf("Numbers between 100 and 200 which are divisible by 9 are :\n");
    for(x=100;x<=200;x++)
    {
        if(x%9==0)
        {
            printf("%d ",x);
            sum+=x;
        }
    }
    printf("\nthe total Summation is %d",sum);

    getchar();
}

