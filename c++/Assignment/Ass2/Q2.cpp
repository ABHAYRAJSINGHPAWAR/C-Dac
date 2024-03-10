/*
 *
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 */

//accept some number and find avg using implicit and explicit conv


#include<iostream>
using namespace std;

void avg(int *p,int n)
{
	double sum=0;
	float res;
	for(int i=0;i<n;i++)
	{
		//implicit conversion from int to double;
		sum+=p[i];
	}
	 
	//explicit conversion from double to float
	res=(float)sum/n;
       
	cout<<"Average is : "<<res<<endl;


}
int main()
{
   int n=0;
   cout<<"Input the total subject number : "<<endl;
   cin>>n;

   int arr[n];

   for(int i=0;i<n;i++)
   {
	   cout<<"Enter "<<i+1<<" Number"<<endl;
	   cin>>arr[i];
   }
    
   avg(arr,n);



}
