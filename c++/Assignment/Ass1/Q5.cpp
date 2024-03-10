/*
 *
 *
 *
 *
 *
 */

// sum of n number using recursion

#include <iostream>
using namespace std;

  int res=0;
  void sum(int num)
{

    if(num!=0)
       {
         res+=num%10;
	 sum(num/10);

       }



}


int main()
{
	int num;
	cout<<"enter the number"<<endl;
	cin>>num;

	sum(num);
       
	cout<<"Result is : "<<res<<endl;
	return 0;
}
