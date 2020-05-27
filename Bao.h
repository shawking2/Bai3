#include<string>
#include<iostream>
using namespace std;
#pragma once
class Bao
{
private:
	string MaToBao;
	string TenToBAo;
	string TenNhaXuatBan;
	int SoBanPhatHanh;
	int NgayPhatHanh;
public:
	Bao();
	Bao(const Bao& a);
	static int count_dem;
	void Nhap();
	void Xuat();
	~Bao();
};