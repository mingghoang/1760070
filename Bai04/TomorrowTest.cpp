#include "Tomorrow.h"

void printNextDate(int day, int month, int year)
{
	CTomorrow T;
	T.date = day;
	T.month = month;
	T.year = year;

	//T.Input();
	T.Output();
	T.NextDay();
	cout << endl;
}
void printNextDate(int day, int month, int year, int expectedDay, int expectedMonth, int expectedYear)
{
	CTomorrow T;
	T.date = day;
	T.month = month;
	T.year = year;

	//T.Input();
	T.Output();
	cout << "Expected: " << expectedDay << "/" << expectedMonth << "/" << expectedYear; 
	cout << " - actual: "; T.NextDay();
	
	cout << endl;
}
void main()
{
	printNextDate(30, 01, 1999);
	printNextDate(30, 05, 1999, 01, 02, 1999);
	printNextDate(31,12, 1601);
	_getch();
}

