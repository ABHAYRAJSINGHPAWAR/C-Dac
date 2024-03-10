/*
 *Author Abhay Raj Singh
 *
 * Form No 231207094
 *
 */

//Accept n number and sort then display


#include <iostream>
using namespace std;

void sort_fun(int *p,int n)
{
	int temp=0;
     for(int i=0;i<n;i++)
     {
          for (int j=i+1;j<n;j++)
	  {
             if(p[i]>p[j])
	     {
               temp=p[i];
	       p[i]=p[j];
	       p[j]=temp;
              
             }
          }

     }




}


int main()
{
	cout<<"Input the length of array"<<endl;
	int n;
	cin>>n;
        int arr[n];

	for(int i=0;i<n;i++){
	     cout<<"input the "<<i+1<<" character"<<endl;
	     cin>>arr[i];
	}


       sort_fun(arr,n);


	for(int i=0;i<n;i++)
            cout<<arr[i]<<endl;

return 0;
}
