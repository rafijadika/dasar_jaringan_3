#include <iostream>
using namespace std;

struct DetailAlamat {
	string Desa;
	string Kota;
};

struct Mahasiswa
{
	string NIM;
	string Nama;
	string alamat;
	int umur;

};

int main()
{
	Mahasiswa mhs;

	cout << "masukan NIM = ";
	cin >> mhs.NIM;
	cout << "masukan Nama = ";
	cin >> mhs.Nama;
	cout << "masukan Alamat:" << endl;
	cout << "\tmasukan Desa = ";
	cin >> mhs.Alamat.Desa;
	cout << "\tmasukan kota = ";
	cin >> mhs.Alamat.Kota;
	cout << "masukan umur = ";
	cin >> mhs.umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\tmasukan Kota = ";
	cin >> mhs.Alamat.Kota;
	cout << "masukan umur = ";
	cin >> mhs.umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "n\Desa = " << mhs.Alamat.Desa;
	cout << "\nKota = " << mhs.Alamat.Kota;
	cout << "\nUmur = " << mhs.umur;
}