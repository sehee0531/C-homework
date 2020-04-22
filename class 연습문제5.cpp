#include<iostream>

using namespace std;

class coffeemachine {
public:
	coffeemachine(int a, int b, int c); 
	int balance;
	int coffee;
	int sugar;
	int water;
	int drinkespresso();
	int drinkamericano();
	int drinksugarcoffee();
	int show();
	int fill();
};

coffeemachine::coffeemachine(int a, int b, int c)
{
	coffee = a;
	water = b;
	sugar = c;
}
int coffeemachine::drinkespresso() {
	return coffee=coffee - 1, water=water - 1;

}
int coffeemachine::drinkamericano() {
	return coffee=coffee - 1, water=water - 2;

}
int coffeemachine::drinksugarcoffee() {
	return coffee=coffee - 1, water=water - 2, sugar=sugar - 1;

}
int coffeemachine::show() {

	cout << "커피 머신 상태," << "      " << "커피:" << coffee << "       " << "물:" << water << "       " << "설탕:" << sugar << endl;
	return coffee, sugar, water;

}
int coffeemachine::fill() {
	
	return coffee = 10, water = 10, sugar = 10;

}

int main() {
	coffeemachine java(5, 10, 3);
	java.drinkespresso();
	java.show();
	java.drinkamericano();
	java.show(); 
	java.drinksugarcoffee();
	java.show();
	java.fill();
	java.show();
}
