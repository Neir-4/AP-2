#include <iostream> //header untuk C++
#include <conio.h> //header untuk fungsi getch() dan getche()
using namespace std;  

int main(){
    //inisialisasi variabel
    string nama;
    char kom, jeniskelamin;
    int nim;
    float ip;

    cout<<"Hello World"<<endl;

    cout<<"Masukkan Nama Anda : "; //untuk keluaran
    getline(cin,nama); // agar karakter spasi bisa dibaca

    cout<<"Masukkan NIM Anda : "; 
    cin>>nim; //untuk masukan

    cout<<"Masukkan KOM Anda : "; 
    cin>>kom;
    
    cout<<"Masukkan IP Anda : "; 
    cin>>ip;

    cout<<"Masukkan Jenis Kelamin (L/P) : ";
    jeniskelamin = getche(); //meminta masukkan dan disimpan ke jenisKelamin

    cout<<"\n"<<"Nama Anda : "<<nama<<endl;
    cout<<"NIM Anda : "<<nim<<endl;
    cout<<"KOM Anda : "<<kom<<endl;
    cout<<"IP Anda : "<<ip<<endl;
    cout<<"Jenis Kelamin Anda : "; putchar(jeniskelamin); //putchar untuk menampilkan tipe data char dari jenisKelamin

    getch(); //karakter yang diketik tidak di tampilkan di layar
    /*Comment multiline*/
}
