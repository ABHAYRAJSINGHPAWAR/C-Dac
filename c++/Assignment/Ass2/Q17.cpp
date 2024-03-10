/*
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 */

/*  pattern         1 2 3 4 5 4 3 2 1
 *                  1 2 3 4   4 3 2 1
 *                  1 2 3       3 2 1
 *                  1 2           2 1
 *                  1               1 
 */

#include <iostream>
using namespace std;

int main()
{
     int rows=5;
     

     for(int i=0;i<rows ;i++)
     {
          for(int j=1;j<=rows-i;j++)
              cout<<j<<" ";
          for(int j=0;j<i;j++)
              cout<<"  ";
          for(int j=1;j<i;j++)
              cout<<"  ";
          for(int j=rows-i;j>0;j--)
          {
              if(j!=5)
              cout<<j<<" ";
              
                 
          }

     cout<<endl;


     }

     return 0;
}
