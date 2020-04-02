#include<iostream>

using namespace std;

int main() {

    char a[100];
	char b[100];

	cout << "새 암호를 입력하세요 >>";
	cin >> a;
	cout << "새 암호를 다시 한번 입력하세요 >>";
	cin >> b;

	if (strcmp(a,b)==0)
	{
		cout << "같습니다.";
	}
	else
	{
		cout << "같지 않습니다.";
	}

}