#include <stdio.h>
#include <math.h>
int main()
{
    int n, square;
    printf("Enter a number : ");
    scanf("%d", &n);

    square = pow(n, 2);

    printf("The square of %d is %d", n, square);

    return 0;
}