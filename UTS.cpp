#include <iostream>
using namespace std;
typedef int larik[100];

void input(larik &x, int n);
void output(larik x, int n);
void tukar1(int &a, int &b);
void tukar2(int *a, int *b);
void bubbleAscen(larik &x, int n);
void bubbleDescen(larik &x, int n);
void search(larik a, int n, int kunci, int &status, int &lokasi);
void deleteLarik(larik &a, int &n, int key, int &status);

int main()
{
  larik x;
  int n, lokasi, key, status;
  cout << "Banyak data yang ingin dimasukkan: ";
  cin >> n;         
  input(x, n);
  cout << "Data-data yang dimasukkan adalah:\n";
  output(x, n);
  int menu;

  do
  {
    cout << "\nPilihan menu:\n"
            "1. Bubble Ascen\n"
            "2. Bubble Descen\n"
            "3. Cari Data\n"
            "4. Delete Data\n"
            "5. Selesaikan Program\n"
            "Pilih menu: ";
    cin >> menu;
    switch (menu)
    {
    case 1:
      bubbleAscen(x, n);
      break;

    case 2:
      bubbleDescen(x, n);
      break;

    case 3:
      cout << "Cari data bernilai: ";
      cin >> key;
      search(x, n, key, status, lokasi);
      if (status == 1)
      {
        cout << "Data berhasil ditemukan pada lokasi ke-" << lokasi + 1 << "\n";
      }
      else
        cout << "Data tidak berhasil ditemukan";
      break;

    case 4:
      cout << "Hapus data bernilai: ";
      cin >> key;
      deleteLarik(x, n, key, status);
      if (status == 1)
      {
        cout << "Data berhasil dihapus\n";
        output(x, n);
      }
      else
        cout << "Data tidak berhasil dihapus";
      break;

    case 5:
      cout << "Program berhasil dihentikan\n"
              "Terimakasih sudah mecoba program ini";
      break;

    default:
      cout << "Input tidak terbaca\n"
              "Silahkan coba lagi";
      break;
    }
  } while (menu != 5);
}

void input(larik &x, int n)
{
  cout << "Masukkan angka sebanyak " << n << " kali:\n";
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }
}

void output(larik x, int n)
{
  for (int i = 0; i < n; i++)
  {
    if (i != 0)
      cout << ", ";
    cout << x[i];
  }
  cout << '\n';
}

void tukar1(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

void tukar2(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleAscen(larik &x, int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    cout << "Proses " << i + 1 << ":\n";
    output(x, n);
    for (int j = i + 1; j < n; j++)
    {
      if (x[i] > x[j])
        tukar1(x[i], x[j]);
      output(x, n);
    }
    cout << '\n';
  }
}

void bubbleDescen(larik &x, int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    cout << "Proses " << i + 1 << ":\n";
    output(x, n);
    for (int j = i + 1; j < n; j++)
    {
      if (x[i] < x[j])
        tukar2(&x[i], &x[j]);
      output(x, n);
    }
    cout << '\n';
  } 
}

void search(larik a, int n, int kunci, int &status, int &lokasi)
{
  status = lokasi = 0;
  while (status == 0 && lokasi < n)
  {
    if (a[lokasi] == kunci)
      status = 1;
    else        
      lokasi++;
  }
}

void deleteLarik(larik &a, int &n, int key, int &status)
{
  int lokasi = 0;
  search(a, n, key, status, lokasi);
  if (status == 1)
  {
    a[lokasi] = 0;
    for (int i = lokasi; i < n - 1; i++)
    {
      tukar1(a[i], a[i + 1]);
    }
    n--;
  }
}

