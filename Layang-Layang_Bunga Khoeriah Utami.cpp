#include <iostream>
using namespace std;

int main () {
	
	cout << "Nama : Bunga Khoeriah Utami\n";
	cout << "Kelas : 1C Informatika\n";
	
	double luas,d1,d2;
	
	cout << "Menghitung luas Layang-Layang dengan rumus 1/2 x d1 x d2" << endl;
	cout << "Masukan d1: ";
	cin >> d1;
	cout << "Masukan d2: ";
	cin >> d2;
	
	// rumus luas layang-layang
	luas = 0.5 * d1 * d2;
	cout << "Luas layang-layang = " << luas << endl;
	
	return 0;
}
