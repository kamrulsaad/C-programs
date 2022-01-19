#include <stdio.h>

int main()
{
    int n;
    int evensum=0;
    int oddSum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2 == 0){
            evensum= evensum+i;
        }
        else{
            oddSum=oddSum+i;
        }
    }
    printf("The sum of even numbers is %d\n",evensum);
    printf("The sum of odd numbers is %d",oddSum);
    return 0;
}
