#include <stdio.h>

int main()

{
    int i=1;
    while(i<=10)
    {
        if(i==6)
        {
            break;
        }
        printf("\t%d\n",i);
        i++;
    }
    getchar();
}

