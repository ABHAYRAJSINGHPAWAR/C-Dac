#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char ch[45];
    printf("input your string");
    gets(ch);

    int i = 0, temp;
    while (ch[i] != '\0')
    {
        if ((ch[i] <= 'Z' && ch[i] >= 'A') || (ch[i] >= 'a' && ch[i] < 'z') || ch[i] == ' ')
        {

            if (ch[i] <= 'Z' && ch[i] >= 'A')
            {
                temp = ch[i] + 32;
                printf("%c", temp);
            }
            else if (ch[i] >= 'a' && ch[i] <= 'z')
            {
                temp = ch[i] - 32;
                printf("%c", temp);
            }
            else if (ch[i] == ' ')
            {

                printf("%c", ch[i]);
            }
        }
        else
        {
            system("cls");
            printf("Wrong String! it contain other than alphabet");
            exit(1);
        }
        i++;
    }

    return 0;
}