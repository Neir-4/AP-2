//header cpp
#include <iostream>
#include <string>
using namespace std;

//pembuatan struct atau tipe data
struct mahasiswa{
    //inisialisasi isi dari struct mahasiswa
    string nama;
    int umur;
    float ipk;
};


int main(){
    //pembuatan variabel mhs1 dengan tipe data mahasiswa
    mahasiswa mhs1;
    mhs1.nama = "Kiel";
    mhs1.umur = 19;
    mhs1.ipk = 4.00;
    // cout<<"Nama : "; cin>>mhs1.nama;
    // cout<<"Umur : "; cin>>mhs1.umur;
    // cout<<"IPK : "; cin>>mhs1.ipk;
    
    //pembuatan variabel ptrMhs yang isinya sama dengan mhs1 dengan tipe data mahasiswa
    mahasiswa *ptrMhs = &mhs1;
    cout<<"Nama = "<<ptrMhs->nama<<endl;
    cout<<"Umur = "<<ptrMhs->umur<<endl;
    cout<<"IPK = "<<ptrMhs->ipk<<endl;
}
