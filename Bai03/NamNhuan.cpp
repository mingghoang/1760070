#include "NamNhuan.h"

void CNamNhuan::Input()
{
	do {
		cout << "Nhap ngay: ";
		cin >> date;
	} while (date < 1 || date>31);
	do {
		cout << "Nhap thang: ";
		cin >> month;
	} while (month < 1 || month>12);
	cout << "Nhap nam: ";
	cin >> year;
}
void CNamNhuan::Output()
{
	cout << "Ngay da nhap la: " << date << "/" << month << "/" << year;
}
int CNamNhuan::Kiemtra()
{
	int n = this->year;
	if (n % 100 == 0)
	{
		if (n % 400 == 0)
		{
			return 1;
		}
	}
	else if (n % 4 == 0)
		return 1;
	else
		return 0;
}


CNamNhuan::CNamNhuan()
{
}


CNamNhuan::~CNamNhuan()
{
}
