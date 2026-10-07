#include <stdio.h>

void printNamaste();
void pritBonjour();
int main()
{
    char ch;
    printf("Enter 'i' if indian or print 'f' if french  : ");
    scanf("%c", &ch);

    if (ch == 'i')
    {
        printNamaste();
    }
    else if (ch == 'f')
    {
        pritBonjour();
    }
    else
    {
        printf("Another Country");
    }

    return 0;
}
void printNamaste()
{
    printf("Namaste");
}
void pritBonjour()
{
    printf("Bonjour");
}