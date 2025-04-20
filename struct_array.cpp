#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    string alamat;
};

int main()
{
    Mahasiswa mhs[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Mahasiswa ke-4" << i + 1 << endl;
        cout << "Masukkan NIM = ";
        cin >> mhs[i].nim;
        cout << "Masukkan Nama = ";
        cin >> mhs[i].nama;
        cout << "Masukkan Alamat = ";
        cin >> mhs[i].alamat;
    }
    
}