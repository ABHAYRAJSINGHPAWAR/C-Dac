/*
 *
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 *
 */

//calculate gross  Salary and net salary


#include <iostream>
using namespace std;
#include "Salary.h"

int main(){
         int sal=0;
	 cout<<"What is your basic Salary"<<endl;
	 cin>>sal;

         gross_salary(sal);
         net_salary(sal);

        return 0;
}



