//header cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//pembuatan struct alamat
struct alamat{
    string jalan, kota;
    int kodePos;
};

//pembuatan struct mahasiswa
struct mahasiswa{
    string nama;
    int umur;
    float ipk;
    alamat alamat_Mhs; //nested struct
};

int main(){
    system("cls"); //untuk membersihkan terminal

    //inisialisasi mhs1 dengan tipe data mahasiswa
    mahasiswa mhs1;
    // mhs1.nama = "Kiel";
    // mhs1.umur = 19;
    // mhs1.ipk = 4.00;

    //memasukkan nilai dari struct alamat melalui struct mahasiswa
    // mhs1.alamat_Mhs.jalan = "Jalan Tani Asli";
    // mhs1.alamat_Mhs.kota = "Medan";
    // mhs1.alamat_Mhs.kodePos = 32045;
    // cout<<"Alamat = "<<mhs1.alamat_Mhs.jalan<<" , "<<mhs1.alamat_Mhs.kota<<" , "<<mhs1.alamat_Mhs.kodePos<<endl;

    //pembuatan vector Mahasiswa
    vector<mahasiswa> Mahasiswa;
    //inisialisasi variabel n
    int n;
    cout <<"Masukkan banyak mahasiswa : "; cin>>n;
    for (int i= 0;i<n;i++){    //perulangan ketika i yang bernilai 0 lebih kecil dari n , nilai i akan bertambah 1
        cout<<"Mahasiswa "<<i+1<<endl;
        cin.get(); //agar dapat menjalankan getline di line berikutnya
        cout<<"Masukkan Nama : "; getline(cin,mhs1.nama);
        cout<<"Masukkan Umur : "; cin>>mhs1.umur;
        cout<<"Masukkan IPK : "; cin>>mhs1.ipk;
        Mahasiswa.push_back(mhs1); //mendorong data Mahasiswa yang telah diinputkan sebelumnya ke vector Mahasiswa
    }
    for (int i=0 ; i<n; i++){ //menampilkan data mahasiswa sesuai urutan dari data yang dimasukkan sebelumnya
        cout<<"Mahasiswa "<<i+1<<endl;
        cout<<"Nama : "<<Mahasiswa[i].nama<<endl;
        cout<<"Umur : "<<Mahasiswa[i].umur<<endl;
        cout<<"IPK : "<<Mahasiswa[i].ipk<<endl;
    }
}
