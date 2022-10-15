#include <iostream>
using namespace std;

int main () {
	cout << "Nama : Bunga Khoeriah Utami\n";
	cout << "Kelas : 1C Informatika\n";
	
	double luas,d1,d2;
	
	cout << "Menghitung luas Belah Ketupat dengan menggunakan rumus 1/2 x d1 x d2" << endl;
	cout << "Masukan d1: ";
	cin >> d1;
	cout << "Masukan d2: ";
	cin >> d2;
	
	// rumus luas belah ketupat
	luas = 0.5 * d1 * d2;
	cout << "Luas belah ketupat = " << luas << endl;
	
	return 0;
}
