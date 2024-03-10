/*
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 */

// check Armstrong number

#include<iostream>
using namespace std;

void Armstrong(int num)
{
    int r,sum=0,cpy=num;
     while(cpy!=0)
     {
          r=cpy%10;
          sum+=r*r*r;
          cpy/=10;
     }

     if(sum==num)
         cout<<"This number is Armstrong "<<sum<<endl;
     else
     cout<<"this number is not Armstrong number "<<sum<<endl;

}



int main()
{
    cout<<"Input the number to check Armstrong number"<<endl;
    int a;cin>>a;

    Armstrong(a); //function call

return 0;
}
