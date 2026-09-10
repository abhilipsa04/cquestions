#include <stdio.h>
int main()
{
    float width, length;
    printf("enter width & length :");
    scanf("%f %f", &width, &length);
    printf("the perimeter of rectangle is %.2f", 2 * (width + length));
    return 0;
}