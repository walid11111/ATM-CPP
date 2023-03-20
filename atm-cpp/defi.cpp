#include<iostream>
#include"decl.h"
using namespace std;

void bank::a_h_d_show(){
	cout<<"Enter Your Name:";
	cin>>a1.name;
	cout<<"Enter the Adress:";
	cin>>a1.adress;
	cout<<"Enter the Contact Number:";
	cin>>a1.contact_no;
		system("pause");
	
}

void bank::a_h_d_display(){
		cout<<"*************"<<endl;
		cout<<"\n";
	cout<<"your name is :"<<a1.name<<endl;
	cout<<"your address Number :"<<a1.adress<<endl;
	cout<<"your contact number is :"<<a1.contact_no<<endl;
	system("pause");
	cout<<"\n";
}

void bank::details(){
	cout<<"Enetr the name of the Bank:";
	cin>>Name;
	
	cout<<"Enetr the account number:";
	cin>>account_number;
	
	cout<<"Enetr the account type:";
	cin>>account_type;
	
	cout<<"\nEnetr your account balance:";
	cin>>balance;
		system("pause");
	cout<<"\n";	
	
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
  		system("pause");
  	cout<<"\n";	
  	
  }

   void bank::display(){
//	cout<<"name:";
//	puts(Name);
    cout<<"Know balance amount in the acount:"<<balance<<endl;
    system("pause");
    cout<<"\n";
}

void bank::s_time(){
	cout<<"Enter the day:";
	cin>>a2.day;
	cout<<"Enter the month:";
	cin>>a2.month;
	cout<<"Enter the year:";
	cin>>a2.year;
}

void bank::g_time(){
	cout<<"time:  "<<a2.day<<"/"<<a2.month<<"/"<<a2.year<<endl;
}
//
//void bank::bank(){
//	cout<<"Enter the day:";
//	cin>>a2.day;
//	cout<<"Enter the month:";
//	cin>>a2.month;
//	cout<<"Enter the year:";
//	cin>>a2.year;
//}
//
//void bank::g_time(){
//	cout<<"time:  "<<a2.day<<"/"<<a2.month<<"/"<<a2.year<<endl;
//}
