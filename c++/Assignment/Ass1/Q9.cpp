/*
 *
 *Name Abhay raj singh
 *
 *FORM NO 231207094
 *
 */

//input as a character and print string

#include<iostream>
using namespace std;
#include<cstring>

    string str(char *p,int n)
{
	string res="";
	for(int i=0;i<n;i++)
	    res+=p[i];

	return res;
}

int main()
{
	int n;
	cout << "input number of character : "<<endl;
        cin>>n;
	
	char ch[n];
	for(int i=0;i<n;i++)
	{
              cout<<"Input "<<i+1<<" Character"<<endl;
	      cin>>ch[i];
	}
	
        string res=str(ch,n);

	cout<<"string is : "<<res<<endl;

         return 0;
}
