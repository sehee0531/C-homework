#include<iostream>

using namespace std;

int main() {
	while (true)
	{


		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";

		char a[100];
		cin.getline(a, 100, '\n');

		char b[100] = "yes";
		if (strcmp(a, b) == 0)
		{
			cout << "�����մϴ�";
			break;
		}
	
	}

	
}