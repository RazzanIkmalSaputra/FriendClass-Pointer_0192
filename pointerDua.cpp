#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    // Pointer object dengan alokasi dinamis
    mahasiswa *mhs = new mahasiswa{1}; 
