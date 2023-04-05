#include <iostream>
using namespace std;

struct DetailAlamat {
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char NIM[12];
	char Nama[20];
	DetailAlamat Alamat;
	int umur;
	int main();

	};

	Mahasiswa mhs[3];

	for (int i = 0; < 3 i++) {
		cout << "Masukkan NIM = ";
		cin.getline(mhs[i].NIM, 12);
		cout << "Masukkan Nama = ";
		cin.getline(mhs[i].nama, 20);
		cout << "Alamat :" << endl;
		cout << "\tMasukkan desa = ";
		cin.getline(mhs[i].Alamat.desa, 20);
		cout << "\tMasukkan kota = "
			cin.getline(mhs[i].Alamat.kota, 20);
		cout << "masukkan Umur = ";
		cin >> mhs[i].NIM;
		cin.ignore(1, '\n');
	}
	for (int i = 0; i < 3, i++) {
		cout << "\nNIM = " << mhs[i].NIM;
		cout << "\nNama = " << mhs[i].Nama;
		cout << "\ndesa = " << mhs[i].Alamat.desa;
		cout << "\nkota = " << mhs[i].Alamat.kota;
		cout << "\nUmur = " << mhs[i].Umur;
	}

	