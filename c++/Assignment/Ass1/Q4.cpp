/*
 *
 *Author Abhay Raj singh
 *
 *Form no 231207094
 *
 */

// decimal to binary


#include <bits/stdc++.h>
using namespace std;

string s="";

void bin(int n)
{
    if(n!=0)
    {
    int rem=0;
    rem=n%2;
    if(rem==1)
    s=s+" 1";
    else
        s=s+" 0";
   
    bin(n/2);
    }
}


int main()
{

   int num;
   cout<<"Enter a number : \n";
   cin>>num;

   bin(num);
   reverse(s.begin(),s.end());
   cout<<s;
   return 0;
}
