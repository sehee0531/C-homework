/*#include<iostream>

using namespace std;

class Circle {
	int radius;
public:

	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getarea();
};

double Circle::getarea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	cout << donut.getarea() << endl; //°´Ã¼ ÀÌ¸§À¸·Î ¸â¹ö Á¢±Ù
	Circle *p;
	p = &donut;
	cout << p->getarea() << endl;
	cout << (*p).getarea() << endl;

	p = &pizza;
	cout << p->getarea() << endl;
	cout << (*p).getarea() << endl;


}
*/