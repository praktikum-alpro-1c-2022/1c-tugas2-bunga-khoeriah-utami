#include <iostream>
using namespace std;

int main () {
	
	cout << "Nama : Bunga Khoeriah Utami\n";
	cout << "Kelas : 1C Informatika\n";
	
	double alas;
	double tinggi;
	cout << alas * tinggi;
	
	cout << "Menghitung luas Jajar Genjang dengan menggunakan rumus a x t" << endl;
	cout << "Masukan alas: ";
	cin >> alas;
	cout << "Masukan tinggi: ";
	cin >> tinggi;
	
	double LuasJajarGenjang = alas * tinggi;
	cout << "Luas Jajar Genjang = " << LuasJajarGenjang << endl;
	
	return 0;
}
