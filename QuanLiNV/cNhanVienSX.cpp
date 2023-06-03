#include "cNhanVienSX.h"

cNhanVienSX::cNhanVienSX(int SoSP)
{
	this->SoSP = SoSP;
}
void cNhanVienSX::Nhap()
{
	cNhanVien::Nhap();
	cout << "   Nhap so san pham: ";
	cin >> SoSP;
}
void cNhanVienSX::Xuat()
{
	cNhanVien::Xuat();
	cout << SoSP << "\t" << Luong;
}
void cNhanVienSX::TinhLuong()
{
	Luong = LuongCB + SoSP * M;
}