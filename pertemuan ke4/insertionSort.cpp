#include <iostream>
using namespace std;

int arr[20]; // membuat array dengan panjang data20
int n;       // membuat variable inputan n

void input()
{ // procedure input
    while
        true
        {
            cout << "Masukkan jumlah data pada Array : "; // membuat inputan jumlah element array
            cin >> n;                                     // memangggil variable inputan n

            if (n <= 20)
            { // membuat kondisi n tidak lebih dari 20
                break;
            }
            else
            {
                cout << "\nArray yang anda masukkan maksimal 20 Element.\n"; // menampilkan pesan data lebih dari 20
            }
        }
    cout << endl;                               // membuat jarak per baris program
    cout << "========================" << endl; // membuat tampilan susunan data element array
    cout << "Memasukkan Element Array" << endl;
    cout << "========================" << ENDL;

    for (int i = 0; i < n; i++) // menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << // memasukkan atau menginputkan nilai data n
                cin >>
            arr[i]; // menyimpan nilai data n ke dalam arr
    }
}

void insertionSort()
{ // Procedure InsertionSort

    int temp; // membuat variable data temporer atau penyimpanan sementara
    int j, i; // membuat variable j sebagai penanda

    for (i = 1; i <= n - 1; i++)
    { // step 1

        temp = arr[i]; // step 2

        j = i - 1; // step 3

        while (j >= 0 && arr[j] > temp) // step 4
        {
            arr[j + 1] = arr[j]; // step 4a
            j--;                 // step 4b
        }
        arr[j + 1] = temp; // step 5
    }
}
void display()
{
    cout << endl; // output baris kosong
    cout << "================================" << endl;
    cout << "Total Passs = " << n - 1 << endl;           // cout element movement
    cout << "================================" << endl;  // output ke layar
    cout << "Element Array yang telah tersusun" << endl; // output ke layar
    cout << "=================================" <<       // ouput ke layar

        for (int j = 0; j < n; j++)
    {                     // looping dengan j dimulai dari 0 hingga n-1
        cout << arr endl; // output ke layar
    }
    cout << endl; // output baris kosong
}

int main()
{
    input();
    insertionSort();
    display();
    system("Pause");
    return 0;
}
