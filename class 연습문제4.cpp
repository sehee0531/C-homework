
#include<iostream>
#include<string>

using namespace std;

class account
{
public:
	int id;
	string name;
	int balance;
	account(string a, int b, int c);
	string getowner();
	int deposit(int first);
	int withdraw(int second);
	int inquiry();
};

account::account (string a, int b, int c)
{
	name = a;
	id = b;
	balance = c;
}

int account::deposit(int first) {
	return balance = balance + first;
	

}

string account::getowner() {
	return name;
}

int account::inquiry() {
	return balance;
}

int account::withdraw(int second) {
	return balance = balance - second;
	
}

int main() {
	account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getowner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getowner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;

}
