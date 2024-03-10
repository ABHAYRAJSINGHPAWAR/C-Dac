/*
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 */

//change in opposite case

#include<iostream>
using namespace std;

void fun(char c)
{
    int num=c;
     if((c>='a' &&c<='z') ||(c>='A' && c<='Z'))
     {
        if(c>='a' && c<='z')
            num-=32;
        else
            num+=32;

     
        
     char alpha=num;
     cout<<"Change case is : "<<alpha<<endl;

     }
     else
     cout<<"It is not Alphabet"<<endl;

}



int main()
{
       char c;
       cout<<"Enter the character"<<endl;
       cin>>c;

       fun(c);

        return 0;
}
