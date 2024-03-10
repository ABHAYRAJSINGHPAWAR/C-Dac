/*
 *
 *Name Abhay Raj Singh
 *
 *form no 231207094
 *
 *
 */
#include <iostream>
using namespace std;

void gross_salary(int bs)
{
        double hra,da;
	hra=0.15*bs;
	da=0.3*bs;

       cout<<"Gross Salary is : "<<bs+hra+da<<endl;


}

void net_salary(int bs)
{
       double hra,da,pf;
       hra=0.15*bs;
       da=0.3*bs;
       pf=0.125*bs;

       cout<<"Net Salary is : "<<bs+hra+da-pf<<endl;




}
