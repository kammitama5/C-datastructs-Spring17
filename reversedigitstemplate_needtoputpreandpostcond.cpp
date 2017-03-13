#include <iostream>
#include <cmath>
#include <vector>

int reverseDigits(int);

using namespace std;

int main(){
	// reverseDigits
	// write a recursive function that takes an integer as an argument
	// and returns that integer with the digits reversed. 
	// The function is REQUIRED to take an integer as an argument 
	// You do not need and should NOT have a template for this one

	int n;
	int ans;

	cout << "Please enter a number to be reversed (ie at least one digit)" << endl;
	cin >> n;
	
	cout << reverseDigits(n) << endl;


	system("PAUSE");
	return 0;
}

int reverseDigits(int x)
{
	return x; // returned x reversed
}