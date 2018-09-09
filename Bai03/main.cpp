#include "NamNhuan.h"

void main()
{
	cout << "--Bai 3: \n\n";
	CNamNhuan y;
	y.Input();
	y.Output();
	cout << endl;
	int n =y.Kiemtra();
	if(n==1)
		cout << "Day la nam nhuan ";
	else
		cout << "Day khong phai la nam nhuan ";
	_getch();
}