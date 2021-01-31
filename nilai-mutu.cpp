#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float nilai;
    cout << "Masukkan Nilai : "; cin >> nilai;

    //Untuk nilai 0-50
    if ((nilai >= 0) && (nilai <= 50)) {
        cout << "Nilai Siswa E" << endl;
    }

    //Untuk nilai 51-60
    else if ((nilai >= 50.01) && (nilai <= 65)) {
        cout << "Nilai Siswa D" << endl;
    }

    //Untuk nilai 61-70
    else if ((nilai >= 65,01) && (nilai <= 70)) {
        cout << "Nilai Siswa C" << endl;
    }

    //Untuk nilai 71-80
    else if ((nilai >= 70,01) && (nilai <= 85)) {
        cout << "Nilai Siswa B" << endl;
    }

    //Untuk nilai 81-100
    else if ((nilai >= 85,01) && (nilai <= 100)) {
        cout << "Nilai Siswa A" << endl;
    }

    //Inputan salah
    else {
        cout << "Nilai harus 0-100\n";
    }

    return 0;
}
