#include <iostream>
using namespace std;

void baris1(int n);
void baris2(int n);
void baris3(int n);
void baris4(int n);
void baris5(int n);

int main()
{
  int n;
  cin >> n;
  baris1(n);
  baris2(n);
  baris3(n);
  baris4(n);
  baris5(n);
}

void baris1(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << "4";
    }
    for (int j = 1; j <= n * 3; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << "4";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= n * 5; j++)
    {
      cout << "6";
    }
    cout << '\n';
  }
}

void baris2(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << "4";
    }
    for (int j = 1; j <= n * 3; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << "4";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << "6";
    }
    for (int j = 1; j <= n * 4; j++)
    {
      cout << " ";
    }
    cout << '\n';
  }
}

void baris3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n * 5; j++)
    {
      cout << "4";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= n * 5; j++)
    {
      cout << "6";
    }
    cout << '\n';
  }
}

void baris4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n * 4; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << "4";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << "6";
    }
    for (int j = 1; j <= n * 3; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << "6";
    }
    cout << '\n';
  }
}

void baris5(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n * 4; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << "4";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= n * 5; j++)
    {
      cout << "6";
    }
    cout << '\n';
  }
}