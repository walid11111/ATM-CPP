#include<iostream>
#include"decl.h"
using namespace std;
int main()
{    int a,b,PIN;
	bank obj;
	cout<<"ENTER THE PIN FOR OPEN THE ACCOUNT:";
	cin>>PIN;
	if(PIN==2004)
	{
       cout<<"***********************WELCOME to my account!****************\n";
       
//	   cout<<"\n"<<endl;
//      cout<<"***For details press 1 *** for deposit press 2 *** for withdraw press 3 "<<endl;
//      
//      
//       cout<<"Enetr YOUR CHOISE"<<endl;
//       int press;
//	   cin>>press;
//       switch(press)
//       {
//       	case 1:
//       	  obj.details();
//       	break;
//       	
//       	case 2:
//       	  obj.deposit(a);
//       		break;
//       		
//       	case 3:
//       		obj.withdraw(b);
//       		 break; 
//				
//		case 4:
//		  cout<<"out the account ";		 		 		
//	  }
         obj.details();
	     obj.deposit(a);
	     obj.withdraw(b);
	     obj.display();
   }  
    else
	{
	cout<<"*****SORRY you entered the INCORRECT PASSWORD!** **** PLEASE TRY AGAIN***sOOOOOrrryyy!"<<endl;
	cout<<"\n"<<endl;
	main();
        }
		return 0;
	
}
#include<iostream>
using namespace std;

class bank{
	private:
	char Name_depositor[20];
    int account_number;
	char account_type[15];
	int balance;
	public:
		void details();
		void display();
		void deposit(int x);
		void withdraw(int y);
		
	
};


#include<iostream>
#include"decl.h"
using namespace std;

void bank::details(){
	cout<<"Enetr the name of the depositor:";
	cin>>Name_depositor;
	
	cout<<"Enetr the account number:";
	cin>>account_number;
	
	cout<<"Enetr the account type:";
	cin>>account_type;
	
	cout<<"\nEnetr your account balance:";
	cin>>balance;
	
}

  void bank::deposit(int x){
  	cout<<"\nHow many amout do you want to deposit plz Enetr:";
  	cin>>x;
  	balance+=x;
  	cout<<"your amout is successfuly deposits:\n *****your new balance:"<<balance;
  	cout<<"\n\n";
  }
  
  void bank::withdraw(int y){
  	cout<<"***To withdarw money after *check* the balance:";
  	cout<<"\n***Your Balance is:"<<balance;
  	
  	cout<<"\n**How many amount do you want To withdraw:";
  	cin>>y;
  	balance-=y;
  	cout<<"your remaning balanace is:"<<balance;
  	cout<<"\n";
  	
  }

   void bank::display(){
	cout<<"name:";
	puts(Name_depositor);
    cout<<"Know balance amount in the acount:"<<balance;
}

#include<iostream>
#include"decl.h"
using namespace std;

void bank::details(){
	cout<<"Enetr the name of the depositor:";
	cin>>Name_depositor;
	
	cout<<"Enetr the account number:";
	cin>>account_number;
	
	cout<<"Enetr the account type:";
	cin>>account_type;
	
	cout<<"\nEnetr your account balance:";
	cin>>balance;
	
}

  void bank::deposit(int x){
  	cout<<"\nHow many amout do you want to deposit plz Enetr:";
  	cin>>x;
  	balance+=x;
  	cout<<"your amout is successfuly deposits:\n *****your new balance:"<<balance;
  	cout<<"\n\n";
  }
  
  void bank::withdraw(int y){
  	cout<<"***To withdarw money after *check* the balance:";
  	cout<<"\n***Your Balance is:"<<balance;
  	
  	cout<<"\n**How many amount do you want To withdraw:";
  	cin>>y;
  	balance-=y;
  	cout<<"your remaning balanace is:"<<balance;
  	cout<<"\n";
  	
  }

   void bank::display(){
	cout<<"name:";
	puts(Name_depositor);
    cout<<"Know balance amount in the acount:"<<balance;
}

#include<iostream>
#include"decl.h"
using namespace std;

void bank::details(){
	cout<<"Enetr the name of the depositor:";
	cin>>Name_depositor;
	
	cout<<"Enetr the account number:";
	cin>>account_number;
	
	cout<<"Enetr the account type:";
	cin>>account_type;
	
	cout<<"\nEnetr your account balance:";
	cin>>balance;
	
}

  void bank::deposit(int x){
  	cout<<"\nHow many amout do you want to deposit plz Enetr:";
  	cin>>x;
  	balance+=x;
  	cout<<"your amout is successfuly deposits:\n *****your new balance:"<<balance;
  	cout<<"\n\n";
  }
  
  void bank::withdraw(int y){
  	cout<<"***To withdarw money after *check* the balance:";
  	cout<<"\n***Your Balance is:"<<balance;
  	
  	cout<<"\n**How many amount do you want To withdraw:";
  	cin>>y;
  	balance-=y;
  	cout<<"your remaning balanace is:"<<balance;
  	cout<<"\n";
  	
  }

   void bank::display(){
	cout<<"name:";
	puts(Name_depositor);
    cout<<"Know balance amount in the acount:"<<balance;
}
