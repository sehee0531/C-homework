#include<iostream>

using namespace std;

int main() {
	cout << "문자열 입력 >>";
	char a[100];
	cin >> a;
	for (int i = 0; i <strlen(a); i++)
	{

		for (int j = 0; j <= i; j++)
		{

			cout << a[j];
		}
		cout << "\n";
	}
	
}