#include<iostream>
#include"decl.h"
using namespace std;
int main()

{   
   
    bank obj;

	int a,b,PIN; 
	cout<<"ENTER THE PIN FOR OPEN THE ACCOUNT:";
	cin>>PIN;
	if(PIN==2004)
	{
       cout<<"***********************WELCOME to my account!****************\n";
       
	   cout<<"\n"<<endl;
	   
	   do{
	   
	  cout<<"**for acount holder detail press 1 ***"<<endl;	
      cout<<"***For Bank details press 2 *** "<<endl;
	  cout<<"***for deposit press 3 ***"<<endl;
	  cout<<"***for withdraw press 4 *** "<<endl;
	   cout<<"***for display current Balance in Acount 5 ***"<<endl;
	    cout<<"*** After the transiction Dates 6 ***"<<endl;
	  cout<<"***for exit the acount 7 ***"<<endl;
	 
	 
      
      
       cout<<"Enetr YOUR CHOISE"<<endl;
       int press;
	   cin>>press;
       switch(press)
	   {
       	
        case 1:
		    obj.a_h_d_show();
            obj.a_h_d_display();
		  break;
		  
      	case 2:
       	  obj.details();
       	break;
       	
       	case 3:
       	  obj.deposit(a);
       		break;
       		
       	case 4:
       		obj.withdraw(b);
       		 break; 
       		 
	    case 5:
		 	 obj.display();
			break;
		case 6:
		    obj.s_time();
		    obj.g_time();	
			  	
		case 7:
		exit(0);
		 	 		 		
	  }
    }
	  while(1);


       
//         obj.details();
//	     obj.deposit(a);
//	     obj.withdraw(b);
//	    


   
     } 
   else
	{
	cout<<"*****SORRY you entered the INCORRECT PASSWORD!** **** PLEASE TRY AGAIN***sOOOOOrrryyy!"<<endl;
	cout<<"\n"<<endl;
	main();
       }
		return 0;
	
}


