#include<iostream>

using namespace std;

int main() {
	cout << "문자들을 입력하라(100개 미만)."<<endl;

	int a = 0;
	char name[100];
	cin >> name;
	char b = 'x';
	for (int i = 0; i <= 100; i++)
	{
		if (name[i] == b)
		{
			a ++;
		}
	}
	cout << "x의 개수는" << a;

}