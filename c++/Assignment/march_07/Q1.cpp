/*
 *
 *Author Abhay Raj Singh
 *Form No.  231207094
 *
 *
 */
//swaping two variable using third variable
#include <iostream>
using namespace std;


void swap(int first,int second)
{

int temp;

       temp=first;
       first=second;
       second=temp;
 
       cout<<"After swaping First number is : "<<first <<endl;
       cout<<"After swaping Second number is : "<<second <<endl;

}


int main()
{

int first,second;
cout<<"Enter the two integer to swap"<<endl;
cin>>first>>second;

swap(first,second);



return 0;
}
