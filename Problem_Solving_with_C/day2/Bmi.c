#include <stdio.h>

int main()
{
    double w, ht, cal;
    printf("what is your weight in kg ? \n ");
    scanf("%lf", &w);

    printf("what is your height in cm ? ");
    scanf("%lf", &ht);

    cal = w / (ht * ht);

    if (cal < 18.5)
    {
        printf("Under weight");
    }
    else if (cal >= 18.5 && cal < 25)
    {
        printf("Normal weight");
    }
    else if (cal >= 25 && cal < 30)
    {
        printf("Over weight");
    }
    else
        printf("Obese");

    return 0;
}