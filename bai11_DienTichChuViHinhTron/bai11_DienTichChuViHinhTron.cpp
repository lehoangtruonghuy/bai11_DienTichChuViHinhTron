// bai11_DienTichChuViHinhTron.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	cout << "DIEN TICH VA CHU VI HINH TRON\n";
	double  bankinh, chuvi, dientich, pi;
	pi = 3.14;
	cout << " nhap ban kinh: "; cin >> bankinh;

	chuvi = 2 * pi * bankinh;
	dientich = bankinh * bankinh * bankinh;

	cout << " chu vi " << chuvi << endl;
	cout << " dien tich " << dientich << endl;
	return 0;