#include <stdio.h>
#include <string.h>

int main()
{
    char name[30], name2[30];
    printf("Enter first Name : \n");
    gets(name);
    // scanf("%[^\\]*c", name);

    printf("Enter second Name : ");
    gets(name2);
    strcat(name, name2);
    printf("Full Name is : ");
    puts(name);
    printf(" %s", strupr(name2));

    return 0;
}