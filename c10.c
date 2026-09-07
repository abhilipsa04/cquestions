#include <stdio.h>

int main()
{
    int a = 8 ^ 8;
    printf("%d", a);
    // This is invalid //

    int x;
    int y = x;

    // This is valid //

    int x, y = x;
    // This is invalid //

    char star = "**";
    printf("%c", star);
    // This is invalid //
    return 0;
}