/*
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 */

//draw a rectangle

#include <iostream>
using namespace std;

void pattern(int l,int b)
{
    for(int i=0;i<l;i++)
        cout<<"#";
    cout<<endl;

    for(int i=1;i<b-1;i++)
    {
       cout<<"#";
       for(int j=1;j<l-1;j++)
           cout<<" ";
       cout<<"#"<<endl;
    }

    for(int i=0;i<l;i++)
        cout<<"#";
    


}
int main()
{
      int l,b;
      cout<<"Input the length of Rectangle"<<endl;
      cin>>l;
      cout<<"Input the breath of Rectangle"<<endl;
      cin>>b;

      pattern(l,b);


      return 0;
}
