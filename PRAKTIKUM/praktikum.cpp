#include <iostream>
#include <cmath>

using namespace std;

class LayangLayang;

class BelahKetupat {
private:
    double diagonal1, diagonal2, sisi;

public:
    void input() {
        cout << "[ Input Belah Ketupat ]" << endl;
        cout << "Masukkan Diagonal 1: "; cin >> diagonal1;
        cout << "Masukkan Diagonal 2: "; cin >> diagonal2;
        cout << "Masukkan Sisi      : "; cin >> sisi;
    }

 