#include<iostream>

using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) return true;
	else {
		big = (a > b) ? a : b;
		return false;
	}
}

int main() {
	int a, b, big;
	cout << "2���� ������ �Է��ϼ���. ";
	cin >> a >> b;
	if (bigger(a, b, big)) {
		cout << "�� ���� �����ϴ�";
	}
	else
	{
		cout << "�� ū�� " << big;
	}
	
	
}