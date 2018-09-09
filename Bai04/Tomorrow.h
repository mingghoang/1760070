#pragma once
#include <conio.h>
#include <iostream>
using namespace std;



class CTomorrow
{
public:
	int date;
	int month, year;

public:
	void Input();
	void Output();
	int CheckDay();
	void NextDay();

	int NamNhuan(int);
	CTomorrow();
	~CTomorrow();
};





