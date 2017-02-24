#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

void duplicate(int& a, int& b, int&c)
{
	a *= 2;
	b *= 2;
	c *= 2;
}

void duplicate1(int a1, int b1, int c1){
	a1 = 2;
	b1 = 2; 
	c1 = 2;
}

int main(){

	// pass by reference -> returns 2, 6, 14
	int x = 1, y = 3, z = 7;
	duplicate(x, y, z);
	cout << "x=" << x << ", y=" << y << ", z=" << z;

	// not pass by reference -> would return 1, 3, 7 
	int x1 = 1, y1 = 3, z1 = 7;
	duplicate1(x1, y1, z1);
	cout << "x=" << x1 << ", y=" << y1 << ", z=" << z1;

	system("PAUSE");
	
	return 0;
}
