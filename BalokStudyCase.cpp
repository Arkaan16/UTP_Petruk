#include <iostream>
#include <string>

using namespace std;

class Balok{
    private :
        double panjang;
        double lebar;
        double tinggi;
    public :

        Balok(double p, double l, double t){
            this -> panjang = p;
            this -> lebar = l;
            this -> tinggi = t;
        }

        void setPanjang(double panjang){
            this -> panjang = panjang;
        }
        void setLebar(double lebar){
            Balok::lebar = lebar;
        }
        void setTinggi(double tinggi){
            Balok::tinggi = tinggi;
        }
        double getPanjang(){
            return panjang;
        }
        double getLebar(){
            return lebar;
        }
        double getTinggi(){
            return tinggi;
        }

        double hasil(){
            return panjang*lebar*tinggi;
        }


};

int main(){
    Balok valok(10,10,10);
    
    cout << valok.getPanjang()<< endl;
    cout << valok.getLebar()<< endl;
    cout << valok.getTinggi()<< endl;
    cout << valok.hasil();



    return 0;
}