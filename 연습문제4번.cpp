#include<iostream>

using namespace std;

int main() {
	cout << "프로그램을 종료하려면 암호를 입력하세요."<<endl;
	while (true)
	{
		char a[20];
		cin >> a;
		char b[20]="C++";
		
		if (strcmp(a, b) == 0)
		{
			
			cout << "프로그램을 정상적으로 종료합니다.";
		}
		else {
			cout << "암호가 틀립니다.";
		}
	}
	
	

	
}