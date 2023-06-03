#include "cNhanVienQL.h"

cNhanVienQL::cNhanVienQL(float HeSo,int Thuong)
{
	this->HeSo = HeSo;
	this->Thuong = Thuong;
}
void cNhanVienQL::Nhap()
{
	cNhanVien::Nhap();
	cout << "   Nhap he so chuc vu: ";
	cin >> HeSo;
	cout << "   Nhap so tien thuong: ";
	cin >> Thuong;
}
void cNhanVienQL::Xuat()
{
	cNhanVien::Xuat();
	cout << HeSo << "\t" << Thuong << "\t" << Luong;
}
void cNhanVienQL::TinhLuong()
{
	Luong = LuongCB * HeSo + Thuong;
}
