#include <stdio.h>

int main()
{
    int p1, p2;
    printf("Enter a starting number range \n");
    scanf("%d", &p1);

    printf("Enter a ending number range \n");
    scanf("%d", &p2);

    for (int j = p1; j <= p2; j++)
    {

        for (int i = 2; i <= (j / 2) + 1; i++)
        {
            if (j % i == 0)
            {

                break;
            }

            if (i == (j / 2) + 1)
            {
                printf("\n %d", j);
            }
        }
    }
    return 0;
}