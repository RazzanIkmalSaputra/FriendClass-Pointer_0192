#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    string nama;
public:
    // Deklarasi friend function
    friend void setNama(mahasiswa &a, string);
};

// Definisi fungsi di luar class
void setNama(mahasiswa &a, string b)
{
    a.nama = b;
    cout << a.nama;
}

int main()
{
    mahasiswa joko;
    setNama(joko, "Kairi Kumar");
    return 0;
}