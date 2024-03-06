#include <stdio.h>

void area();
void circumfence();

void area(int ra)
{

    double a;
    a = (2 * 22 * ra * ra) / 7;

    printf("Area of Circle : %lf", a);
}

int main()
{

    int r;
    printf("Enter the radius : ");
    scanf("%d", &r);

    area(r);
    circumfence(r);

    return 0;
}

void circumfence(int ra)
{

    double p;
    p = (2 * 22 * ra) / 7;

    printf("Perimeter of Circle : %lf", p);
}
