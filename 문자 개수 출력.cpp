#include<iostream>

using namespace std;

int main() {
	cout << "���ڵ��� �Է��϶�(100�� �̸�)."<<endl;

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
	cout << "x�� ������" << a;

}