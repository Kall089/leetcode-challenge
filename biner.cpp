#include <iostream>
using namespace std;

int keBiner(int n) // Mengubah ke biner
{
  int biner = 0;
  for (int faktor = 1; n > 0; faktor *= 10)
  {
    int simpan = n % 2;       // Mencari nilai satuan biner
    biner += simpan * faktor; // Menambahkan nilai satuan tersebut
    n /= 2;                   // Membagi inputan dengan 2
  }
  return biner;
}

int keOKtal(int n) // Mengubah ke oktal
{ 
  int oktal = 0;
  for (int faktor = 1; n > 0; faktor *= 10)
  {
    int simpan = n % 8;       // Mencari nilai satuan oktal
    oktal += simpan * faktor; // Menambahkan nilai satuan tersebut
    n /= 8;                   // Membagi inputan dengan 8
  }
  return oktal;
}

int main()
{
  int n;
  cin >> n;
  cout << keBiner(n) << '\n' << keOKtal(n);
}