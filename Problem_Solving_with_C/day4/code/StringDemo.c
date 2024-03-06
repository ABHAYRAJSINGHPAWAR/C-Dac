#include <stdio.h>
#include <string.h>

int main()
{
    char msg[] = "abc";
    char msg2[] = {'a', 'b', 'c', 'd', '\0'};

    printf("msg= %s \n", msg);
    printf("msg2= %s \n", msg2);

    printf("Length of msg = %d \n", strlen(msg));
    printf("sizeof msg = %d \n", sizeof(msg));

    printf("Length of msg = %d \n", strlen(msg2));
    printf("sizeof msg = %d \n", sizeof(msg2));

    return 0;
}