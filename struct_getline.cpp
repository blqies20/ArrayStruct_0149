#include <iostream>
using namespace std;

struct DetailAlamat
{
    string kota;
    string provinsi;
};

struct Mahasiswa
{
    string nama;
    string nim;
    DetailAlamat alamat;
};

int main()
{
    Mahasiswa mhs[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukkan NIM = ";
        cin >> mhs[i].nim;
        cin.ignore();

        cout << "Masukkan Nama = ";
        getline(cin, mhs[i].nama);
        
        cout << "Masukkan Kota = ";
        cin >> mhs[i].alamat.kota;
        cout << "Masukkan Provinsi = ";
        cin >> mhs[i].alamat.provinsi;
        cin.ignore();
    }
    
}