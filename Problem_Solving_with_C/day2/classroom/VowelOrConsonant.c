#include <stdio.h>

// Create a program that takes a single character as input 
// and determines if it's a vowel or a consonant.
int main()
{
	char ch;
	printf("Enter a character: \n");
	scanf("%c", &ch);
	
	printf("You entered : %c \n", ch);
	
	if((ch >='A' && ch <='Z')|| (ch>='a' && ch<='z')){
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'
		    ||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
			printf("It is vowel.");
		}else{
			printf("It is consonant.");
		}
	}else{
		printf("It's not a alphabet.");
	}
	
	return 0;
}