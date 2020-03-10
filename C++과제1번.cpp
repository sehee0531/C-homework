#include<iostream>

using namespace std;

int main() {
	int a = 1;
	while (a <=100)
	{
		cout << a << "\t";
		if (a % 10 == 0)
		{

			cout << endl;
		}
		a++;
	}
}
