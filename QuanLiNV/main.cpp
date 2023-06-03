#include"cQuanLiNV.h"

int main()
{
	cQuanLiNV a;
	cout << "----------NHAP DANH SACH NHAN VIEN---------"<<endl;
	a.Nhap();

	a.TinhLuong();

	cout << "----------DANH SACH NHAN VIEN CUA CONG TY---------" << endl;
	a.Xuat();

	cout << endl;
	cout << " TONG LUONG CUA CA CONG TY LA: " << a.TinhTongLuong()<<endl;

	cout << endl;
	a.TimNV();
}
