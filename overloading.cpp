#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int operate(int a, int b)
{
	return a * b;
}

float operate(float a, float b)
{
	return (a * b) + (a * a * b);
}

int main(){
	
	int x = 5, y = 33; 
	float n = 34.0, m = 2.5;

	cout << operate(x, y) << endl; // -> 165 (5 * 33) 
	cout << operate(n, m) << endl; // -> 2975 ( 85 + 2890)

	system("PAUSE");
	
	return 0;
}





