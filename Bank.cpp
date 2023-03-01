#include "Bank.h"


void Bank::transaction() {
	displayUser();
	int option = 0;
	do {
		showMenu();
		cin >> option;
		system("cls"); // clears console.
		
		switch (option) {
			case 1:
				checkBalance();
				break;
			case 2:
				makeDeposit();
				break;
			case 3:
				makeWithdraw();
				break;
			case 4:
				break;
			default:
				cout << "Option not recoginzed, Try again.." << endl;			
		}
	}
	while(option != 4);
}

//default constructor
Bank::Bank() {
	cout << "Enter First Name" << endl;
	cin >> m_firstName;
	cout << "Enter Last Name" << endl;
	cin >> m_lastName;
}

Bank::Bank(string fName, string lName) : m_firstName(fName), m_lastName(lName) {
}

//deconstructor
Bank::~Bank(){}

void Bank::showMenu() {
	cout << "********MENU********" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout <<	"4. EXIT" << endl;
	cout << "********************" << endl;
}

void Bank::displayUser() {
	cout << "Hello " << m_firstName << " " << m_lastName << endl;
}

void Bank::checkBalance() {
	cout << m_firstName << ": Total Balance: " << m_balance << endl;
}

double Bank::makeDeposit() {
	double deposit = 0;
	cout <<  m_firstName <<": Enter deposit amount: ";
	cin >> deposit;
	
	return m_balance += deposit;

}

double Bank::makeWithdraw() {
	double withdraw = 0;
	cout << "Enter withdraw amount: ";
	cin >> withdraw;
	if (withdraw <= m_balance) {
		return m_balance -= withdraw;
	} else {
		cout << "Insuffient Funds" << endl;
		return 0;
	}
	return 0;
}

void Bank::transferBalance(Bank &user) {
	double deposit = 0;
	cout <<  m_firstName << ": Enter transfer amount: ";
	cin >> deposit;
	if (deposit < m_balance) {
		m_balance -= deposit;
		user.m_balance += deposit;
	} else {
		cout << "Transfer amount " << deposit << ", denied due to insuffient funds" << endl;
	}

}



