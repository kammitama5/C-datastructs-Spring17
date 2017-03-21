#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
public:
	//CharBase(tendency, health);


	//getters 
	string getName(string name){
		name = name;
	}
	double getHeight(double height){
		height = height;
	}
	double getTendency(double tendency){
		tendency = tendency;
	}
	double getHealth(double health){
		health = health;
	}

	//setters
	string setName(string name){
		name = name;
	}
	double setHeight(double height){
		height = height;
	}
	double setTendency(double tendency){
		tendency = tendency;
	}
	double setHealth(double health){
		health = health;
	}

	void display(string name, double height, double weight, double tendency, double health){

		cout << "name: " << endl;
		cout << "height: " << endl;
		cout << "weight: " << endl;
		cout << "tendency" << endl;
		cout << "health: " << endl;
	}

private:
	string name;
	double height;
	double weight;
	double tendency;
	double health;

};

class CombatCharacter : public Character{
public:

	double useWeapon(double health, double strength, double tendency){
		if (health == 0){
			cout << "I cannot let you use your weapon " << endl;
		}
		else {
			cout << "You've used used your weapon " << endl;
			health = health - 1.0;
			strength = strength - 1.0;
			tendency = tendency - 0.2;
		}

		return 0.0;
	}

private:
	double weaponstrength;
	double shieldstrength;



};

#endif