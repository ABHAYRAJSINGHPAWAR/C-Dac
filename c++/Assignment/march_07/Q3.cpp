/*
 *
 *Author Abhay Raj Singh
 *
 *Form No. 231207094
 *
 *
 *
 */

//Finding perfect number


#include <iostream>
using namespace std;

// create the function of perfect number
int perfect_num(int num)
{
  int res=0;

  for(int i=1;i<=num/2;i++)
  {
   if(num%i==0)
	   res+=i;

  }
  return res;
}



int main()
{
  int num;
  
  cout<<"Enter the number"<<endl;
  cin>>num;

  int res  =   perfect_num(num);


  if(res==num)
	  cout<<"Input Number is Perfect Number"<<endl;
  else
	  cout<<"Input number is not Perfect Number"<<endl;


  return 0;	
}
