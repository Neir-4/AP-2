#include <iostream>
using namespace std;

int main() {
    system("CLS");
    //Goto label | Untuk melakukan pindah line sesuai dengan line tujuan yang telah ditentukan
    // Hello World , Fasilkom-TI, Ilmu Komputer, IKLC
    // -> Hello World , IKLC , Ilmu Komputer, Fasilkom-TI
    // a:
    //     cout<<"Hello World"<<endl;
    //     goto d;
    // b:
    //     cout<<"Fasilkom-TI"<<endl;
    //     return 0;  
    // c:
    //     cout<<"Ilmu Komputer"<<endl;
    //     goto b;
    // d:
    //     cout<<"IKLC"<<endl;
    //     goto c;

    //menampilkan bilangan genap dari 10 -> 2 dengan goto
    // int i = 10;
    // genap:
    // if(i % 2 = 0) {
    //     cout<<i<<" ";
    // } i--;

    // if (i>=2){
    //     goto genap
    // }

    //statement while | Perulangan yang terus mengulang selama kondisi yang ditentukan bernilai benar
    // int i = 1;
    // while (i<= 10) {
    //     if (i % 2 == 0) {
    //         cout<<i<<" ";
    //     } i++;
    // }

    //statement do-while | Perulangan yang akan berjalan sekali dan terus mengulang selama kondisi yang ditentukan bernilai benar
    // int i = 1;
    // do {
    //     cout<< i <<endl;
    // } while(i<=0);

    // statement for | Perulangan yang akan terus mengulang sampai batas yang kita tentukan
    // for (inisialisasi , kondisi, increase)
    // for (int i = 1; i<=10 ; i+=2) {
    //     cout<<"Hello World"<<endl; // i = i + 2
    // }

    //nested for | Perulangan for di dalam perulangan for
    //***** 5 x 5
    // for (int i = 1 ; i <= 5 ; i++) {
    //     for (int j=1; j<=5; j++){
    //         cout<<"* ";
    //     } cout<<endl;
    // }

    // segitiga siku-siku | Contoh Nested for dengan menyusun bintang (*) menjadi segitiga siku-siku
    // for (int i=1;i<=5;i++) {
    //     for (int j = 1 ; j<=i ; j++) {
    //         cout << "* ";
    //     } cout<<endl;
    // }
}
