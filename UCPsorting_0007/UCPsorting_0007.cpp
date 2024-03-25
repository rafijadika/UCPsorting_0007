// 1. dengan membagi element menjadi 2 bagian yaitu bagian shorted dan bagian unshorted
// 2. dengan scan data dan menaroh di tempat yang benar
// 3. dengan menguhitung n -1 (n= jumlah data)




#include <iostream>
using namespace std;

int rafi[7];
int n;

void input() {       //Method untuk input
    while (true) {   //Looping
        cout << "Masukan array banyaknya elemen pada array : "; //Output ke layar
        cin >> n;    //Input dari pengguna
        if (n <= 7) //Jika n kurang dari atau sama dengan 7
            break;   //Keluar dari loop
        else {       //Jika n lebih dari 7
            cout << "\nArray dapat mempunyai maksimal 7 elemen.\n"; //Output ke layar
        }
    }
    cout << endl;                            //Output baris kosong
    cout << "====================" << endl;  //Output ke layar
    cout << "Masukan Elemen Array" << endl;  //Output ke layar
    cout << "====================" << endl;  //Output ke layar

    for (int i = 0; i < n; i++) {     //Looping ddengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
        cin >> rafi[i];                  //Input dari pengguna
    }
}

void insertionSort() {

    int i, temp, j;

    for (i = 1; i <= n - 1; i++) { //step 1
        temp = rafi[i]; //step 2
        j = i - 1; //step 3
        while (j >= 0 && rafi[j] > temp) //step 4
        {
            rafi[j + 1] = rafi[j]; //step 4a
            j = j - 1; //step 4b

        }
        rafi[j + 1] = temp; //step 5	

        for (int k = 0; k < n; k++) {
            cout << rafi[k] << " ";

        }
        cout << "pass " << i - 1 << endl;
        cout << endl;
    }while (i <= i);

}

void display() { //Method untuk menampilkan hasil
    cout << endl;                            //Output baris kosong
    cout << "=================================" << endl;  //Output ke layar
    cout << "Element Array yang telah tersusun" << endl;  //Output ke layar
    cout << "=================================" << endl;  //Output ke layar
    for (int i = 0; i < n; i++) {
        cout << rafi[i] << endl;
    }
    cout << endl;                                         //Output ke layar
}

int main()
{
    input();
    system("pause");
    insertionSort();
    return 0;
}