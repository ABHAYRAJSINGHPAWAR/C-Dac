/*
 * Author Abhay Raj Singh
 *
 * Form No 231207094
 */

//sum of 4 digit num using recursion



#include <iostream>
using namespace std;
#include <cstdlib>

int calculate(int num){

	if(num!=0)
	{
	return num%10+calculate(num/10);
        
	}
	else
	return num;
}



int main()
{

int num;
cout<<"Input 4 digit number"<<endl;
cin>>num;

int res=calculate(num);
cout<<"Sum of number is : "<< res<<endl;


return 0;
}
