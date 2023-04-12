#include <iostream>
#include <cstring>

using namespace std;

// Deklarasi Struct
struct Mahasiswa {
    char nama[50];
    int nim;
    double ipk;
};

// Deklarasi Function
void printMahasiswa(Mahasiswa* mhs) {
    cout << "Nama    : " << mhs->nama << endl;
    cout << "NIM     : " << mhs->nim << endl;
    cout << "IPK     : " << mhs->ipk << endl;
}

int main() {
    // Deklarasi Pointer
    Mahasiswa* mhsPtr;

    // Alokasi Memori
    mhsPtr = new Mahasiswa;

    // Inisialisasi Data
    strcpy(mhsPtr->nama, "John Doe");
    mhsPtr->nim = 123456789;
    mhsPtr->ipk = 3.75;

    // Panggil Function
    printMahasiswa(mhsPtr);

    // Hapus Memori
    delete mhsPtr;

    // Deklarasi CString
    CString str("Hello, World!");
    cout << str << endl;

    return 0;
}
