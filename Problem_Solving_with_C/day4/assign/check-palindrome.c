#include <stdio.h>
#include <string.h>

int main()
{
    char st[10023], st2[10023];
    printf("Input the String\n");
    gets(st);
    strcpy(st2, st);
    strrev(st2);

    int i = strcmp(st2, st);

    if (i == 0)
        printf("yes it is palindrome String");
    else
        printf("No it is not a palindrome string");

    return 0;
}