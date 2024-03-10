/*
 *
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 */

// average of number


#include <iostream>
using namespace std;

double averag(int *p,int n)
{
     double sum=0;
     for(int i=0;i<n;i++)
     {
	     sum+=p[i];
             
     }
     sum=sum/n;
return sum;

}


void display(double res)
{
        cout<<"Average is : "<<res<<endl;


}
int main()
{
       int n=0;
       cout<<"Input total number whose average you want"<<endl;
       cin>>n;

       int arr[n];
       for(int i=0;i<n;i++)
       {
           cout<<"Input "<<i+1<<" Number"<<endl;
	   cin>>arr[i];

       }

       double  res=averag(arr,n);

       display(res);
          return 0;
}
