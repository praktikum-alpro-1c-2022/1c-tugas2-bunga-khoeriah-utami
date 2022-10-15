#include <iostream>
using namespace std;

int main () {
	cout << "Nama : Bunga Khoeriah Utami\n";
	cout << "Kelas : 1C Informatika\n";
	
	double panjang;
	double lebar;
	cout << panjang * lebar;
	
	cout << "Menghitung luas Persegi Panjang dengan rumus p x l" << endl;
	cout << "Masukan panjang: ";
	cin >> panjang;
	cout << "Masukan lebar: ";
	cin >> lebar;

	double LuasPersegiPanjang = panjang * lebar;
	cout << "hasil :"<< endl;
	cout << "Luas Persegi Panjang = " << LuasPersegiPanjang << endl;
	
	return 0;
}
