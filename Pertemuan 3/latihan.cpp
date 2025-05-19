#include <iostream>
using namespace std;

int main() {
    int bil;
    cout<<"Masukkan bilangan : "; cin>>bil;
    if (bil % 5 == 0 && bil % 10 == 0) {
        cout<<"Bilangan "<< bil << " adalah kelipatan 5 dan 10"<< endl;
    } else if (bil % 5 == 0 ){
        cout<<"Bilangan "<< bil << " adalah kelipatan 5"<< endl;
    } else if (bil % 10 == 0 ) {
        cout<<"Bilangan "<< bil << " adalah kelipatan 10"<< endl;
    } else {
        cout<<"Bilangan "<<bil << " Bukan kelipatan 5 atau 10"<<endl;
    }
}