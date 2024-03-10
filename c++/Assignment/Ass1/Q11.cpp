/*
 *
 *Author Abhay Raj Singh
 *
 *Form no 231207094
 *
 *
 */

//accept n number and result it 2 multiply n


#include <iostream>
using namespace std;


void array_fun(int n,int *p)
{
 
	for(int i=0;i<n;i++)
	{
		cout<<"Input "<<i+1<<" Number"<<endl;
                cin>>p[i];
        }
        
}
int main()
{

	cout<<"Input the total number"<<endl;
	int n;
	cin>>n;

	int arr[n];
        array_fun(n,arr);

	for(int i=0;i<n;i++)
	{
           cout<<"Number "<<arr[i]<<" becomes" <<2 * arr[i]<<endl;
	}



return 0;
}

