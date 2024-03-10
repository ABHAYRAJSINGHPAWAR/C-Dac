/*
 *
 *Name Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 */

//check leap year

#include <iostream>
using namespace std;

//declaration of function
void check( int);


int main()
{

         int yr;
	 cout<<"Input the year"<<endl;
	 cin>>yr;
           
	 //calling the function
	 check(yr);



         return 0;
}

//definition of function


void check(int yr)
{
     if((yr%4==0 || yr%400==0) && yr%100!=0 )
	     cout<<"This "<<yr<<" is Leap year"<<endl;
     else
	     cout<<"this "<<yr<<" is not Leap Year"<<endl;


}
