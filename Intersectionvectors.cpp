#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	//this programme calculates the intersection of two vectors 
	//using for loops
	vector <int> myVector = { 1, 2, 3, 4 }; // myVector1
	vector <int> myVector2 = { 2, 3, 4, 6 }; //myVector2
	vector <int> myVector3 = {};

	myVector.push_back(10);

	// if item in vector == item in vector2, push to vector3

	for (unsigned int i = 0; i < myVector.size(); i++){
		for (unsigned int j = 0; j < myVector2.size(); j++){
			if (myVector[i] == myVector2[j]){
				 myVector3.push_back(myVector[i]);
			}
		}
		
	}

	// loop through vector 3 -> pushed intersected values of vec1 and vec2

	for (unsigned int a = 0; a < myVector3.size(); a++){
		cout << myVector3[a] << " "; // prints 2 3 4
	}

	system("PAUSE");
	return 0;

}