#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    // Array declaration & Initialization | Deklarasi Array
    /*2 Cara membuat array: 
    
    Cara 1 : Array kosong*/
    // string nama[5];

    // nama[0] = "Alya";
    // nama[1] = "Kiel";
    // nama[2] = "Rifki";
    // nama[3] = "Farhan";
    // nama[4] = "Dafa";

    /*Cara 2 : array yang bisa langsung diisi*/
    //string nama[5] = "Alya", "Kiel", "Rifki", "Farhan", "Dafa";
    //string nama[] = "Alya", "Kiel", "Rifki", "Farhan", "Dafa";

    //Ascending Element in Array | Nilai element dari kecil ke besar di Array
    // cout << nama[0]<<endl;
    // cout << nama[1]<<endl;
    // cout << nama[2]<<endl;
    // cout << nama[3]<<endl;
    // cout << nama[4]<<endl;        

    //Menggunakan Looping | Penggunaan perulangan dalam array
    // for (int i=0; i<=5; i++){
    //     cout<<nama[i]<<endl;
    // }

    //Descending Element in Array | Nilai element menurun di Array
    //     for (int i=4; i>=0; i--){
    //     cout<<nama[i]<<endl;
    // }

    //Multidimensional Array | Array yang memiliki lebih dari satu dimensi
    //1 3 5
    //2 4 6

    // int matrix[2][3] = {{1,3,5},{2,4,6}};
    // for (int i= 0 ; i<2 ; i++){
    //     for(int j=0 ; j<3; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }  cout<<endl;
    // }

    // int matrix[4][6] = {{1,2,3,4,5,6},
    // {7,8,9,10,11,12,13},
    // {14,15,16,17,18,19},
    // {20,21,22,23,24,25}};
    // for (int i = 0 ; i<4 ; i++){
    //     for (int j = 0 ; j<6; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }cout<<endl;
    // }

    //string (array of characters)
    // string nama = "Kiel";
    // cout<<nama[0]<<endl;
    // cout<<nama[2]<<endl;

    // for (int i = 0 ; i< nama.length(); i++){
    //     cout<<nama[i]<<endl;
    // }

    string s1 = "Hello";
    string s2 = "World";
    
    //1. s1 = s2
    // s1 = s2;
    // cout<<"s1 = "<<s1<<endl;

    //2. s1 = s1 + s2
    // s1 = s1 + s2;
    // cout<<"s1 = "<<s1<<endl;

    //3. s1.length()
    // cout<<s1.length()<<endl;
    // cout<<(s1+s2).length()<<endl;

    //4. s1.substr(n,m)
    // cout<<(s1+s2).substr(5,3)<<endl;

    //Operator sizeof >> operator utk menentukan ukuran tipe daTa, variabel, atau array , dan ukuran nya dlm byte
    // int angka = 10;
    // cout<< sizeof(angka);
    // int nilai[] = {10,20,30,40,50};
    // cout<<sizeof(nilai)<<endl;

    // string s = "kiel";
    // cout<<sizeof(s);

    //Array library
    // array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3};
    // cout<<"Nilai : ";

    // for (int i = 0 ; i< nilai.size(); i++){
    //     cout<<nilai[i]<<" ";
    // }

    // for(float n: nilai) {
    //     cout<< n <<" ";
    // }
}
