#include <stdio.h>



static int t = 1;

int main()
{
    if (t)
        printf("foo\n");
    else
        printf("but not foo\n");

    return 0;
}
