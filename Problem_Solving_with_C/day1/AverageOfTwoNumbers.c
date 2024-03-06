#include <stdio.h>
#include <limits.h>

// Calculate average of two integer numbers
int main()
{
	printf("INT_MIN=%d,INT_MAX=%d \n",INT_MIN,INT_MAX);
	
	int num1, num2;
	double avg;
	printf("Enter two integers \n");
	scanf("%d",&num1);
    scanf("%d",&num2);
	
	//avg = (num1+num2)/2.0;
	avg = num1/2.0 + num2/2.0;
	printf("Average of %d and %d = %0.2lf", num1,num2,avg);
	
	return 0;   	
}

// 5/2 = 2
// 5/2.0 = 2.5

// Integer range in C 
// -2147483648,-2147483647,...-2,-1,0,1,2....2147483647


