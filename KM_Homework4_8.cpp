//CSIS 211
//Krystal Maughan
//Homework 4 -> 8

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	// 8.  This should be a function we could add to the ArrayBag
	// not the recursive or resizable one the regular one) that would remove
	// a random entry from the bag. So it removes any random entry.

	// remove random entry from bag


    // take Array Bag
	// change to vector
	//check if bag is full or empty
	//if bag is empty, return "bag is empty"
	//else, check size of bag
	//check if it contains a random item
	// if it is, remove that item 
	// validate the new size of bag is one less than before (ie item was removed)

	int num;
	
	vector <int> bagvect = { 1, 2, 3, 4, 5, 6, 7 };
	vector<int>::iterator indexnum;
	cout << bagvect.size()  << endl; // returns 7, so bag is not empty
	cout << "Pick a number. If it is included in the bag, I'll remove it!" << endl;
	cin >> num;
	// find index of that number
	
	indexnum = find(bagvect.begin(), bagvect.end(), num);

	if (indexnum != bagvect.end()){
		cout << "Your number was found at : " << *indexnum << endl;
		bagvect.erase(bagvect.begin() + (num - 1));
	}
	else{
		cout << "YOur number is not in the bag" << endl;
	}

	cout << "The size of the bag is now " << bagvect.size() << endl;
	
	//9. This should be a function we could add to the ArrayBag
	// not the recursive or resizable one the regular one). It should be 
	// a constructor that takes an array as an argument and creates an ArrayBag.
	// You can assume the arraysize is less than the maximum size allowed for the bag

	// creates ArrayBag from array
	// check if bag is empty
	// if bag is not empty, check size of bag
	// std vector to array -> for each item...create item in bag

	
	system("PAUSE");
	return 0;
}