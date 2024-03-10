/*
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 */

//salary with commission

#include <iostream>
using namespace std;

//declaration of function
void calcu(long ,long );

int main()
{
       long long bs,s;
       cout<<"input basic salary"<<endl;
       cin>>bs;

       cout<<"Sales Count"<<endl;
       cin>>s;

       calcu(bs,s); //calling function



        return 0;
}

void calcu( long bs, long s)
{

   if(s>=5000&& s<7501)
	   bs+=(0.03*bs);
   else if(s>=7501 && s<10501)
	   bs+=(0.08*bs);
   else if(s>=10501 && s<15001)
	   bs+=(0.11*bs);
   else if(bs>=105001)
	   bs+=(0.15*bs);

   cout<<"Net Salary is "<<bs<<endl;      




}
