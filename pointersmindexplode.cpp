#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main(){

	int firstvalue = 5, secondvalue = 15; 
	int *p1,  *p2;

	p1 = &firstvalue;
	p2 = &secondvalue;
	*p1 = 10;
	*p2 = *p1;

	p1 = p2;
	*p1 = 20;

	cout << "firstvalue is " << firstvalue << endl; // it's actually the opposite of what you'd expect
	// -> firstvalue is 10 
	// -> and secondvalue is 20
	cout << "secondvalue is " << secondvalue << endl;

	system("PAUSE");
	
	return 0;
}

