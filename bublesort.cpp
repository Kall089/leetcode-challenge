#include<iostream>
using namespace std;

void input(int nums[], int &size)
{
    for(int i=0; i<size; i++) cin>>nums[i];
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void output(int nums[], int n) {
    for (int i = 0; i < n; i++)
    {
    if (i != 0)
    cout << ", ";
    cout << nums[i];
    }
  cout << '\n';
}

void cariNol(int nums[], int size)
{
    for(int i=0; i<size - 1; i++)
    {
        cout << "proses ke-" << i + 1 << endl;
        output(nums, size);
        for (int j = 0; j < size - i - 1; j++)
        {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j+1]);
                output(nums, size);
            }
        }
        cout << endl;
    }

    
}

int main()
{
    int size;
    cout<<"ukuran= ";
    cin>>size;
    int nums[size];
    input(nums, size);
    cariNol(nums, size);

    for(int i=0; i<size; i++)
    {
        cout<<nums[i]<<" ";
    }
}