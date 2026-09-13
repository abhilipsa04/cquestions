#include <stdio.h>
int main()
{
    int mark;
    printf("Enter mark (1-100):");
    scanf("%d", &mark);
    if (mark >= 30)
    {
        printf("The student is pass ");
    }
    else if (mark < 30)
    {
        printf("The student is fail");
    }

    return 0;
}