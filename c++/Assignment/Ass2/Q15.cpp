/*
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 *
 */

//all combination with number

#include <iostream>
using namespace std;
void shuff(int *p)
{
    int check=0,temp=0;
      int num=p[0]*100+p[1]*10+p[2];
      cout<<"Num is "<<num<<endl;
      
      while(num!=check){
           temp=p[1];
           p[1]=p[2];
           p[2]=temp;

           check=(p[0]*100)+(p[1]*10)+p[2];
           cout<<"Num is "<<check<<endl;

           if(num==check)
               break;

           temp=p[0];
           p[0]=p[2];
           p[2]=temp;
           check=p[0]*100+p[1]*10+p[2];
           cout<<"Num is "<<check<<endl;

      }


}

int main()
{
     int arr[3],check=0;

     for(int i=0;i<3;i++)
     {
         while(check==0){
         cout<<"Input "<<i+1<<"number"<<endl;
         cin>>arr[i];
         if(arr[i]>=0 && arr[i]<10)
             check=1;
         else
             cout<<"Wrong choice ! Try Again"<<endl; 
         }
         check=0;
     }

     shuff(arr);

     return 0;
}
 

