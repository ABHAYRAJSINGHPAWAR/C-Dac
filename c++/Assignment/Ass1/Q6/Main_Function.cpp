#include <iostream>
using namespace std;
#include "Area.h"

int main()
{
   char ch;
	do{
    cout<<"For Area of Circle Press 1"<<endl;
    cout<<"For Area of Rectangle Press 2"<<endl;
    cout<<"For Area of Square Press 3"<<endl;
    cout<<"For Exit Press E"<<endl;
    cin>>ch;

    switch(ch)
    {
      case '1':
	      {
                 cout<<"Radius of Circle"<<endl;
		 double r;
		 cin>>r;

		 Circle(r);
		 break;
	      }


      case '2':
	      {
                 cout<<" Tell Length and breath of Rectangle"<<endl;
		 double l,b;
		 cin>>l>>b;

		 Rectangle(l,b);
		 break;
	      }

     
      case '3':
	      {
                 cout<<" Tell Side of Square"<<endl;
		 double s;
		 cin>>s;

		 Square(s);
		 break;
	      }

      default:
	      {
		      cout<<"Wrong Choice !"<<endl;
                      break;
              }
    }
	}while(ch!='E');
   
	cout << endl<<endl;
return 0;
}
