#include<stdio.h>

int fact(int n){
   int f = 1;
   for(int i=n ; i >= 1; i--){
      f = f * i ;
   }
   
   return f;
}

int main() {
    int n1, n2, n3, sum;
    printf("Enter 3 integer numbers : \n");
    scanf("%d%d%d", &n1, &n2, &n3);

    sum = fact(n1) + fact(n2) + fact(n3);

    printf("Sum of factorial of %d,%d,%d is %d", n1,n2,n3,sum);
    return 0;
}