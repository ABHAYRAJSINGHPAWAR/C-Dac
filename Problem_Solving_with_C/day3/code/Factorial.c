#include <stdio.h>

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);

    int fact = 1, i = num;
    while( i > 1 ) {
        fact = fact * i;
        i--;
    }

    printf("Factorial of %d is %d", num,fact);

    return 0;
}