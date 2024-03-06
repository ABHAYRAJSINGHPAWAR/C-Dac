#include <stdio.h>

int main()
{
    int p;
    printf("Enter a number \n");
    scanf("%d", &p);

    for (int i = 2; i <= (p / 2) + 1; i++)
    {
        if (p % i == 0)
        {
            printf("\n %d Number is not Prime ", p);
            break;
        }

        if (i == (p / 2) + 1)
        {
            printf("\n %d Number is Prime ", p);
        }
    }

    return 0;
}