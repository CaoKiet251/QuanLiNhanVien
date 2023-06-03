#pragma once
#include "cNhanVien.h"

class cNhanVienQL :  public cNhanVien
{
private:
	float HeSo;
	int Thuong;
public:
	cNhanVienQL(float HeSo=0,int Thuong=0);
	void Nhap();
	void Xuat();
	void TinhLuong();
};

