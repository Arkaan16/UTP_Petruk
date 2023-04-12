#include <iostream>
#include <string>

using namespace std;

//class dengan constructor
class VitaKos{
    public :
        string nama_penghuni;
        string asal;
        string umur;
        int no_kamar;
        
        //ini adalah constructor
        VitaKos(string inputNama, string inputAsal, string inputUsia, int inputKamar){
            VitaKos::nama_penghuni = inputNama;
            VitaKos::asal = inputAsal;
            VitaKos::umur = inputUsia;
            VitaKos::no_kamar = inputKamar;

            cout << VitaKos::nama_penghuni << endl;
            cout << VitaKos::asal << endl;
            cout << VitaKos::umur << endl;
            cout << VitaKos::no_kamar << endl;
            cout << endl;
        }
};

int main() {
    VitaKos penghuni1("Firman", "Tulang Bawang", "18 Tahun", 19);
    VitaKos penghuni2("Bang Polisi", "Pahoman", "25 Tahun", 1);
    VitaKos penghuni3("Mba Chindo", "Tanggerang", "20 Tahun", 26);

    return 0;
}
