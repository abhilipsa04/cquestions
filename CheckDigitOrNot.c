#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
        printf("The given char is a digit");
    }
    else
    {
        printf("The given char is not a digit");
    }
    return 0;
}