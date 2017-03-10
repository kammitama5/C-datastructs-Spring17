#include <math.h>

using namespace std;


int main()
{
	int n;
	int x;
	int product = 1;
	cout << "Please enter a value for x: ";
	cin >> x;
	cout << "Please enter a value for n: ";
	cin >> n;

	if (n == 0){
		cout << " Total is 1 " << endl;
	}

	else{
		for (int i = 0; i < n; i++){
			
			product = product * (pow(x, i));
		}

		cout << "Total is: " << product;

	
	}
	

	// x = 2, n = 2 = total should be => 2^0 * 2^1 => 2
	// x = 3, n = 3 => total should be => 3^0 * 3^1 * 3^2 = 1 * 3 * 9 = 27

	system("PAUSE");
	return 0;
} 