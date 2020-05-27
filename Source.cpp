#include<iostream>
#include"Bao.h"
#include"Sach.h"
#include"TapChi.h"
using namespace std;
void Nhap(Sach s[], TapChi t[], Bao b[], int m, int  n, int j)
{
	cout << "Nhap Sach: " << endl;
	for (int i = 0; i < m; i++)
	{
		s[i].Nhap();
		cout << "_____________________________________" << endl;
	}
	cout << "Nhap Tap chi: " << endl;
	for (int i = 0; i < n; i++)
	{
		t[i].Nhap();
		cout << "_____________________________________" << endl;
	}
	cout << "Nhap Bao: " << endl;
	for (int i = 0; i < j; i++)
	{
		b[i].Nhap();
		cout << "_____________________________________" << endl;
	}
}
void Xuat(Sach s[], TapChi t[], Bao b[], int m, int  n, int j)
{
	cout << "Sach: " << endl;
	for (int i = 0; i < m; i++)
	{
		s[i].Xuat();
		cout << "_____________________________________" << endl;
	}
	cout << "Tap chi: " << endl;
	for (int i = 0; i < n; i++)
	{
		t[i].Xuat();
		cout << "_____________________________________" << endl;
	}
	cout << "Bao: " << endl;
	for (int i = 0; i < j; i++)
	{
		b[i].Xuat();
		cout << "_____________________________________" << endl;
	}
}
void SearchSachDay(Sach s[], int m)
{
	int max = 0;
	int temp = 0;
	for (int i = 0; i < m; i++)
	{
		if (s[i].GetTrang() > max)
		{
			max = s[i].GetTrang();
			temp = i;
		}
	}
	cout << "Sach day nhat la: ";
	s[0].Xuat();
}
void TongSoLuong(Sach s[], TapChi t[], Bao b[], int m, int  n, int j)
{
	cout << "Tong so luong cua Sach: " << s->count_dem << endl;
	cout << "Tong so luong cua Tap chi: " << t->count_dem << endl;
	cout << "Tong so luong cua Bao: " << b->count_dem << endl;
}
int main()
{
	system("color b");
	cout << "Nhap so Sach, Tap chi, Bao\n(S, T, B) -> ";
	int m, n, j;
	cin >> m >> n >> j;
	Sach* s;
	TapChi* t;
	Bao* b;
	s = new Sach[m];
	t = new TapChi[n];
	b = new Bao[j];
	Nhap(s, t, b, m, n, j);
	system("cls");
	Xuat(s, t, b, m, n, j);
	cout << "_____________________________________" << endl;
	SearchSachDay(s, m);
	cout << "_____________________________________" << endl;
	TongSoLuong(s, t, b, m, n, j);
	cout << "So luong tac gia cua sach la: " << s->count_tacgia << endl;

	system("pause");
	return 0;
}
