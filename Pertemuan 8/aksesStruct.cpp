#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
    string nama;
    int umur;
    float ipk;
};


int main(){

    mahasiswa mhs1;
    mhs1.nama = "Kiel";
    mhs1.umur = 19;
    mhs1.ipk = 4.00;
    // cout<<"Nama : "; cin>>mhs1.nama;
    // cout<<"Umur : "; cin>>mhs1.umur;
    // cout<<"IPK : "; cin>>mhs1.ipk;

    mahasiswa *ptrMhs = &mhs1;
    cout<<"Nama = "<<ptrMhs->nama<<endl;
    cout<<"Umur = "<<ptrMhs->umur<<endl;
    cout<<"IPK = "<<ptrMhs->ipk<<endl;
}