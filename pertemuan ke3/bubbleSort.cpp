#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi Variable global array dengan ukuran 20
int n; // deklarasi variable global n untuk menyimpan banyaknya elemen padaa array

void input(){ //prosedur untuk input
    int d;
    while(true){
        cout << " Masukkan banyaknya element pada array:"<< endl;
        cin>> n; //input dari pengguna
        if (n<=20 //jika n kurang dari atau sama dengan 20
            break; // keluar dari loop
        else{ //jika n lebih dari 20 
            count<< "\nArray dapat mempunyai maksiamal 20 element\n"<<endl; // output ke layar
            }
        
    cout<< endl;
    cout<< "===================="<< endl;
    cout<< "Masukkan elemen array"<< endl;
    cout<< "====================="<< endl;

    for (int i = 0; <n; i++){
        int pass = 1; // step 1

        do
        {
            for(int j=0 <= n-1-pass;j++)} //step 2

            if (arr[j > arr[j+1]}
           in temp;
        temp = arr[j];
    arr[j+1;
    arr[j+1]= temp;}
pass = pass+1; // step 4
} while (pass<=n-1);// step 5


         while);

    void display() {
    cout << endl;
    cout << "========================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "========================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j]; // menampilkan array
        if (j < n - 1) {
            cout << " --> ";
        }
    }
        cout << endl;
    
        cout << "Jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
        cout << endl;
}