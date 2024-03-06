#include <stdio.h>

/*
Display below patterns : 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/
int main()
{
	int i, j, num;
	printf("Enter a number : \n");
	scanf("%d", &num);
	
	for(int i=1; i<=num; i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ", j);
		}
		
		printf("\n");
	}
	
	return 0;
}