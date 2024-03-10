/*
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 */

//check num is prime or not

#include<iostream>
using namespace std;

void prime(int n)
{
    int flag=0;
   for (int i=2;i<=n/2;i++)
   {
       if(n%i==0)
         {
              flag=1;
              break;
         }
   }
   if(flag==0)
       cout<<"Number is Prime "<<endl;
   else
       cout<<"Number is not Prime"<<endl;

}


int main()
{
      int num;
      cout<<"Enter the number to check prime or not"<<endl;
      cin>>num;

      prime(num);

    return 0;
}
