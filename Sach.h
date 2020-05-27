#include<string>
#include<iostream>
using namespace std;
#pragma once
class Sach
{
private:
	string MaSach;
	string TenSach;
	int SoTrang;
	string TenTacGia;
	string TenNhaXuatBan;
	int SoBanPhatHanh;
public:
	Sach();
	Sach(const Sach& a);
	static int count_dem;
	static int count_tacgia;
	int GetTrang();
	void Nhap();
	void Xuat();
};
//Các sách cần quản lý : Mã sách, Tên sách, số trang,
//Tên tác giả, Tên nhà xuất bản, Số bản phát hành

