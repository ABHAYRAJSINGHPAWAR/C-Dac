/*
 * Author Abhay Raj Singh
 *
 * Form No 231207094
 *
 */

/*
 * Draw a pattern     *****
 *                     ****
 *                      ***
 *                       **
 *                        *
 */

#include <iostream>
using namespace std;

//creating function
void pattern()
{
     int rows;	
     cout<<"Input the rows for Pattern"<<endl;
     cin>>rows;

     for(int i=1;i<=rows;i++)
     {

             for(int j=1;j<i;j++)
		     cout<<" ";
	     for(int j=1;j<=rows-i;j++)
		     cout<<"*";
	     cout<<"\n";
     }
}
int main()
{

	pattern();
return 0;
}
