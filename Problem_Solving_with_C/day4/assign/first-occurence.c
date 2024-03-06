#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[999];
    printf("Input the string");
    gets(str);

    int i = 0, j;
    while (str[i] != '\0')
    {
        j = i + 1;
        while (str[j] != '\0')
        {
            if (str[i] == str[j])
            {
                printf("character is %c", str[i]);
                exit(1);
            }
            j++;
        }

        i++;
    }

    return 0;
}