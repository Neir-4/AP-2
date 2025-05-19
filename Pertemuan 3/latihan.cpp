//header cpp
#include <iostream>
using namespace std;

int main() {
    //inisialisasi variabel
    int bil;
    cout<<"Masukkan bilangan : "; cin>>bil; //mengeluarkan dan meminta masukan untuk nilai variabel bil
    if (bil % 5 == 0 && bil % 10 == 0) { //jika bil sisa bagi 5 adalah 0 dan bil sisa bagi 10 adalah 10 
        cout<<"Bilangan "<< bil << " adalah kelipatan 5 dan 10"<< endl;
    } else if (bil % 5 == 0 ){ //jika bil sisa bagi 5 adalah 0
        cout<<"Bilangan "<< bil << " adalah kelipatan 5"<< endl;
    } else if (bil % 10 == 0 ) { //jika bil sisa bagi 10 adalah 0
        cout<<"Bilangan "<< bil << " adalah kelipatan 10"<< endl;
    } else {    //selain dari kondisi sebelumnya
        cout<<"Bilangan "<<bil << " Bukan kelipatan 5 atau 10"<<endl;
    }
}
