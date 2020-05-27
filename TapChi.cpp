#include "TapChi.h"
#include"Sach.h"
#include<string>
#include<iostream>
using namespace std;
int TapChi::count_dem = 0;
TapChi::TapChi()
{
	MaTapChi = "";
	TenTapChi = "";
	TenNhaXuatBan = "";
	SoBanPhatHanh = 0;
	SoPhatHanh = 0;
	ThanhPhatHanh = 0;
}
TapChi::TapChi(const TapChi& a)
{
	MaTapChi = a.MaTapChi;
	TenTapChi = a.TenTapChi;
	TenNhaXuatBan = a.TenNhaXuatBan;
	SoBanPhatHanh = a.SoBanPhatHanh;
	SoPhatHanh = a.SoPhatHanh;
	ThanhPhatHanh = a.ThanhPhatHanh;
}
void TapChi::Nhap()
{
	cin.ignore();
	cout << "Nhap Ma tap chi: ";
	getline(cin, MaTapChi);
	cout << "Nhap Ten tap chi: ";
	getline(cin, TenTapChi);
	cout << "Nhap Ten nha xuat ban: ";
	getline(cin, TenNhaXuatBan);
	cout << "Nhap So ban phat hanh: ";
	cin >> SoBanPhatHanh;
	cout << "Nhap So phat hanh: ";
	cin >> SoPhatHanh;
	cout << "Nhap Thang phat hanh: ";
	cin >> ThanhPhatHanh;
	count_dem++;
}
void TapChi::Xuat()
{
	cout << "Ma tap chi: " << MaTapChi << endl;
	cout << "Ten tap chi: " << TenTapChi << endl;
	cout << "Ten nha xuat ban: " << TenNhaXuatBan << endl;
	cout << "So ban phat hanh: " << SoBanPhatHanh << endl;
	cout << "So phat hanh: " << SoPhatHanh << endl;
	cout << "Thanh phat hanh: " << ThanhPhatHanh << endl;
}