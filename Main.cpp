#include <iostream>
#include <vector>
#include <algorithm>
#include "Node.h"
#include "BagInterface.h"
#include "LinkedBag.h"

int main(){

	int array1[] = { 1, 2, 3, 4, 5, 6};
	int array2[] = { 2, 4, 6, 8, 10};
	int choice;
	vector<int> v(10);
	vector<int>::iterator iter;

	sort(array1, array1 + 5);
	sort(array2, array2 + 5);

	do{
		cout << "Pick a number " << endl;
		cout << "1. Union of two bags" << endl;
		cout << "2. Intersection of two bags" << endl;
		cout << "3. Quit" << endl;
		cin >> choice;

	
		// Union
		if (choice == 1){
			cout << "You picked union!" << endl;
			cout << " The union of the two bags is " << endl;
			iter = set_union(array1, array1 + 5, array2, array2 + 5, v.begin());
			v.resize(iter - v.begin());
			for (iter = v.begin(); iter != v.end(); iter++)
			{
				cout << ' ' << *iter << endl;
			}

		}
		// Intersection
		else if (choice == 2){
			cout << "You picked intersection!" << endl;
			cout << "The intersection of the two bags is " << endl;
			iter = set_intersection(array1, array1 + 5, array2, array2 + 5, v.begin());
			v.resize(iter - v.begin());
			for (iter = v.begin(); iter != v.end(); ++iter)
			cout << ' ' << *iter << endl;
		
	
		}
		else if (choice == 3){
			cout << "You've chosen to quit " << endl;
			system("PAUSE");
			return (0);
		}

		else{
			cout << "Not a valid option. Try again " << endl;
		}

	} while ((choice != 3));


	system("PAUSE");

	return 0;
}