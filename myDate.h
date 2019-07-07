//Jamil Khan
//CECS 282 - 05
//Prog 2 - myDate Object
//Oct 4, 2018

#include <string>
using namespace std;

#ifndef MYDATE_H
#define MYDATE_H
class myDate {
private:
	int month;
	int day;
	int year;
public:
	myDate();
	myDate(int month, int day, int year);
	void display();
	void increaseDate(int N);
	void decreaseDate(int N);
	int daysBetween(myDate D);
	int getMonth();
	int getDay();
	int getYear();
	int dayOfYear();
	string dayName();
};
#endif