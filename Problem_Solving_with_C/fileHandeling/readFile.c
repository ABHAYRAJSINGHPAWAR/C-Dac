#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int num;
    FILE *fptr;

    if ((fptr = fopen("C:\\C_Dac\\Problem_Solving_with_C\\fileHandeling\\program.txt", "r")) == NULL)
    {
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    fscanf(fptr, "%d", &num);

    printf("Number saved is =%d", num);
    fclose(fptr);

    return 0;
}