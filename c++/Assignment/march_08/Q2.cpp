/*
 *
 *Author abhay Raj Singh
 *
 *Form No 231207094
 *
 */

/*
 *                            *
 *Draw a Pattern             **
 *                          *** 
 *                         ****
 *                        *****
 *
 */

#include <iostream>
using namespace std;

//creating function
void pattern()
{

	int row;
              cout<<"Input Number of Rows"<<endl;
              cin>>row;	

	for(int i=1;i<=row;i++)
	{
              for(int j=1;j<=row-i;j++)
		      cout<<" ";
	      for(int k=1;k<=i;k++)
		      cout<<"*";

              cout<<"\n";
	}
	
}

int main()
{

	pattern();
        
	return 0;
}
