#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);

    if (n >= 1)
    {
        printf("Natural number");
    }
    else
    {
        printf("not natural number");
    }
    return 0;
}