#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

class CNamNhuan
{
private :
	int date, month;
	int year;
public:
	void Input();
	void Output();
	int Kiemtra();

	CNamNhuan();
	~CNamNhuan();
};

