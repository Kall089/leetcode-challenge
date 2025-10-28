#include <iostream>
using namespace std;

typedef int larik[100];

void inputData(int &n, larik &data)
{
    cout << "Banyak data :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> data[i];
    }
    cout << endl;
}

void printLarik(larik data, int n)
{
    cout << "Data yang sudah dimasukkan " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " = " << data[i] << endl;
    }
    cout << endl;
}

void output(larik data, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            cout << ", ";
        }
        cout << data[i];
    }
    cout << endl;
}

void tukar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleDescending(larik &data, int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        cout << "Proses ke- " << n - i << " : " << endl;
        output(data, n);
        for (int j = i - 1; j >= 0; j--)
        {
            if (data[i] > data[j])
            {
                tukar(data[i], data[j]);
            }
            output(data, n);
        }
        cout << endl;
    }
    cout << "Hasil setelah sorting: ";
    output(data, n);
}

void selectionSort(larik &data, int n)
{
    int posisi;
    for (int i = 0; i < n - 1; i++)
    {
        posisi = i;
        cout << "Proses ke-" << i + 1 << ": " << endl;
        output(data, n);
        for (int j = i + 1; j < n; j++)
        {
            if (data[posisi] > data[j])
            {
                posisi = j;
            }
        }
        tukar(data[i], data[posisi]);
        output(data, n);
    }
    cout << "Hasil setelah sorting: ";
    output(data, n);
    cout << endl;
}

void insertionSort(larik &data, int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << "Proses ke-" << i << ": " << endl;
        output(data, n);
        for (int j = i; j >= 1; j--)
        {
            if (data[j] < data[j - 1])
            {
                tukar(data[j], data[j - 1]);
                output(data, n);
            }
            else
                break;
        }
    }
    cout << "Hasil setelah sorting: ";
    output(data, n);
    cout << endl;
}

int main()
{
    int n;
    larik data;

    inputData(n, data);
    printLarik(data, n);
    output(data, n);
    int menu;
    do
    {
        cout << "\nPilihan Menu : \n"
                "1. Sorting Bubble Sort Descending\n"
                "2. Sorting Selection Ascending\n"
                "3. Sorting Insertion Ascending\n"
                "4. Selesaikan Program\n"
                "Pilihan Menu :";
        cin >> menu;
        switch (menu)
        {
        case 1:
            bubbleDescending(data, n);
            break;

        case 2:
            selectionSort(data, n);
            break;

        case 3:
            insertionSort(data, n);
            break;

        case 4:
            cout << "Program berhasil diberhentikan\n"
                    "Terimakasih sudah mencoba program ini";
            break;
        default:
            cout << "Input tidak terbaca\n"
                    "Silahkan coba lagi";
            break;
        }
    } while (menu != 4);
}