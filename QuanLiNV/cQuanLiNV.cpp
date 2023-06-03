#include "cQuanLiNV.h"

cQuanLiNV::cQuanLiNV()
{}
void cQuanLiNV::Nhap()
{

	int n;
	cout << " Nhap so nhan vien: ";
	cin >> n;
	int loai;
	cNhanVien* a;
	for (int i = 0; i < n; i++)
	{
		cout << " Nhap thong tin nha vien thu " << i + 1 << endl;
		cout << "   Nhap loai nhan vien (1-NVvanPhong 2-NVSanXuat 3-NVQuanLi):";
		cin >> loai;
		if (loai == 1)
		{
			a=new cNhanVienVP;
			a->Nhap();
			ds.push_back(a);
		}
		else if (loai == 2)
		{
			a = new cNhanVienSX;
			a->Nhap();
			ds.push_back(a);
		}
		else
		{
			a = new cNhanVienQL;
			a->Nhap();
			ds.push_back(a);
		}
	}

	cout << endl;
}
void cQuanLiNV::TinhLuong()
{
	for (int i = 0; i < ds.size(); i++)
	{
		ds[i]->TinhLuong();
	}
}
void cQuanLiNV::Xuat()
{
	for (int i = 0; i < ds.size(); i++)
	{
		ds[i]->Xuat();
		cout <<endl;
	}
}
int cQuanLiNV::TinhTongLuong()
{
	int sum = 0;
	for (int i = 0; i < ds.size(); i++)
	{
		sum += ds[i]->GetLuong();
	}
	return sum;
}
void cQuanLiNV::TimNV()
{
	string x;
	cout << " Nhap ten nhan vien can tim: ";
	cin.ignore();
	getline(cin, x);
	int i = 0;
	for (; i < ds.size(); i++)
	{
		if (ds[i]->GetHoTen() == x)
		{
			cout << "Thong tin nhan vien can tim: ";
			ds[i]->Xuat();
		}
	}
	if (i == ds.size())
		cout << "   KHONG TIM THAY THONG TIN NHAN VIEN";
}
