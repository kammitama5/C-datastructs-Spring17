#include <string>
#include <iostream>
#include "Date.h"
using namespace std;


//IMPLEMENTATION OF DATE CLASS
Date::Date(){
	setDate(1, 1, 2007);
}

Date::Date(int month, int day, int year){
	setDate(month, day, year);
}

// Set Date class given month, day, year
void Date::setDate(int mth, int dy, int yr){
	
	month = mth;
	day = dy;
	year = yr;
}

//Getters for Month, Day, Year
int Date::getMonth(){
	
	return month;
}

int Date::getDay(){
	if ((month == 2) && (day == 28)){
		day = 1, month = 3;
	}
	else if ((month == 1) && (day == 31)){
		day = 1, month = 2;
	}
	else if ((month == 3) && (day == 31)){
		day = 1, month = 4;
	}
	else if ((month == 4) && (day == 30)){
		day = 1, month = 5;
	}
	else if ((month == 5) && (day == 31)){
		day = 1, month = 6;
	}
	else if ((month == 6) && (day == 30)){
		day = 1, month = 7;
	}
	else if ((month == 7) && (day == 31)){
		day = 1, month = 8;
	}
	else if ((month == 8) && (day == 31)){
		day = 1, month = 9;
	}
	else if ((month == 9) && (day == 30)){
		day = 1, month = 10;
	}
	else if ((month == 10) && (day == 31)){
		day = 1, month = 11;
	}
	else if ((month == 11) && (day == 30)){
		day = 1, month = 12;
	}
	else if ((month == 12) && (day == 31)){
		day = 1, month = 1;
	}
	else {
		day = day + 1;
	}
	return day;
}

int Date::getYear(){
	if ((month == 12) && (day == 31)){
		year = year + 1;
	}
	else{
		year = year;
	}
	return year;
}

//Main -> Month, Day, Year -> Function advances date by one day
int main(){

	
	Date myDate(12, 1, 2007); // should return 12, 2, 2007;
	Date myDate1(8, 31, 2007); // should return 9, 1, 2007;
	Date myDate2(1, 31, 2008); // should return 2, 1, 2008;

	cout << myDate.getMonth() << "/" << myDate.getDay() << "/" << myDate.getYear() << endl;
	cout << myDate1.getMonth() << "/" << myDate1.getDay() << "/" << myDate1.getYear() << endl;
	cout << myDate2.getMonth() << "/" << myDate2.getDay() << "/" << myDate2.getYear() << endl;

	system("PAUSE");
	return 0;
}