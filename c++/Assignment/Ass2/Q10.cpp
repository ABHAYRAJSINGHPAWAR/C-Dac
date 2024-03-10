/*
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 */

//max of three num using conditional operator

#include<iostream>
using namespace std;


void cal(int a,int b,int c)
{
      int res=(a<b)?((b>c)?b:c):((a>c)?a:c);
      cout<<"Maximum is : "<<res<<endl;


}



int main()
{
      int a,b,c;
      cout<<"Input the First number"<<endl;
      cin>>a;
      cout<<"Input the second number"<<endl;
      cin>>b;
      cout<<"Input the third number"<<endl;
      cin>>c;

      cal(a,b,c);


        return 0;
}
