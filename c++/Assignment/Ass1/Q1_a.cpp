/*
 * Author Abhay Raj Singh
 *
 * Form No 231207094
 *
 */


//  sum of 4 digit number using Loop
 
#include <iostream>
using namespace std;

int loop(int num)
{
  int sum=0;
  while(num!=0)
  {
	  sum+=num%10;
	  num=num/10;

  }
  return sum;
}
int main()
{
       int num;	
       cout<<"Enter Four digit Number : "<<endl;
       cin>>num;

       int res=loop(num);

       cout<<"Sum of four Digit num is : "<<res<<endl;
	return 0;
}
