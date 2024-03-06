#include <stdio.h>
#include <string.h>

int main()
{
    char n[] = "Abhay Raj Singh", r[45];
    printf("input your name \n");
    gets(r);

    int res = strcmp(n, r);

    if (res == 0)
        printf("welcome your system is ready Mr. %s \n", r);
    else
        printf("you are not my owner Mr. %s\n", r);

    return 0;
}