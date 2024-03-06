#include <stdio.h>

int main()
{
    int l, b;
    double per, area;
    printf("Enter length and breath of rectangle in meter: \n");
    scanf("%d%d", &l, &b);

    area = l * b;
    per = 2 * (l + b);

    printf("Area of rectangle is %lf square meter", area);
    printf("Perimeter of rectangle is %lf meter", per);
    return 0;
}