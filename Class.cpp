#include <iostream>
#include <string>

using namespace std;

//class tanpa constructor
class VitaKos{
    public :
        string nama_penghuni;
        string asal;
        int umur;
        int no_kamar;
};

int main() {
    VitaKos penghuni1;
    penghuni1.nama_penghuni = "Firman";
    penghuni1.asal = "Tulang Bawang";
    penghuni1.umur = 18;
    penghuni1.no_kamar = 17;

    VitaKos penghuni2;
    penghuni2.nama_penghuni = "Bang Polisi";
    penghuni1.asal = "Palembang";
    penghuni2.umur = 24;
    penghuni2.no_kamar = 1;    
    
    VitaKos penghuni3;
    penghuni3.nama_penghuni = "mba cindo";
    penghuni1.asal = "Jambi";
    penghuni3.umur = 20;
    penghuni3.no_kamar = 24;

    cout << penghuni3.nama_penghuni << endl;
    return 0;
}
