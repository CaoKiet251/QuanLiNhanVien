#include "cNhanVienVP.h"

cNhanVienVP::cNhanVienVP(int TroCap,int SoNgayLam)
{
	this->TroCap = TroCap;
	this->SoNgayLam = SoNgayLam;
}
void cNhanVienVP::Nhap()
{
	cNhanVien::Nhap();
	cout << "   Nhap tro cap: ";
	cin >> TroCap;
	cout << "   Nhap so ngay lam: ";
	cin >> SoNgayLam;
}
void cNhanVienVP::Xuat()
{
	cNhanVien::Xuat();
	cout << TroCap << "\t" << SoNgayLam << "\t" << Luong;
}
void cNhanVienVP::TinhLuong()
{
	Luong = LuongCB + SoNgayLam * N + TroCap;
}