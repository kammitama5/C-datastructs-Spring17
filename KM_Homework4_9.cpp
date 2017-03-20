//CSIS 211
//Krystal Maughan
//Homework #4 -> 9

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>


using namespace std;

int main(){

	//9. This should be a function we could add to the ArrayBag
	// not the recursive or resizable one the regular one). It should be 
	// a constructor that takes an array as an argument and creates an ArrayBag.
	// You can assume the arraysize is less than the maximum size allowed for the bag

	// creates ArrayBag from array
	// You start with a known element -> an array
	// You can then find size of array 
	// Take each element of the array and add it to the Bag
	// Check that bag now has number of arrays of bag
	// if you want to be more precise, you can check that each item 
	// from array is both contained in the new bag (using contains), and that
	// its frequency is once 
	// You probably couldn't assume that the order remains the same, even though adding them
	// one at a time.

	// check if bag is empty

	char array[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' }; // 7 items in char array
	int sizearray = sizeof(array);
	cout << "The size of the given array is " << sizearray << endl; // prints 7
	
	//bag to vector 
	vector <char> newBag;
	cout << "Size of new bag is  " << newBag.size() << endl; 

	// for every item in char, filter to newBag using push_back
	for (unsigned int i = 0; i < sizearray; i++){
		newBag.push_back(array[i]);
	}

	cout << "Size of new bag is now " << newBag.size() << endl;

	system("PAUSE");
	return 0;
}
