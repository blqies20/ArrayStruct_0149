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
   Mahasiswa msh;

   cout << "Masukkan nim = ";
   cin >> msh.nim;
   cout << "Masukkan nama = ";
   cin >> msh.nama;
   cout << "Masukkan alamat = ";
   cin >> msh.alamat;

   cout << endl;
   cout << "Menampilkan Data" << endl;
   cout << endl;
}