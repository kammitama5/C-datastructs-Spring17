#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;


int main(){

	/*
	Create Character Data type (base class)
	class should have one constructor and should begin with neutral tendency and 100%  health
	name, height and weight of character should be initialized by client programme.
	ADT -> contains character -> name, height, weight, tendency, health
	tendency -> how good or bad -> -1.0 to 1.0
	health -> 0.0 to 100.0
	
	class should have->
	a. heal b.injure c.takeAction d. get and set methods for weight and height
	e. get method for name f. only have get methods for health and tendency
	g. displayAttributes -> displays all information about character
	   -> name, height, height, weight, tendency and health
	*/

	/*
	Create CombatCharacter class (derived class?)
	a. useWeapon -> use weapon but decreases health by 5 percent
	decreases weapon strength by 1, decreases tendency by 0.2. 
	Do not let character use their weapon if their weapon strength is 0 or their health is 0.

	b.getAttacked -> called when character is attacked. Decreases character's shield strength by 1.
	If character's shield strength is 0, this method should decrease the character's health 
	by 15 percent. 
	c.saveAnotherCharacter -> this method increases the character's tendency by 0.2 and increases 
	their health by 5%. This method also increases the character's shield strength by 1.
	Do not let the character save another if their health is zero
	d. reloadWeapon -> this method increases the character's weapon strength by 1 but 
	decreases their tendency by 0.1. Do not let the character reload their weapon if their health is 
	zero.
	e. noHealth-> checks to see if a character has any health
	f. Overload the display attributes method of the base Character class:
	this method should do everything the base class method does (reuse) PLUS it should display
	the character's -> weapon name, weapon strength, shield name, shield string, and if the 
	character has no health it should display the character is dead (unfortunately).

	g. You will need set methods and get methods for weapon and shield name
	h. You should only have get methods for weapon strength and shield strength (no sets)
	*/

	system("PAUSE");
	return 0;

}






