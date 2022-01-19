#include <stdio.h>

int main()
{
    printf("Enter the marks of yours : \n");
    int P;
    printf("In Physics: ");
    scanf("%d",&P);
    int ch;
    printf("In Chemistry: ");
    scanf("%d",&ch);
    int b;
    printf("In Biology: ");
    scanf("%d",&b);
    int m;
    printf("In Mathematics: ");
    scanf("%d",&m);
    int c;
    printf("In Computer: ");
    scanf("%d",&c);
    int marks;
    marks= (c+P+b+ch+m)/5;
    printf("Grade Percentage: %d% \n",marks);
    if (marks>=90)
    {
        printf("A");
    }
    else if(marks>=80 && marks<90)
    {
        printf("B");
    }
    else if(marks>=70 && marks<80)
    {
        printf("C");
    }
    else if(marks>=40 && marks<60)
    {
        printf("D");
    }
    else if(marks<40)
    {
        printf("F");
    }
    else{
        printf("Invalid Input");
    }
    getchar();
}
