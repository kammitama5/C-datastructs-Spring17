#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

bool isUpperCase(string);

int main(){

	/*
	3. Write a recursive grammar for the language of strings of one or more letters.
	The first letter of each string must be uppercase, and all the other letters
	in the string must be lowercase
	*/
	cout << "Please pick what you would like to do " << endl;
	cout << endl;
	cout << "1. Check if string is legitimate via UpperCase first letter." << endl;
	cout << endl;
	cout << "2a. Check a string in the XY language." << endl;
	cout << endl;
	cout << "2b. See all possible two-character strings for the XY language." << endl;
	cout << endl;
	cout << "3a. See all three letter strings in the dot-dash language" << endl;
	cout << endl;
	cout << "3b. See if ....-- is in the dot-dash language" << endl;
	cout << endl;
	cout << "4. See if +*a-b/c++de-fg is a prefix expression? " << endl;
	cout << endl;
	cout << "5. Quit" << endl;
	cout << endl;

	char letter;
	string lang;

	// if the first letter of each string is uppercase, the string is legitimate

	// otherwise no

	cout << isUpperCase("Potato") << endl;
	cout << isUpperCase("potato") << endl;


	/*
	5. Consider a language of strings that contains only Xs, Ys and Zs.
	A String in this language must begin with an X.
	If a Y is present in a string, it must be the final character of the string.

	a. Write a recursive grammar for this language
	b. Write all the possible two-character-strings for this language
	*/

	/*
	6. Consider a language of words, where each word is a string of dots and
	dashes. The following grammar describes this language:
	<word> = <dot>|<dash><word>|<word><dot>
	<dot> =
	<dash> = -

	a. Write all three-character strings that are in this language
	b. Is the string ....-- in this language? Explain
	*/

	/*
	10. Is +*a-b/c++de-fg a prefix expression? Explain in terms of the grammar
	for prefix expressions.

	*/
	

	system("PAUSE");
	return 0;
}

bool isUpperCase(string){

	//blah blah

	return false;
}
