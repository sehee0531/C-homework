#include<iostream>

using namespace std;

int main() {

    char a[100];
	char b[100];

	cout << "�� ��ȣ�� �Է��ϼ��� >>";
	cin >> a;
	cout << "�� ��ȣ�� �ٽ� �ѹ� �Է��ϼ��� >>";
	cin >> b;

	if (strcmp(a,b)==0)
	{
		cout << "�����ϴ�.";
	}
	else
	{
		cout << "���� �ʽ��ϴ�.";
	}

}