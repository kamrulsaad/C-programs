#include <stdio.h>

int main()

{
    printf("Enter Co ordinates :");
    int x , y;
    scanf("%d %d",&x,&y);

    if(x>0 && y>0)
    {
        printf("First Quadrant");
    }
    else if(x<0 && y>0)
    {
        printf("Second Quadrant");
    }
    else if(x<0 && y<0)
    {
        printf("Third Quadrant");
    }
    else if(x>0 && y<0)
    {
        printf("fourth Quadrant");
    }
    else
    {
        printf("Invalid input");
    }



    getchar();
}


