/*
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 */

//fibbonic series   using recursion

#include <iostream>
using namespace std;


int fibb(int num)
{

  if(num<=1)
      return num;
  else
  return fibb(num-1) +fibb(num-2);
}


int main()
{
    int num;
    cout<<"input number of fibbonic element you want"<<endl;
    cin>>num;

   for(int i=0;i<num;i++)         
        cout<<fibb(i)<<" ";

    return 0;
}
