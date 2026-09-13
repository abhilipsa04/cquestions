#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a char :");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("upper case char ");
    }
    else
    {
        printf("lower case char ");
    }
    return 0;
}