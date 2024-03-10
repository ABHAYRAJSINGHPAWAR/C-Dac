/*
 *
 *
 *Author Abhay Raj Singh
 *Form No 231207094
 *
 *
 */


//swaping without third variable

#include <iostream>
using namespace std;


void swap(int first,int second)
{
       first=first+second;
       second=first-second;
       first=first-second;

   cout<<"After swaping first number is : "<<first<<endl;
   cout<<"After swaping second number is : "<<second<<endl;   

}



int main()
{
int first,second;
cout<<"Enter two number for swap"<<endl;
cin>>first>>second;

     swap(first,second);



return 0;
}
