#include "Bao.h"
#include<string>
#include<iostream>
using namespace std;
int Bao::count_dem = 0;
Bao::Bao()
{
	MaToBao = "";
	TenToBAo = "";
	TenNhaXuatBan = "";
	SoBanPhatHanh = 0;
	NgayPhatHanh = 0;
}
Bao::Bao(const Bao& a)
{
	MaToBao = a.MaToBao;
	TenToBAo = a.TenToBAo;
	TenNhaXuatBan = a.TenNhaXuatBan;
	SoBanPhatHanh = a.SoBanPhatHanh;
	NgayPhatHanh = a.NgayPhatHanh;
}
void Bao::Nhap()
{
	cin.ignore();
	cout << "Nhap Ma to bao: ";
	getline(cin, MaToBao);
	cout << "Nhap Ten to bao: ";
	getline(cin, TenToBAo);
	cout << "Nhap Ten nha xuat ban: ";
	getline(cin, TenNhaXuatBan);
	cout << "Nhap So ban phat hanh: ";
	cin >> SoBanPhatHanh;
	cout << "Nhap Ngay phat hanh: ";
	cin >> NgayPhatHanh;
	count_dem++;
}
void Bao::Xuat()
{
	cout << "Ma to bao: " << MaToBao << endl;
	cout << "Ten to bao: " << TenToBAo << endl;
	cout << "Ten nha xuat ban: " << TenNhaXuatBan << endl;
	cout << "So ban phat hanh: " << SoBanPhatHanh << endl;
	cout << "Ngay phat hanh: " << NgayPhatHanh << endl;
}
Bao::~Bao() {

}