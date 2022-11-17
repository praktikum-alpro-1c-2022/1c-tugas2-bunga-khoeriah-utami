#include <iostream>
using namespace std;

int main () {
	
	cout << "Nama : Bunga Khoeriah Utami\n";
	cout << "Kelas : 1C Informatika\n";
	
	double alas;
	double tinggi;
	double segitiga;
	
	cout << "Menghitung Luas Segitiga menggunakan rumus 1/2 a x t"<< endl;
	cout << "Masukan alas: ";
	cin >> alas;
	
	cout << "Masukan tinggi: ";
	cin >> tinggi;
	
	segitiga = 0.5 * alas * tinggi;
	cout << "Segitiga: " << segitiga;
	
	return 0;	
}
