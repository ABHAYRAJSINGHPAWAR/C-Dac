#include <stdio.h>
#include <string.h>

int main()
{
    char a[35], b[45];
    printf("input first name \n");
    gets(a);

    printf("input last name \n");
    scanf("%[^\n]*c", b);

    strcat(a, b);
    printf("%s", a);

    return 0;
}