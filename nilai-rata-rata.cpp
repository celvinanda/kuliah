#include<iostream>

using namespace std;
int input = 0;
int jumlah = 0;
int banyakData = 3;
double rata;

void hitungAverage(int jumlah, int banyakData) {
    cout << "Jumlah Angka     = " << jumlah << endl;
    cout << "Banyak Data      = " << banyakData << endl;
    rata = jumlah / banyakData;
    cout << "Rata-ratanya     = " << rata;
}

int main() {
    cout << "Masukan data \n";
    for (int i = 1; i <= banyakData; i++) {
        cin >> input;
        jumlah = jumlah + input;
    }
    hitungAverage(jumlah, banyakData);

    return 0;
}
