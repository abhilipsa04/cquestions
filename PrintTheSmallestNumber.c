#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);

    if (a < b)
    {
        printf("The smallest number is  %d ", a);
    }
    else if (b < a)
    {
        printf("The smallest number is %d ", b);
    }
    else
    {
        printf("Two numbers are equal");
    }
    return 0;
}