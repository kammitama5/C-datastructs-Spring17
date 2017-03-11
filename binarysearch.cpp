#include <string>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


int main()
{
  // make a sorted vector!
	vector <int> vec1 = {2, 4, 6, 8, 10, 12, 14}; 
	int size = vec1.size(); // 7
	int num;
	bool found;
	cout << "Please enter the number you wish to find " << endl;
	cin >> num;
	cout << "You chose " << num << endl;

	int low = 0;
	int high = size - 1;
	int mid;
	
	while (low <= high)
	{
	  mid = (low + high) / 2;
	  if (num == vec1[mid]){
	    cout << "Item found at position " << (mid + 1);
	    exit(0);
	  }
	  else if (num > vec1[mid]){
	    low = mid + 1;
	  }
	  else{
	    high = mid - 1;
	  }
	}
	
	cout << "Number not found." << endl;
	return 0;
}

