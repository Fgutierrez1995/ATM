#include <iostream>
#include "Bank.h"
using namespace std;



int main() {
	
	Bank user1("Bob", "Smith");
	Bank user2("Kylie", "Gunter");
	user1.transaction();
	user2.transaction();
	user1.transferBalance(user2);
	user1.checkBalance();
	user2.checkBalance();
	
	return 0;
}