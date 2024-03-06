#include <stdio.h>
#include <string.h>
int main()
{
    char s[45], c[46];

    printf("input the string \n");
    gets(s);

    strcpy(c, s);
    printf("%s", s);

    return 0;
}