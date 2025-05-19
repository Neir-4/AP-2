//header cpp
#include <iostream>
using namespace std;

string namaGlobal = "Ilmu"; //variabel global
void namavariabel(){
    string namaLokal = "Komputer"; //variabel lokal
    //coba akses
    cout<<namaLokal<<endl;    //memanggil variabel lokal di prosedur
    //coba akses
    cout<<namaGlobal<<endl; //memanggil variabel global di prosedur
}
int main(){
    namavariabel(); //memanggil prosedur namavariabel
    
    //coba akses
    cout<<namaLokal<<endl; //tidak bisa memanggil variabel lokal prosedur namavariabel di program utama
}
