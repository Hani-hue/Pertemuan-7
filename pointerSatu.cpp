#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk =" << nim << endl;
    }
};

int main()
{
    mahasiswa mhs{1}; // object mhs
    mhs.showNim();    // member access operator

    mahasiswa &refMhs = mhs; // pointer Rereference
    refMhs.nim = 2;
    mhs.showNim();

    mahasiswa *pMhs = &mhs; // pointer Dereference
    pMhs->nim = 3;          // Arrow operator
    pMhs->showNim();
    return 0;
}
