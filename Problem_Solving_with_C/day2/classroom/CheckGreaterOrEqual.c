#include <stdio.h>

/*
Ask the user to input two numbers.
Compare the numbers and print a message indicating
which one is greater, or if they are equal.
*/
int main()
{
  double num1, num2;
  printf("Enter two numbers:\n");
  scanf("%lf%lf", &num1, &num2);

  if (num1 == num2)
  {
    printf("Both are equal.");
  }
  else if (num1 > num2)
  {
    printf("%0.2lf is greater.", num1);
  }
  else
  {
    printf("%0.2lf is greater.", num2);
  }

  /*
  if(num1 == num2){
  printf("Both are equal.");
  }else {
  if(num1 > num2){
     printf("%0.2lf is greater.", num1);
  }else{
     printf("%0.2lf is greater.", num2);
  }
  }*/

  return 0;
}
