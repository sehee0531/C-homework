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
	cout << "2개의 정수를 입력하세요. ";
	cin >> a >> b;
	if (bigger(a, b, big)) {
		cout << "두 수가 같습니다";
	}
	else
	{
		cout << "더 큰수 " << big;
	}
	
	
}