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
		string namaMK;
		int sks;
	public:
		void inputMK() {
			cout << "Masukkan kode\t: ";
			cin >> kodeMK;
			cout << "Masukkan nama\t: ";
			cin >> namaMK;
			cout << "Masukkan sks\t: ";
			cin >> sks;
		}
		void tampilMK() {
			cout << "Kode MK\t: " << kodeMK << endl;
			cout << "Nama MK\t: " << namaMK << endl;
			cout << "Sks \t: " << sks << endl;
		}
};

int main() {

