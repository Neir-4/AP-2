#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct alamat{
    string jalan, kota;
    int kodePos;
};

struct mahasiswa{
    string nama;
    int umur;
    float ipk;
    alamat alamat_Mhs; //nested struct
};

int main(){
    system("cls");
    
    mahasiswa mhs1;
    // mhs1.nama = "Kiel";
    // mhs1.umur = 19;
    // mhs1.ipk = 4.00;

    // mhs1.alamat_Mhs.jalan = "Jalan Tani Asli";
    // mhs1.alamat_Mhs.kota = "Medan";
    // mhs1.alamat_Mhs.kodePos = 32045;
    // cout<<"Alamat = "<<mhs1.alamat_Mhs.jalan<<" , "<<mhs1.alamat_Mhs.kota<<" , "<<mhs1.alamat_Mhs.kodePos<<endl;

    vector<mahasiswa> Mahasiswa;
    int n;
    cout <<"Masukkan banyak mahasiswa : "; cin>>n;
    for (int i= 0;i<n;i++){
        cout<<"Mahasiswa "<<i+1<<endl;
        cin.get();
        cout<<"Masukkan Nama : "; getline(cin,mhs1.nama);
        cout<<"Masukkan Umur : "; cin>>mhs1.umur;
        cout<<"Masukkan IPK : "; cin>>mhs1.ipk;
        Mahasiswa.push_back(mhs1);
    }
    for (int i=0 ; i<n; i++){
        cout<<"Mahasiswa "<<i+1<<endl;
        cout<<"Nama : "<<Mahasiswa[i].nama<<endl;
        cout<<"Umur : "<<Mahasiswa[i].umur<<endl;
        cout<<"IPK : "<<Mahasiswa[i].ipk<<endl;
    }
}