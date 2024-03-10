/*
 *Author Abhay Raj Singh
 *
 *Form No 231207094
 *
 *
 */

//gaming question

#include <iostream>
using namespace std;

void game(int match)
{
        int user;
        
        while(match>0)
        {
            int check;
          do{
          cout<<"#######################"<<endl;            
          cout<<"Enter User Choice"<<endl;
          cin>>user;
          if((user ==1 || user ==2||user==3 ||user==4) && match-user>=0)
          {
          match-=user;
          cout<<"Match remains "<<match<<endl;
          check=1;
          }
          else {
              cout<<"Wrong Choice Try Again"<<endl;
              check=0;
          }
          }while(check!=1);


            if(match%2==0 && match-5+user>=0)
            {
                   cout<<"********************"<<endl;
                   cout<<"Computer choose  "<<5-user <<endl;
                   match-=5-user;
                   cout<<"Match Remains : "<<match<<endl;
            }
            else if(match%2==1 && match-5+user>=0)
            {
                   cout<<"********************"<<endl;
                   cout<<"Computer choose  "<<5-user <<endl;
                   match-=5-user;
                   cout<<"Match Remains :" <<match<<endl;

            }

        }
        cout<<"Computer Wins"<<endl;
}




int main()
{
     int match=21;

       game(match);

     return 0;
}
