#include <stdio.h>

int main()
{

    int ft, sc, ch;

    while (1 == 1)
    {
        printf("\n Enter Two number \n");
        scanf("%d%d", &ft, &sc);
        printf("** Calculator ** \n 1.Addition (+) \n 2.Subtraction (-) \n 3.Multiplicationv(X) \n 4.Division(/) \n 5.Modulus \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Addition of %d and %d is %d \n", ft, sc, ft + sc);
            break;

        case 2:
            printf("Subtraction of %d and %d is %d \n", ft, sc, ft - sc);
            break;

        case 3:
            printf("Multipication of %d and %d is %d \n", ft, sc, ft * sc);
            break;

        case 4:
            printf("Division of %d and %d is %lf \n", ft, sc, ft / sc);
            break;

        case 5:
            printf("Modulus of %d and %d is %d \n", ft, sc, ft % sc);
            break;

        default:
            printf("Wrong Choice Try Again! \n");
            break;
        }
    }
    return 0;
}