#include<iostream>
using namespace std;
double balance = 0;
int depositmoney;
int withdrawmoney;
int option;
// show , checkbalance,deposite , withdraw,exit
void show() {
    cout<<"************MENU************"<<endl;
	cout << "1.Check Balance "<<endl;
	cout << "2.Deposit " << endl;
	cout << "3.Withdraw " << endl;
	cout << "4.Exit " << endl;

}
void checkbalance() {
	cout << "balance: " << balance<<"$"<<endl;

	}
void deposit() {
	cout << "Enter Amount: ";
	cin >> depositmoney;
	balance += depositmoney;
	cout<<"Amount succesfully deposited"<<endl;
}
void withdraw() {
	cout << "Enter Amount: ";
	cin >> withdrawmoney;
    if (withdrawmoney<=balance)
    {
         balance = balance-withdrawmoney;
         cout<<"Amount succesfully Withdrawed"<<endl;
    }else{
        cout<<"Not Enough Money"<<endl;
    }
}

int main() {
	//check balance,deposit,withdraw,show menu
	 do{
        show();
	cout << "Option: ";
	cin >> option;
	system("cls");
	switch (option) {
	case 1: checkbalance(); break;
	case 2: deposit();break;
    case 3: withdraw();
	}
    }while(option!=4);

	
	system("pause>0");
}
