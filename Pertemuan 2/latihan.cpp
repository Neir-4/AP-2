#include <iostream>
using namespace std;

main() {
    int jari2 , volume , lp;
    const float pi = 3.14;

    cout << "Masukkan Jari jari lingkaran : "; cin >> jari2;
    volume = float(4) / 3 * pi * jari2 * jari2 * jari2;
    lp = 4 * pi * jari2 * jari2;
    cout<<"Volume : "<<volume << endl;
    cout<<"Luas Permukaan : "<<lp << endl;

}