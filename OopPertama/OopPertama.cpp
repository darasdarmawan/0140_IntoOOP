#include <iostream>
using namespace std;

class Mahasiswa {
	public:
	int nim;
	string nama;
	int umur;

	void tampilData() {
		cout << "NIM \t: " << nim << endl;
		cout << "Nama \t: " << nama << endl;
		cout << "umur \t: " << umur << endl;
	}
};

class Matakuliah {
	private:
		string kodeMK;
