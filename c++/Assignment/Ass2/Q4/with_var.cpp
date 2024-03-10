/*
 *Author Abhay raj Singh
 *
 *Form No 231207094
 *
 */

//swaping using third variable


#include <iostream>
using namespace std;

void swap(int a,int b)
{
    int  temp=a;
         a=b;
         b=temp;

      cout<<"First variable is : "<<a<<endl;
      cout<<"second variable is : "<<b<<endl;
}
int main()
{
	int a,b;
	cout<<"Input first value"<<endl;
	cin>>a;
	cout<<"Input second value"<<endl;
	cin>>b;

	swap(a,b);

	return 0;
}	
