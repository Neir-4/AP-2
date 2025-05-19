//header cpp
#include <iostream>
using namespace std;

int main() {
    //inisialisasi variabel
    string sandi, tulis;
    int i,j;
    system("CLS"); //membersihkan terminal
    cout<<"Masukkan Kata sandi : "; cin>>sandi; 
    cout<<"Masukkan Kata Yang ditulis : "; cin>>tulis;
    for (i=0; i<sandi.length(); i++) { //perulangan ketika i yang bernilai 0 lebih kecil nilainya dari panjang karakter sandi , nilai i akan bertambah 1
        for (j=0; j<sandi.length();j++){ //perulangan ketika j yang bernilai 0 lebih kecil nilainya dari panjang karakter sandi , nilai j akan bertambah 1
            cout<<sandi.length();  //menampilkan sandi 
        }
    } return 0;
    
}
