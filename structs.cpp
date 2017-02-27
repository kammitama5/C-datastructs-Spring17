//structs baby
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class CRectangle {
	int x, y;
public:
	void set_values(int, int);
	int area() { return (x * y); }
};

void CRectangle::set_values(int a, int b){
	x = a;
	y = b;
}

int main() {
	CRectangle rect, recta;
	rect.set_values(3, 4);
	recta.set_values(2, 10);
	cout << "Rectangle one area: " << rect.area() << endl;
	cout << "Rectangle two area: " << recta.area() << endl;
	system("PAUSE");
	return 0;
}

