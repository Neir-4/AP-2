//header cpp
#include <iostream>
using namespace std;

int main() {
    //inisialisasi variabel
    int nilai;
    
    system("CLS"); //untuk membersihkan terminal

    cout<<"Masukkan Nilai : ";
    cin>>nilai;

    // //if statement | Operasi Kondisi
    // if (nilai <= 65 ) {
    //     cout<<"Anda tidak lulus" << endl;
    // }

    // if else statement | Operasi Kondisi selain dari semua kondisi sebelumnya
    // if (nilai <= 65 ) {    jika nilai kurang dari sama dengan 65 maka
    //     cout<<"Anda Tidak Lulus"<< endl;
    // } else { selain itu maka
    //     cout<<"Anda Lulus"<< endl;
    // }

    //if else if statement 
    // if (nilai == 100) {
    //     cout<<"Anda Kece"<<endl;
    // } else if (nilai <= 65) {
    //     cout<<"Anda Tidak Lulus"<<endl;
    // } else {
    //     cout<<"Anda Lulus"<<endl;
    // }

    // nested if | Operasi kondisi di dalam operasi kondisi
    // if (nilai <= 65) {
    //     cout<<"Anda tidak lulus"<<endl;
    // } else {
    //     if (nilai == 100) {
    //         cout<<"Anda lulus dan anda hebat" << endl
    //     } else {
    //         cout<<"Anda Lulus"<<endl;
    //     }

    // }

    // switch case | Operasi Kondisi yang berisi percabangan berdasarkan dari variabel yang ditentukan
    // switch (nilai) {
    //     case 1:
    //         cout<<"Senin"<<endl;
    //         break; break untuk menghentikan program
        
    //     case 2:
    //         cout<<"Selasa"<<endl;
    //         break;
        
    //     case 3:
    //         cout<<"Rabu"<<endl;
    //         break;
        
    //     case 4:
    //         cout<<"Kamis"<<endl;
    //         break;
        
    //     case 5:
    //         cout<<"Jumat"<<endl;
    //         break;
        
    //     case 6:
    //         cout<<"Sabtu"<<endl;
    //         break;
        
    //     case 7:
    //         cout<<"Minggu"<<endl;
    //         break;
    //     default: //selain dari pernyataan yang ada    
    //         cout<<"Inputan tidak valid"<<endl;
    //         break;
    // }

    // switch range 
    // switch(nilai) {
    //     case 85 ... 100 : cout << "A" << endl; break;
    //     case 80 ... 84 : cout << "B+" << endl; break;
    //     case 75 ... 79 : cout << "B" << endl; break;
    //     case 70 ... 74 : cout << "C+" << endl; break;
    //     case 65 ... 69 : cout << "C" << endl; break;
    //     case 60 ... 64 : cout << "D" << endl; break;
    //     default : cout<< "E"<<endl; break;
    // }
    // Ternary operator | Operator dengan tiga operand
    // a > 5 ? 9 : 6
    // string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    // cout<< nilai << " tuh bilangan "<<checkNum << " sih"<<endl;
}
