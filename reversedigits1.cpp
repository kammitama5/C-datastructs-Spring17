#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <sstream>

int reverseDigits(int);

using namespace std;

int main(){
	// reverseDigits
	// write a recursive function that takes an integer as an argument
	// and returns that integer with the digits reversed. 
	// The function is REQUIRED to take an integer as an argument 
	// You do not need and should NOT have a template for this one

	// pre-conditions: n (number chosen) is an int that is positive and at least 1 digit long
	int n;
	int ans;

	cout << "Please enter a number to be reversed (ie at least one digit)" << endl;
	cin >> n;

	//cout << reverseDigits(n) << endl;


	system("PAUSE");
	return 0;
}

int reverseDigits(int x)
{
	
	string numstring = to_string(x);
	int size = numstring.size();

	if (size == 1){
		return x;
	}
	else{
		//reverse recursively
		
		
	}
	return 0; // returned x reversed
}