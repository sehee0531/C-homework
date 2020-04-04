#include<iostream>

using namespace std;

int main() {
	while (true)
	{


		cout << "종료하고 싶으면 yes를 입력하세요>>";

		char a[100];
		cin.getline(a, 100, '\n');

		char b[100] = "yes";
		if (strcmp(a, b) == 0)
		{
			cout << "종료합니다";
			break;
		}
	
	}

	
}