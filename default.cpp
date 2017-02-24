using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int divide(int a, int b = 2)
{
	int r;
	r = a / b;
	return r;
}

int main(){
	//default values
	cout << divide(12);
	// returns 2 because in divide function, default of b is 2
	cout << endl;
	cout << divide(20, 4);
	// gives 5 -> 20 / 4

	system("PAUSE");
	
	return 0;
}
