#pragma once
#include"cNhanVien.h"
#include"cNhanVienQL.h"
#include"cNhanVienSX.h"
#include"cNhanVienVP.h"
#include<vector>

class cQuanLiNV
{
private:
	vector<cNhanVien*> ds;
public:
	cQuanLiNV();
	void Nhap();
	void Xuat();
	void TinhLuong();
	int TinhTongLuong();
	void TimNV();
};

