#pragma once
#include "cNhanVien.h"

static int N = 200000;

class cNhanVienVP :  public cNhanVien
{
private:
	int TroCap;
	int SoNgayLam;
public:
	cNhanVienVP(int TroCap=0,int SoNgayLam=0);
	void Nhap();
	void Xuat();
	void TinhLuong();
};

