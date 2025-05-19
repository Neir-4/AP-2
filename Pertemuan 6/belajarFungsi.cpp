//header cpp
#include <iostream>
using namespace std;

//void untuk prosedur yang tidak memiliki nilai balikan
void sapa(string nama){
    cout<<"Halo "<<nama<<" ! Selamat datang di AP2!"<<endl;
}

int main(){
    string namapengguna = "Kiel";
    sapa(namapengguna);    //memanggil prosedur sapa dengan nilai parameter nya dari namapengguna

}
