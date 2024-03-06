#include <stdio.h>

// Check if the given integer number is Even.
int main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d", &num);
	
	if(num%2 == 0) {
		printf("It is EVEN.");
	} else {
		printf("It is not EVEN.");
	}
	
	return 0;
}