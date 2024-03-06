#include <stdio.h>

int main()
{
    int m;
    printf("Table which you want ");
    scanf("%d", &m);
    for (int i = 1; i <= 10; ++i)
    {
        printf("%d * %d = %d\n", m, i, m * i);
    }
    printf("\n");

    return 0;
}