
#include <iostream>
using namespace std;

int main()
{
    char npm[20], nama[50];
    float tugas1, tugas2, tugas3, rata_rata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "==============================" << endl;

    cout << "NPM : ";
    cin >> npm;

    cin.ignore();
    cout << "Nama : ";
    cin.getline(nama, 50);

    cout << "Nilai Tugas I : ";
    cin >> tugas1;

    cout << "Nilai Tugas II : ";
    cin >> tugas2;

    cout << "Nilai Tugas III : ";
    cin >> tugas3; 
	rata_rata = (tugas1 + tugas2 + tugas3) / 3;

    cout << endl;
    cout << "NPM " << npm << " Siswa yang bernama "<< nama << endl;

    cout << "Memperoleh nilai rata-rata "<< rata_rata<< " dari hasil tugas yang diikutinya."<< endl;

    return 0;
}

