#include <stdio.h>
#include <string.h>

int main()
{
    char ch[45];
    printf("Input the String");
    gets(ch);

    printf("%s", strrev(ch));

    return 0;
}