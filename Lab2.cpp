#include "Lab2.h"
#include <iostream>
#include <string>
using namespace std;

#include "Lab2.h"
#include <iostream>
#include <string>

using namespace std;

Character::Character()
{
	double tendency = 0.0;
	int health = 100;
}

string Character::getName(string name)
{
	cout << "What is the Character's Name?" << endl;
	cin >> name;
	return name;
}

void Character::setHeight(int height)
{
	cout << "What is your character's height?" << endl;
	cin >> height;
}
void Character::setWeight(int weight)
{
	cout << "What is your character's weight? " << endl;
	cin >> weight;
}
int Character::heal(int health)
{
	int percent;
	cout << "By what percentage do you want to heal?" << endl;
	cin >> percent;
	health = health + (percent * 100);
	return health;
}
int Character::injure(int health)
{
	int percent;
	cout << "How much did you get injured by?" << endl;
	cin >> percent;
	health = health - (health * percent);
	return health;
}
double Character::takeAction(double tendency)
{

	return tendency;
}
void Character::displayAttributes(int height, int weight, string name, int health)
{
	cout << "Your characters name is: " << name << endl;
	cout << "Your characters height is: " << height << endl;
	cout << "Your characters weight is: " << weight << endl;
	cout << "Your characters health is: " << health << endl;
}

//CombatCharacter
void CombatCharacter::useWeapon(int health, int tendency, int weapon_strength)
{
	if (health == 0 || weapon_strength == 0)
	{
		cout << "You cannot use your weapon!" << endl;
	}
	else
	{
		cout << "You use your weapon!" << endl;
		health = health - 5;
		weapon_strength = weapon_strength - 1;
		tendency = tendency - 0.2;
	}
}
void CombatCharacter::getAttacked(int shield_strength, int health)
{
	cout << "You've been attacked!" << endl;
	if (shield_strength == 0)
		health = health - (health * .15);
	else
		shield_strength = shield_strength - 1;
}
void CombatCharacter::saveAnotherCharacter(int tendency, int health, int shield_strength)
{
	if (health == 0)
	{
		cout << "You cannot save another character!" << endl;
	}
	else
	{
		tendency = tendency + 0.2;
		health = health * .05;
	}
}
void CombatCharacter::reloadWeapon(int weaponStrength, int tendency, int health)
{
	if (health == 0)
	{
		cout << "You cannot reload your weapon" << endl;
	}
	else
	{
		tendency = tendency - 0.1;
		weapon_strength = weapon_strength + 1;
	}
}
void CombatCharacter::noHealth(int health)
{
	cout << "Your health is: " << health << endl;
}
int CombatCharacter::getShieldStrength(int shield_strength)
{
	cout << "What is your shield's strength? Enter between 1 and 10." << endl;
	cin >> shield_strength;
	if (shield_strength < 1 || shield_strength > 10)
	{
		cout << "Enter a number between 1 and 10" << endl;
		cin >> shield_strength;
	}
	return shield_strength;
}
int CombatCharacter::getWeaponStrength(int weapon_strength)
{
	cout << "What is your weapon's strength? Enter between 1 and 10." << endl;
	cin >> shield_strength;
	if (weapon_strength < 1 || weapon_strength > 10)
	{
		cout << "Enter a number between 1 and 10" << endl;
		cin >> weapon_strength;
	}
	return weapon_strength;
}
string CombatCharacter::shieldName(string shield_name)
{
	cout << "What is your shield's name?" << endl;
	cin >> shield_name;
	return shield_name;
}
string CombatCharacter::weaponName(string weapon_name)
{
	cout << "What is your weapon's name?" << endl;
	cin >> weapon_name;
	return weapon_name;
}