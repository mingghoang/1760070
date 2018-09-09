#include "Phanso.h"

void CPhanso::Input()
{
	cout << "Nhap tu so: ";
	cin >> tuso;
	cout << "Nhap mau so: ";
	cin >> mauso;
}

void CPhanso::Output()
{
	cout << "Phan so da nhap la: " << tuso<<"/" << mauso << endl;

}

int CPhanso::Kiemtra()
{
	float n;
	n = tuso*mauso;
	if (n > 0)
		return 1;
	if (tuso==0)
		return 0;
	if (n < 0);
		{
		return -1;
		}
	
}
CPhanso::CPhanso()
{
}


CPhanso::~CPhanso()
{
}
