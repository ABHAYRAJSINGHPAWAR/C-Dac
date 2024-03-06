#include <stdio.h>
#include <string.h>

int main()
{
    char ch[999];
    printf("Input the Name");
    gets(ch);

    printf("This is our Greeting behalf of Happy Holi Mr. %s .I wish you to remain happy in this year.", ch);

    return 0;
}