#include <stdio.h>
#include <string.h>

int main()
{
    char ch[999], cp[999];
    printf("Enter the String contain blank space\n ");
    gets(ch);

    int i = 0, j = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] != ' ')
        {
            cp[j] = ch[i];
            j++;
        }

        i++;
    }

    printf("with Blank Space String is : %s \n", ch);
    printf("\n Without blank Space Sring is %s", cp);

    return 0;
}