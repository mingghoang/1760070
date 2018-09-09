#include "Phanso.h"

void main()
{
	CPhanso ps;
	ps.Input();
	ps.Output();
	int n = ps.Kiemtra();
	if (n == 1)
		cout << "Day la phan so duong";
	if (n == -1)
		cout << "Day la phan so am";
	if(n==0)
	cout << "Phan so  = 0";
	_getch();
}