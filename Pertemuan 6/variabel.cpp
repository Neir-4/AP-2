#include <iostream>
using namespace std;

string namaGlobal = "Ilmu";
void namavariabel(){
    string namaLokal = "Komputer";
    //coba akses
    cout<<namaLokal<<endl;
    //coba akses
    cout<<namaGlobal<<endl;
}
int main(){
    namavariabel();
    
    //coba akses
    cout<<namaLokal<<endl; //ga iso
}