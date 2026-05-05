

class pelajar
{
private:
    int nilai;

public:
    pelajar() { nilai = 100; }
    // Member function dari class manusia dijadikan friend
    friend void manusia::showNilaiPelajar(pelajar &x);
};

