/*
 *
 *
 *
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 */

/*
 *
 *                                 *
 *Draw a Pattern                   **
 *                                 ***
 *                                 ****
 *                                 *****
 *                                 ******
 *
 */




#include <iostream>
using namespace std;

//creating function
void pattern()
{
 int row;
         cout<<"Number of Rows in Pattern"<<endl;
         cin>>row;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<=i;j++)
            {
                  cout<<"*";
            }
            cout<<"\n";
        }


}
int main()
{

	pattern();

	return 0;
}

