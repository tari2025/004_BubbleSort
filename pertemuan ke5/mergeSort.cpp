#include <iostream>
using namespace std;

int arr[20], b[20];
int n;
void input()
{
    while (true)
    {
        cout << "Masukkan Panjang element array: ";
        cin >> n;
        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    cout << "\n===========================";
    cout << "\nInputkan Isi Element Array";
    cout << "\n=============================";
    endl;