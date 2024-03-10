/*
 *Name Abhay Raj Singh
 *
 *Form no 231207094
 *
 */

//check leap year by conditional operator

#include<iostream>
using namespace std;

//function declaration
void check(int );

int main()
{
  int yr;
  cout<<"input the year to check leap year"<<endl;
  cin>>yr;

  check(yr); //calling function



   return 0;
}

//function definition
void check(int yr)
{
    ((yr%4==0 ||yr%400==0)&&yr%100!=0)?cout<<"This "<<yr<<" year is leap year"<<endl :cout<<"This "<<yr<<" is not leap year"<<endl;



}
