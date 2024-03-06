#include <stdio.h>

// Display numbers from 1 to N
int main()
{
	int n, i;
	printf("Enter a number : \n");
	scanf("%d", &n);

	i = 1;		   // initialize i
	while (i <= n) // condition
	{
		printf("%d\n", i);
		i = i++; // increment i
	}

	return 0;
}