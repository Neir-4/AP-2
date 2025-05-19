//header cpp
#include <iostream>
using namespace std;

int main(){
    //inisialisasi variabel
    string kalimat;
    int i;
    system("CLS"); //untuk membersihkan terminal
    cout<<"Masukkan Kalimat : "; getline(cin,kalimat); //getline untuk mendapatkan nama lengkap dengan spasi
    for(i=0; i<kalimat.length(); i++ ){    //memulai perulangan ketika nilai i lebih kecil dari panjang karakter kalimat , nilai awal i adalah 0 dan akan bertambah 1 seiring perulangan
        kalimat[i] = toupper(kalimat[i]);    //index atau karakter dari kalimat akan diubah kedalam huruf kapital
    }
    cout<<"kalimat dalam huruf kapital : "<<kalimat<<endl; //menampilkan kalimat
    return 0;
}
