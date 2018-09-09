#include "KhoangCach.h"
 
void main()
{
	
	CKhoangCach s1;
	CKhoangCach s2;

	cout << "Nhap toa do diem 1 \n";
	s1.Input();
	cout << "Nhap toa do diem 2 \n";
	s2.Input();
	cout << "Khoang cach giua 2 diem la: " << s1.Output(s2);
	_getch();
}