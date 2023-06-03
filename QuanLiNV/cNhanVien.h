#pragma once
#include<iostream>
#include<string>
using namespace std;

class cNhanVien
{
protected:
	string HoTen;
	string NgaySinh;
	int Luong;
	int LuongCB;
public:
	cNhanVien(string HoTen = "", string NgaySinh = "", int Luong = 0, int LuongCB = 0 );
	virtual void Nhap();
	virtual void Xuat();
	virtual void TinhLuong() = 0;
	int GetLuong();
	string GetHoTen();
};

