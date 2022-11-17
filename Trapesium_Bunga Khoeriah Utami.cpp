#include <iostream>
using namespace std;

int main () {
	
	cout << "Nama : Bunga Khoeriah Utami\n";
	cout << "Kelas : 1C Informatika\n";
	
	// Deklarasi Variabel
	int a,b,t;
	float l;
	
	cout << "Menghitung Luas Trapesium dengan menggunakan rumus 1/2 x (a+b) x t"<< endl;
	cout << "Masukan sisi a: ";
	cin >> a;
	cout << "Masukan sisi b: ";
	cin >> b;
	cout << "Masukan tinggi: ";
	cin >> t;
	
	// Hitung rumus luas trapesium
	l = (0.5*(a+b)*t);
	cout << "luas trapesium = "<< endl; 
	cout << "Luas Trapesium: " << l<< endl;
	
	return 0;
	
}
