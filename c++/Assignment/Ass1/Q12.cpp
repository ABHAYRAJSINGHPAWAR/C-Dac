/*
 *
 *Author Abhay raj Singh
 *
 *Form no 231207094
 *
 */

//accept n number and find max min second_max second_min;

#include <bits/stdc++.h>
using namespace std;

void check(int *p,int n)
{
	int max=INT_MIN,min=INT_MAX,s_max=INT_MIN,s_min=INT_MAX;
	for(int i=0;i<n;i++)
	{
                  for(int j=i+1;j<n;j++)
		  {
			  if(p[i]>p[j])
			  {
				  p[i]=p[i]+p[j];
				  p[j]=p[i]-p[j];
				  p[i]=p[i]-p[j];
			  }
		  }
		
	
	}

		cout<<"MAX "<<p[n-1]<<endl;
                
		cout<<"MIN "<<p[0]<<endl;
		cout<<"Second MAX "<<p[n-2]<<endl;
		cout<<"Second MIN "<<p[1]<<endl;
}
void inpu(int n)
{
	int arr[n];
        for(int i=0;i<n;i++)
	{
		cout<<"Input "<<i+1<<" Number"<<endl;
	        cin>>arr[i];
        }
        
	check(arr,n);

}
int main ()
{

	int n;
	cout<<"Input atleast 4 number"<<endl;
	cin>>n;

       if(n<4)
       {
         cout<<"Wrong Choice!"<<endl;
         exit(0);
       }
       else
	inpu(n);       


	return 0;
}
