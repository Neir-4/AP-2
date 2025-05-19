#include <iostream>
using namespace std;

class contohAkses {
    private: 
        int privateVar;

    protected:
        int protectedVar;

    public: 
        int publicVar;
        //Constructor 
        contohAkses(){
            privateVar = 1;
            protectedVar = 2;
            publicVar = 3;
        }


    void tampilkanSemua(){
        cout<<"Akses dari dalam class : "<<endl;
        cout<<privateVar<<endl;
        cout<<protectedVar<<endl;
        cout<<publicVar<<endl;
    }
    
};

//Class turunan
class Turunan: public contohAkses{
    public:
    void aksesProtected(){
        cout<<"Akses publicVar "<<publicVar<<endl;
        cout<<"Akses protectedVar "<<protectedVar<<endl;
        // cout<<"Akses privateVar "<<privateVar<<endl; error
    }
};

int main(){
    contohAkses obj;
    obj.tampilkanSemua();
    cout<<"Akses dari luar Class : "<<endl;
    cout<<obj.publicVar<<endl;
    // cout<<obj.protectedVar<<endl; //error
    // cout<<obj.privateVar<<endl; // error
    Turunan tur;
    tur.aksesProtected();
}