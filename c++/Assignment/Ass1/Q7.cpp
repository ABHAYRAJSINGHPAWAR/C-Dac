/*
 *
 *author Abhay Raj singh
 *
 *form no 231207094
 *
 */

// sum of n factorial


#include <iostream>
using namespace std;



int fact(int num)
{
	int res=0;
if(num!=1)
{
res=num*fact(num-1);
return res;
}
else
return 1;
}

int main()
{
       int num,res=0;
       cout<<"enter number of factorial sum"<<endl;
       cin>>num;
     
       for(int i=1;i<=num;i++)
       {
         res= fact(i);
         cout<< res<<" ";
       }
return 0;
}
