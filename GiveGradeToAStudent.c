#include <stdio.h>
int main()
{
    int mark;
    printf("Enter mark :");
    scanf("%d", &mark);
    if (mark < 30)
    {
        printf("C");
    }
    else if (mark >= 30 && mark < 70)
    {
        printf("B");
    }
    else if (mark >= 70 && mark < 90)
    {
        printf("A");
    }
    else if (mark >= 90 && mark <= 100)
    {
        printf("A+");
    }
    else
    {
        printf("The mark is not valid");
    }
    return 0;
}