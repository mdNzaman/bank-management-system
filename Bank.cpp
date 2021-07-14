//  BANK MANAGEMENT SYSTEM

#include <iostream>

using namespace std;

class bank
{
	char name[100],add[100],y;
	int balance;

public:
	void open_account();
	void Deposite_money();
	void Withdraw_money();
	void Diplay_account();
}; 
void bank::open_account(){

	cout<<"enter your full name :: ";
	cin.ignore();
	cin.getline(name,100);
	cout<<"enter your address :: ";
	cin.ignore();
	cin.getline(add,100);
	cout<<"what type of account you want to open saving(s) or current(c) :: ";
	cin>>y;
	cout<<"enter amount for Deposite :: ";
	cin>>balance;
	cout<<"your account is created \n";
}

void Deposite::Deposite_money(){
	int a;
	cout<<"enter how much you deposit :: ";
	cin>>a;
	cout<<"total amount you deposite :: \t"<< balance;
}

void bank::Diplay_account(){
	cout<<"your full name :: "<<name;
	cout<<"your address :: \t "<<add;
	cout<<type of account that you open :: \t <<y;
	cout<<"amount you deposit :: \t "<<balance;

}
void bank::Withdraw_money(){
	float amount;
	cout<<"\n Withdraw :: ";
	cout<<"enter amount to Withdraw :: ";
	cin>>amount;
	balance-=amount;
	cout<<"now total amount is left  :: "<<balance;
}



}
int main()
{
	int ch,x;
	bank obj;
	do{
	cout<<"1) Open account \n";
	cout<<"2) Deposite money \n";
	cout<<"3) Withdraw money \n";
	cout<<"4) Display  account \n";
	cout<<"5) Exit";
	cout<<"select the option from above \n";
	cin>>ch;
	switch(ch)
	{
		case 1:<<"1) Open account \n";
		obj.open_account();
		break;
		case 2:"2) Deposite money \n";
		obj.Deposite_money();
		break;
		case 3:"3) Withdraw money \n";
		obj.Withdraw_money();
		break;
		case 4:"4) Display  account \n";
		obj.Diplay_account();
		break;
		case 5:
		if(ch==5){
			exit(1);
		}
	    default: cout<<"this is not exist try again ";
	}
cout<<"\n do you want to select next option then press :: y \n";
cout<<"if you want to exit then press :: N ";
x=getch();
if(x=='n' || x=='N')
exit(0);

}while(x=='y' || x=='Y');

	return 0;

}