#include <stdio.h>
int main()
{
    float width, length;
    printf("enter base & length :");
    scanf("%f %f", &width, &length);
    printf("the parimeter of rectangle is %.2f", 2 * (width + length));
    return 0;
}