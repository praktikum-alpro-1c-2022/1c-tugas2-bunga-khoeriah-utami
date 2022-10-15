#include <iostream>
using namespace std;

int main (){
	
	cout << "Nama : Bunga Khoeriah Utami\n";
	cout << "Kelas : 1C Informatika\n";
	
	double sisi;
	cout << sisi * sisi;
	
	cout << "\nMenghitung luas Persegi dengan rumus s x s" << endl;
	cout << "Masukan sisi: ";
	cin >> sisi;

	double LuasPersegi = sisi * sisi;
	cout << "hasil :"<< endl;
	cout << "Luas Persegi = " << LuasPersegi << endl;
	
	return 0;
}


