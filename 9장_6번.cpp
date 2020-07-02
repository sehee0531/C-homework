#include<iostream>

using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack :public AbstractStack {
	int *x;
	int top;
	int size1;
public:
	IntStack(int s) {
		size1 = s;
		x = new int[size1];
		top = -1;

	}
	bool push(int n) {
		if (top + 1 <= size1) {
			x[++top] = n;
			return true;
		}
		return false;
	}
	bool pop(int& n) {
		if (top + 1 > 0) {
			n=x[top--];
			return true;
		}
		return false;

	}
	int size() {
		return size1;

	}
	void show() {

		for (int i = 0; i < (top + 1); i++) {
			cout << x[i] << " ";
		}
		cout << endl << endl;

	}
};

int main() {
	IntStack s(10);
	s.push(10);
	s.push(20);
	s.show();
	int n;
	if (s.pop(n)) {
		cout << n << "이 팝 되었습니다."<<endl;
	}
	s.show();
	cout << "전체 스택의 크기는" << s.size() << endl;

}