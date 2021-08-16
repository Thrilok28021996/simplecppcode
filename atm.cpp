# include <iostream>
using namespace std;


void showMenu(){
	cout << "**********Menu**********" << endl;
	cout << "1.check balance" << endl;
	cout << "2.deposit" << endl;
	cout << "3.withdraw" << endl;
	cout << "4.exit" << endl;
	cout << "************************" << endl;
}

int main()
{

	// check balance, deposit, withdraw, show menu.
	int option;
	double balance=500;

	do{
	showMenu();
	cout << "option:";
	cin >> option;
	system("clear");

	switch(option){
		case 1: cout << "Balance is:" << balance << "$" << endl;break;
		case 2: cout << "Deposit amount: ";
				double depositAmount;
				cin >> depositAmount;
				balance += depositAmount;
				break;
		case 3: cout << "withdraw amount: ";
				double withdrawAmount;
				cin >> withdrawAmount;
				if (withdrawAmount <= balance)
					balance -= withdrawAmount;
				else
					cout << "Not enough amount" << endl;
				break;
	}
}while(option!=4);

	return 0;
}