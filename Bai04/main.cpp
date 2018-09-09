#include "Tomorrow.h"

void mains()
{
	CTomorrow T;
	T.Input();
	T.Output();
	/*do {
		cout << "\nNgay nhap khong hop le vui long nhap lai: ";
		T.Input();
		T.Output();
	} while (T.CheckDay()==0);*/

	
	T.NextDay();

	_getch();
}