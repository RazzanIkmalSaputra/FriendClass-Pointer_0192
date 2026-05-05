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

    double hitungLuas() {
        return 0.5 * diagonal1 * diagonal2;
    }

 
    double hitungKeliling() {
        return 4 * sisi;
    }

    void output() {
        cout << "\n--- Hasil Belah Ketupat ---" << endl;
        cout << "Luas     : " << hitungLuas() << endl;
        cout << "Keliling : " << hitungKeliling() << endl;
    }
};

class LayangLayang {
private:
    double d1, d2, sisiA, sisiB;

public:

    friend double BelahKetupat::hitungKeliling();

    void input() {
        cout << "\n[ Input Layang-Layang ]" << endl;
        cout << "Masukkan Diagonal 1 : "; cin >> d1;
        cout << "Masukkan Diagonal 2 : "; cin >> d2;
        cout << "Masukkan Sisi Miring A: "; cin >> sisiA;
        cout << "Masukkan Sisi Miring B: "; cin >> sisiB;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 2 * (sisiA + sisiB);
    }

    void output() {
        cout << "\n--- Hasil Layang-Layang ---" << endl;
        cout << "Luas     : " << hitungLuas() << endl;
        cout << "Keliling : " << hitungKeliling() << endl;
    }
};

int main() {

    BelahKetupat bk;
    LayangLayang ll;

    bk.input();
    bk.output();

    ll.input();
    ll.output();

    return 0;
}

