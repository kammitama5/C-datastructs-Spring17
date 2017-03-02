#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int factorial(int x){
	if (x == 1){
		return 1;
	}
	else{
		return x * factorial(x - 1);
	}
	
	
}

int main()
{
	
	cout << "5! " << factorial(5) << endl; // prints 120
	cout << "10! " << factorial(10) << endl; // prints...something 3628800
	cout << "1! " << factorial(1) << endl; // prints base case 1

	system("PAUSE");
	return 0;
}