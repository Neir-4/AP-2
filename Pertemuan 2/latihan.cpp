//header cpp
#include <iostream>
using namespace std;

main() {
    //inisialisasi variabel
    int jari2 , volume , lp;
    const float pi = 3.14; //const merupakan nilai tetap yang tidak bisa diganti

    cout << "Masukkan Jari jari lingkaran : "; cin >> jari2;
    volume = float(4) / 3 * pi * jari2 * jari2 * jari2; //float(4) gunanya untuk merubah nilai int menjadi float
    lp = 4 * pi * jari2 * jari2;
    cout<<"Volume : "<<volume << endl; //menampilkan volume
    cout<<"Luas Permukaan : "<<lp << endl; //menampilkan luas permukaan

}
