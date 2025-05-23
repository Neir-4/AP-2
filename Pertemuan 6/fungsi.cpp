//header cpp
#include <iostream>
using namespace std;

//fungsi tanpa nilai balikan
void tampilkanPesan(){
    cout<<"==== SELAMAT DATANG DI AP 2 ===="<<endl;
}

//fungsi dengan nilai balikan
int tambah(int a, int b){
    return a + b;
}

//fungsi overload | Fungsi yang memiliki nama sama namun berbeda tipe dengan fungsi lainnya
int kali(int a, int b){
    return a * b;
}
double kali(double a, double b){
    return a * b; 
}

//fungsi rekursif | Fungsi yang memanggil dirinya sendiri
int faktorial (int n){
    if (n==0 || n == 1){
        return 1;
    }else{
        return n * faktorial(n-1);
    }
}

int main(){
    system("CLS");
    int x = 5, y=3;

    //menggunakan fungsi tanpa nilai balikan
    tampilkanPesan();
    
    //menggunakan fungsi dengan nilai balikan
    int hasilTambah = tambah(x,y);
    cout<<"Hasil penjumlahan : "<<hasilTambah<<endl;

    //menggunakan fungsi overload
    int hasilKaliInt = kali(x,y);
    double hasilKaliDouble = kali(5.5,2.0);
    cout<<"Hasil perkalian (int) : "<<hasilKaliInt<<endl;
    cout<<"Hasil perkalian (double): "<<hasilKaliDouble<<endl;

    //menggunakan fungsi faktorial
    int angka = 5;
    cout<<"Faktorial dari : "<<angka<<" adalah "<<faktorial(angka)<<endl;
}
