/*
#include<iostream>

using namespace std;

class rectangle
{
public:
	int width;
	int height;
	rectangle();
	rectangle(int r);
	rectangle(int s, int n);
	double issquare();
};

rectangle::rectangle()
{
	width = 3;
	height = 7;
}

rectangle::rectangle(int r) {
	width = r;
	height = r;
}

rectangle::rectangle(int s, int n)
{
	width = s;
	height = n;
}

double rectangle::issquare() {
	
	if (width == height)
	{
		
		cout << "���簢�� �̴�" << endl;
	}
	else 
	{
		cout << "���簢���� �ƴϴ�."<<endl;
	}

	return width, height;
}
int main() {
	rectangle rect1;
	rectangle rect2(3, 5);
	rectangle rect3(3);

	rect1.issquare();
	rect2.issquare();
	rect3.issquare();

}
*/