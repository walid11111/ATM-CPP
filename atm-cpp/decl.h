#include<iostream>
using namespace std;

class bank{
	private:
	char Name[20];
    int account_number;
	char account_type[15];
	int balance;
	
struct acount_holder{
	char name[20];
	char adress[15];
    int contact_no;
} a1;

struct date{
	int day;
	int month;
	int year;
} a2;

	public:
	
		void a_h_d_show();     //Account holder detail input
		void a_h_d_display();   //Aount holder detail output
		void details();         // its Bank account detail::: like bank name and so on and balance 
		void deposit(int x);
		void withdraw(int y);
		void display();          // its just for current balance
		         
		void s_time();     // for time input
		void g_time();     // for time output
		          			
		
};


