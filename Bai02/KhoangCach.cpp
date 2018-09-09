#include "KhoangCach.h"


void CKhoangCach::Input()
{
	cout << "Nhap diem x: ";
	cin >> x;
	cout << "Nhap diem y: ";
	cin >> y;
}

float CKhoangCach::Output(CKhoangCach s2)
{
	float n; 
	n = sqrt(pow(s2.x-this->x,2) + pow(s2.y-this->y, 2));
	return n;
}
CKhoangCach::CKhoangCach()
{
}
CKhoangCach::~CKhoangCach()
{

}