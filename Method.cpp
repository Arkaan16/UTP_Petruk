#include <iostream>
#include <string>

using namespace std;

//class constructor + methods
class VitaKos{
    public :
        string nama_penghuni;
        string asal;
        double umur;
        int no_kamar;

        VitaKos(string nama, string asal, double umur, int no_kamar){
            nama_penghuni = nama;
            VitaKos::asal = asal;
            VitaKos::umur = umur;
            VitaKos::no_kamar = no_kamar;
        }
        
        // methode tanpa parameter
        void tampilkanData(){
            cout << "Nama penghuni : " << nama_penghuni << endl;
            cout << "Asal Kota     : " << asal << endl;
        }

        // methode dengan parameter
        void ubahnama(const char* newNama){//sama aja kayak string
            nama_penghuni = newNama;
        }
        // methode tanpa parameter dengan return
        string getName(){
            return VitaKos::nama_penghuni;
        }
        int getKamar(){
            return VitaKos::no_kamar;
        }

        //methode dengan parameter dan return
        double tambahUmur(const double &tambahanUmur){
            return VitaKos::umur + tambahanUmur;
        }
};

int main() {
    VitaKos penghuni1("Firman", "Tulang Bawang", 18, 19);
    VitaKos penghuni2("Bang Polisi", "Pahoman", 25, 1);
    VitaKos penghuni3("Mba Chindo", "Tanggerang", 20, 26);

    // memanggil method
    //1
    penghuni1.ubahnama("Ahlan");
    //2
    penghuni1.tampilkanData();
    cout << endl;
    //3
//    string dataNama = penghuni2.getName();
    cout << "Penghuni kamar ke-" << penghuni2.getKamar() << " adalah " << penghuni2.getName() <<".";
    cout << endl;
    //4
    cout << penghuni3.getName() << " sekarang telah berusia " << penghuni3.tambahUmur(2) << " tahun.";
    return 0;
}