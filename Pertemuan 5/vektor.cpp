//header cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vector declaration & initialization | Deklarasi vector
    vector<string> nama_karyawan = {"Alya", "Kiel", "Rifki", "Farhan", "Dafa"};

    //ascending element of vector | Nilai menaik di vector
    // for (int i = 0 ; i < nama_karyawan.size(); i++){
    //     cout<<nama_karyawan[i]<<endl;
    // }

    // for(string karyawan : nama_karyawan) {
    //     cout<<karyawan <<endl;
    // }

    //Add data to vector | Menambahkan data ke urutan belakang 
    nama_karyawan.push_back("Imam");
    // for (int i = 0 ; i < nama_karyawan.size(); i++){
    //     cout<<nama_karyawan[i]<<endl;
    // }    

    // Delete data from vector | Menghapus data dari vector
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 3);
    for (int i = 0 ; i < nama_karyawan.size(); i++){
        cout<<nama_karyawan[i]<<endl;
    }


}
