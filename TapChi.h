#include<string>
#include<iostream>
using namespace std;
#pragma once
class Sach;
class TapChi
{
private:
	string MaTapChi;
	string TenTapChi;
	string TenNhaXuatBan;
	int SoBanPhatHanh;
	int SoPhatHanh;
	int ThanhPhatHanh;
public:
	TapChi();
	TapChi(const TapChi& a);
	static int count_dem;
	void Nhap();
	void Xuat();
};
