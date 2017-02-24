#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main(){

	int firstvalue, secondvalue;
	int * mypointer;

	mypointer = &firstvalue;
	*mypointer = 10;
	mypointer = &secondvalue;
	*mypointer = 20;
	cout << "first value is " << firstvalue << endl; // first is 10
	cout << "second value is " << secondvalue << endl; // second is 20

	system("PAUSE");
	
	return 0;
}

