#include <stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Enter three numbers :");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf("The average of three numbers is = %d", (sum / 3));
    return 0;
}