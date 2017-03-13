#include <iostream>
#include <cmath>
#include <vector>

int recursivePower(int, int);

using namespace std;

int main(){
// recursive power: Write a recursive function
// recursivePower that computers a^n where a is a real number
// and n is a non-negative integer. This does not have to be a 
// function template. Make sure and write pre and post 
// conditions if they are needed

// Pre condition -> a is a real number but can be negative 
// n is a non-negative number (ie 0 and above)
	int a;
	int n; 
	int ans;

	cout << "Please enter a number, a, which is real" << endl;
	cin >> a;
	cout << "Please enter a number, n, which is non-negative (ie 0 and above) " << endl;
	cin >> n;
	cout << recursivePower(a, n) << endl;
	

	system("PAUSE");
	return 0;
}

int recursivePower(int x, int y)
{
	int ans = x + y;
	
	return ans; //x ^ y;
}