#include "cNhanVien.h"
cNhanVien::cNhanVien(string HoTen, string NgaySinh, int Luong, int LuongCB)
{
	this->HoTen = HoTen;
	this->NgaySinh = NgaySinh;
	this->Luong = Luong;
	this->LuongCB = LuongCB;
}
void cNhanVien::Nhap()
{
	cout << "   Nhap ho ten: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "   Nhap ngay sinh: ";
	getline(cin, NgaySinh);
	cout << "   Nhap luong co ban: ";
	cin >> LuongCB;
}
void cNhanVien::Xuat()
{
	cout << HoTen << "\t" << NgaySinh << "\t" << LuongCB << "\t";
}
int cNhanVien::GetLuong()
{
	return Luong;
}
string cNhanVien::GetHoTen()
{
	return HoTen;
}