#include <stdio.h>

// Display name of the day based on number enterd 
// by user.(1-Monday,2-Tuesday,3-Wednesday...7-Sunday)
int main()
{
	int num;
	printf("Enter day number : \n");
	scanf("%d", &num);
	
	switch(num){
	  case 1:
		printf("Monday");break;
	  case 2:
		printf("Tuesday");break;
	  case 3:
		printf("Wednesday");break;
	  case 4:
		printf("Thursday");break;
	  case 5:
		printf("Friday");break;
	  case 6:
		printf("Saturday");break;
	  case 7:
		printf("Sunday");break;
	  default:
		printf("Incorrect input.");
	}
	 
	return 0;
}