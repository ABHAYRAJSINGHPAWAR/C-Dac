#include <stdio.h>

int main()
{
    int a, sum, b;
    printf("Enter two Number");
    scanf("%d%d", &a, &b);

    sum = a + b;
    a = sum - a;
    b = sum - b;

    printf("After Swap first number is :%d ", a);
    printf("After Swap second number is :%d ", b);

    return 0;
}