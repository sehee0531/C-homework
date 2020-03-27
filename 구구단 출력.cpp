#include<iostream>
using namespace std;

int main() {
	
	int sum = 1;
	for (int s = 1; s <= 9; s++)
	{
		for (int a = 1; a <= 9; a++)
		{
			
			sum = s * a;
			cout << a << "X" << s << "=" <<sum<<"\t";
		}
		cout << endl;
	}
}