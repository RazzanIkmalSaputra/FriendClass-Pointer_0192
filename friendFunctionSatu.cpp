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

