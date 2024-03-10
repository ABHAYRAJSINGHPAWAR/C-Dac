/*
 *Author Abhay Raj Singh
 *
 * Form No 231207094
 *
 */

/*
 * Draw a Pattern               *
 *                             * *
 *                            * * *
 *                             * *
 *                              *
 *                              
 */

#include <iostream>
using namespace std;

void Pattern()
{
        int row;
	cout<<"For Diamond Shape enter a Even  number"<<endl;
        cin>>row;

	int space = row/2 - 1;  
  
    
    for (int i = 0; i < row/2; i++)  
    {  
         
        for (int j = 0;j < space; j++)  
            cout<<" ";  
  
        
        for (int j = 0; j <= i; j++)  
            cout<<"* ";  
  
        cout <<"\n";  
space--;  
    } 

   for(int i=row/2;i<row;i++)
   {
        for(int j=0;j<=space;j++)
	      cout<<" ";
        for(int j=0;j<row-i;j++)
		cout<<"* ";

      cout<<"\n";
      space++;
   } 

}
int main()
{


Pattern();

return 0;
}


