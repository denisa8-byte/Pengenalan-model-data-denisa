
#include <iostream>
using namespace std;

int main()
{
    char nama[45];
    float keaktifan, tugas, ujian;
    float murni_keaktifan, murni_tugas;
    float murni_ujian, nilai_akhir;

    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "==========================" << endl;

    cout << "Nama Siswa      : ";
    cin.getline(nama, 45);

    cout << "Nilai Keaktifan : ";
    cin >> keaktifan;

    cout << "Nilai Tugas     : ";
    cin >> tugas;

    cout << "Nilai Ujian     : ";
    cin >> ujian;

    murni_keaktifan = keaktifan * 0.20;
    murni_tugas = tugas * 0.30;
    murni_ujian = ujian * 0.50;

    nilai_akhir = murni_keaktifan
                + murni_tugas
                + murni_ujian;

    cout << endl;
    cout << "Siswa yang bernama " << nama << endl;
    cout << "Dengan nilai persentase yang dihasilkan:"<< endl;

    cout << "Nilai Keaktifan * 20% : "<< murni_keaktifan << endl;

    cout << "Nilai Tugas * 30%     : "<< murni_tugas << endl;

    cout << "Nilai Ujian * 50%     : "<< murni_ujian << endl;

    cout << endl;
    cout << "Jadi siswa yang bernama " << nama<< " memperoleh nilai akhir sebesar "<< nilai_akhir << endl;

    return 0;
}

