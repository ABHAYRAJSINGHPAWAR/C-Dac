/*
 *Author Abhay raj Singh
 *
 *Form No 231207094
 */

//calculator

#include<iostream>
using namespace std;

      //Declaration of function
       void Add(int,int);
       void Subt(int,int);
       void Mult(int,int);
       void Div(int,int);
       void Mod(int,int);

int main()
{
	do{

       cout<<"*****************************Calculator******************************************"<<endl;
       cout<<"for Addition Click + or 1"<<endl;
       cout<<"for Subtraction  Click - or 2"<<endl;
       cout<<"for Multiplication Click * or 2"<<endl;
       cout<<"for Division Click / or 3"<<endl;
       cout<<"for modulus Click % or 4"<<endl;

       cout<<"Enter the choice "<<endl;
       char ch;cin>>ch;

       int a,b;
       switch(ch)
       {
              case '1':
	      case '+':
	              {
			  cout<<"Enter First Number"<<endl;
	                  cin>>a;	          	  
			  cout<<"Enter Second Number"<<endl;
		          cin>>b;	  
		          Add(a,b); //function call
	                  break;
		      } 
	      case '2':
	      case '-':
	              {
			  cout<<"Enter First Number"<<endl;    
		          cin>>a;	  
			  cout<<"Enter Second Number"<<endl;    
		          cin>>b;	  
                         Subt(a,b); //function call
			 break;
		      }	      
	             	
	      case '3':
	      case '*':
		      {
			  cout<<"Enter First Number"<<endl;    
		          cin>>a;	  
			  cout<<"Enter Second Number"<<endl;    
		          cin>>b;	  
                        Mult(a,b); //function call
			break;
		      }	      
            
	      case '4':
	      case '/':
		      {
			  cout<<"Enter First Number"<<endl;    
		          cin>>a;	  
			  cout<<"Enter Second Number"<<endl;    
		          cin>>b;	  
                        Div(a,b); //function call
			break;
		      }	      

	      case '5':
	      case '%':
	             {
			  cout<<"Enter First Number"<<endl;    
		          cin>>a;	  
			  cout<<"Enter second Number"<<endl;    
		          cin>>b;	  
                      Mod(a,b);  //function call
		      break;
		     }

	      default:
	                 cout<<"Wrong Choice"<<endl;	     




       }
	}while(1==1);

       return 0;
}

//function Definition
void Add(int a,int b)
{
      a+=b;
      cout<<"Result is : "<<a<<endl;
}

void Subt(int a,int b)
{
	a-=b;
	cout<<"Result is : "<<a<<endl;
}

void Mult(int a,int b)
{
	a*=b;
	cout<<"Result is : "<<a<<endl;
}

void Div(int a,int b)
{
	double m=a/b;
	cout<<"result is : "<<m<<endl;
}

void Mod(int a,int b)
{
	a%=b;
	cout<<"Result is : "<<a<<endl;
}
