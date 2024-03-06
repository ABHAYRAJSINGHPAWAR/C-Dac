#include <stdio.h>

int main()
{
    int num, res = 0, temp;
    printf("Input the number \n");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        res = res * 10 + temp % 10;
        temp = temp / 10;
    }

    if (num == res)
        printf("Number is palindrome.");
    else
        printf("Number is not palindrome");
    return 0;
}