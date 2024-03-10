/*
 *
 *
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 */

/*
 * Draw a Pattern       ******
 *                      *****
 *                      ***
 *                      **
 *                      *
 */

#include <iostream>
using namespace std;

void pattern()
{
       int rows;	
       cout<<"Input Number Of Rows"<<endl;
       cin>>rows;

       for(int i=0;i<rows;i++)
       {
               for(int j=i;j<rows;j++)
		       cout<<"*";
	       
	       cout<<"\n";
       }


}
int main()
{

pattern();

return 0;
}
