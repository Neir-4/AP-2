//header cpp
#include <iostream>
using namespace std;

int main() {
    //inisialisasi variabel
    string kalimat;
    int i;
    system("CLS"); //untuk membersihkan terminal
    cout<<"Masukkan Kalimat : "; getline(cin,kalimat); //menerima input kalimat bahkan dengan spasi
    for (i=0; i<kalimat.length(); i++){ //perulangan ketika i yang bernilai 0 lebih kecil nilai nya dari panjang karakter kalimat, i akan bertambah 1
        if (kalimat[i]=='a'||kalimat[i]=='e'||kalimat[i]=='i'||kalimat[i]=='o'||kalimat[i]=='u'){ //operasi kondisi jika index atau karakter dari kalimat huruf a , e , i , o , dan u
        kalimat[i] = toupper(kalimat[i]); //huruf dari kalimat akan diubah ke huruf kapital
        }
    } cout<<kalimat<<endl; //menampilkan kalimat
    return 0;
}
