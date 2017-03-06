#include <string>
using namespace std;

#ifndef DATE_H
#define DATE_H

/*the date class keeps track of a generic date object*/
class Date
{
private:
	int month;
	int day;
	int year;

public:
	Date();  //default constructor
	Date(int, int, int);
	void setDate(int, int, int);
	int getMonth();
	int getDay();
	int getYear();
};

#endif
