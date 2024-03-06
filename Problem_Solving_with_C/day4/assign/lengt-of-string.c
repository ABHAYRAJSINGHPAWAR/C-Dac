#include <stdio.h>
#include <string.h>

int main()
{
    char ch[999];
    printf("input the string");
    gets(ch);

    printf("length of string is : %d", strlen(ch));

    return 0;
}