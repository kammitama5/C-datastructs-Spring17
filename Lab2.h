#pragma once
#ifndef LAB2_H
#define LAB2_h
#include <string>
using namespace std;

class Character
{
private: string name;
		 int height, weight, health;
		 double tendency;
public:
	Character();
	void setHeight(int height);
	void setWeight(int weight);
	string getName(string name);
	int heal(int health);
	int injure(int health);
	double takeAction(double tendency);
	void displayAttributes(int height, int weight, string name, int health);
};
class CombatCharacter : public Character
{
private:
	string weapon_name, shield_name;
	int shield_strength, weapon_strength;
public:
	void useWeapon(int health, int tendency, int weapon_strength);
	void getAttacked(int shield_strength, int health);
	void saveAnotherCharacter(int tendency, int health, int shield_strength);
	void reloadWeapon(int weaponStrength, int tendency, int health);
	void noHealth(int health);
	int getShieldStrength(int shield_strength);
	int getWeaponStrength(int weapon_strength);
	string shieldName(string shield_name);
	string weaponName(string weapon_name);
};
#endif