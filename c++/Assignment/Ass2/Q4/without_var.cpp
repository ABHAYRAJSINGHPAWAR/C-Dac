/*
 *
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 */

//swap value without third variable

#include <iostream>
using namespace std;

void swap(int ,int );

int main()
{
	int a,b;

	cout<<"Input first Value"<<endl;
	cin>>a;

	cout<<"input second Value"<<endl;
	cin>>b;

	swap(a,b);

	return 0;
}

void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"After swaping First value is "<<a<<endl;
	cout<<"After swaping Second value is "<<b<<endl;

}
