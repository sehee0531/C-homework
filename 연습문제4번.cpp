#include<iostream>

using namespace std;

int main() {
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���."<<endl;
	while (true)
	{
		char a[20];
		cin >> a;
		char b[20]="C++";
		
		if (strcmp(a, b) == 0)
		{
			
			cout << "���α׷��� ���������� �����մϴ�.";
		}
		else {
			cout << "��ȣ�� Ʋ���ϴ�.";
		}
	}
	
	

	
}