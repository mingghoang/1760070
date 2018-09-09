#include "Tomorrow.h"

void CTomorrow::Input()
{
	do{
		cout << "Nhap ngay: ";
		cin >> date;
	} while (date < 1 || date>31);

	do {
		cout << "Nhap thang: ";
		cin >> month;
	} while (month < 0 || month>12);
	cout << "Nhap nam: ";
	cin>>year;

}
void CTomorrow::Output()
{
	cout << "Ngay vua nhap la: " << date << "/" << month << "/" << year << endl;

}

// Kiem tra ngay nhap da hop le ??

int CTomorrow::NamNhuan(int n)
{
	
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
int CTomorrow::CheckDay()
{
	int m = month;
	if (date == 31)
	{
		if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11)
			return 0;
	}
	if (date == 30 && month == 2)
	{
		return 0;
	}
	if (month == 2)
	{
		if (NamNhuan(year) == 0)
		{
			if (date >= 29)
				return 0;
		}
	}
	return 1;
}
void CTomorrow::NextDay()
{
	int m=month;
	int check = 1;
	if (date == 30)
	{
		if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			date = 1;
			month++;
		}
		else if (m == 2)
			check = 0;
		else
			date++;
	}

	else if (date == 31)
	{
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10)
		{
			date = 1;
			month++;
		}
		//Xet ngay cuoi cung trong nam
		if (m == 12)
		{
			date = 1;
			month = 1;
			year++;
		}
		if (m == 4 || m == 6 || m == 9 || m == 11 || m == 2)
			check = 0;
	}
	else if (month == 2)
	{
		if (date > 29)
			check = 0;
		if (NamNhuan(year) == 1)
		{
			if (date == 29)
			{
				date = 1;
				month = 3;
			}
			else
			{
				date++;
			}

		}
		else
		{
			if (date == 28)
			{
				date = 1;
				month = 3;
			}
			else if (date == 29)
				check = 0;
			else
			{
				date++;
			}
		}
	}
	else
		date++;

	if (check == 0)
		cout << "Ngay nhap ko hop le ";
	else
	{
		cout << "Ngay tiep theo: ";
		cout << date << "/" << month << "/" << year;
	}
}

CTomorrow::CTomorrow()
{
}


CTomorrow::~CTomorrow()
{
}
