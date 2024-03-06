#include <stdio.h>

int too()
{
    static int a = 0;
    int b = 0;
    printf("a = %d\nb = %d\n", a, b);
    a++;
    b++;
}

int main()
{
    int i = 0;
    while (i <= 5)
    {
        too();
        ++i;
    }
    return 0;
}