#include <stdio.h>
#include <conio.h>
#include <limits.h>

int main()
{
    printf("INT_MIN=%d,INT_MAX=%d \n", INT_MIN, INT_MAX);
    int a, b, c;
    double avg;
    printf("Enter three number");
    scanf("%d%d%d", &a, &b, &c);
    avg = (a + b + c) / 3.0;

    printf("Average of %d , %d and %d is %lf", a, b, c, avg);

    return 0;
}