#ifndef BANK_H
#define BANK_H
#include <iostream>
#include <string>
#include <map>


using namespace std;

class Bank
{
	private:
		string m_firstName{""};
		string m_lastName{""};
		double m_balance{0};
		
	public:
		Bank();
		Bank(string fName, string lName);
		~Bank();
		
		void transferBalance(Bank &user);
		void showMenu();
		void displayUser();
		void transaction();
		void checkBalance();
		double makeDeposit();
		double makeWithdraw();
		
		

};

#endif