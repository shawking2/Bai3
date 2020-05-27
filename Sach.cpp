#include "Sach.h"
#include<string>
#include<iostream>
using namespace std;
int Sach::count_dem = 0;
int Sach::count_tacgia = 0;
Sach::Sach()
{
	MaSach = "";
	TenSach = "";
	SoTrang = 0;
	TenTacGia = "";
	TenNhaXuatBan = "";
	SoBanPhatHanh = 0;
}
Sach::Sach(const Sach& a)
{
	MaSach = a.MaSach;
	TenSach = a.TenSach;
	SoTrang = a.SoTrang;
	TenTacGia = a.TenTacGia;
	TenNhaXuatBan = a.TenNhaXuatBan;
	SoBanPhatHanh = a.SoBanPhatHanh;
}
int Sach::GetTrang()
{
	return SoTrang;
}
void Sach::Nhap()
{
	cin.ignore();
	cout << "Nhap Ma Sach: ";
	getline(cin, MaSach);
	cout << "Nhap Ten Sach: ";
	getline(cin, TenSach);
	cout << "Nhap So Trang: ";
	cin >> SoTrang;
	cin.ignore();
	cout << "Nhap Ten tac gia: ";
	getline(cin, TenTacGia);
	cout << "Nhap Ten nha xuat ban: ";
	getline(cin, TenNhaXuatBan);
	cout << "Nhap So ban phat hanh: ";
	cin >> SoBanPhatHanh;
	count_dem++;
	count_tacgia++;
}
void Sach::Xuat()
{
	cout << "Ma Sach: " << MaSach << endl;
	cout << "Ten Sach: " << TenSach << endl;
	cout << "So Trang: " << SoTrang << endl;
	cout << "Ten tac gia: " << TenTacGia << endl;
	cout << "Ten nha xuat ban: " << TenNhaXuatBan << endl;
	cout << "So ban phat hanh: " << SoBanPhatHanh << endl;
}