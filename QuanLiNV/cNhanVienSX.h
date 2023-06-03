#pragma once
#include "cNhanVien.h"

static int M = 2000;

class cNhanVienSX :    public cNhanVien
{
private:
	int SoSP;
public:
	cNhanVienSX(int SoSP = 0);
	void Nhap();
	void Xuat();
	void TinhLuong();
};

