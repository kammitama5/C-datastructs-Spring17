#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#define WIDTH 5 
#define HEIGHT 3

int jimmy[HEIGHT * WIDTH];
int n, m;

int main(){

	for (n = 0; n < HEIGHT; n++){
		for (m = 0; m < WIDTH; m++){
			jimmy[n * WIDTH + m] = (n + 1) * (m + 1);
			cout << jimmy[n] << " " << jimmy[m] << endl;
			// prints 11 12 13 14 15 21 22 23 24 25 31 32 33 34 35
		}
	
	}


	cout << "Print Array " << jimmy << endl; // arbitrary memory space garbage garbage
	system("PAUSE");
	
	return 0;
}

