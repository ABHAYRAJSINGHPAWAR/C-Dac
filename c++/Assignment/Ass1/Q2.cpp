/*
 *
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 */

//find the square root of second degree equation

#include <bits/stdc++.h>
using namespace std;
#include <cmath>


pair<double,double>  square_root(int a,int b,int c)
{ 

	 pair<double,double> root;
	 root.first=(-b+sqrt(b*b-4*a*c))/(2*a);
         root.second=(-b-sqrt(b*b-4*a*c))/(2*a);




return root;
 }

int main()
{
    int a,b,c;
    cout<<"Enter the coffiecient of second degree equation"<<endl;
    cin>>a>>b>>c;

    pair<double,double>  root=square_root(a,b,c);

    cout<<"First Root is : "<<root.first<<endl;
    cout<<"Second Root is : "<<root.second<<endl;


return 0;
}

