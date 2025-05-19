//header cpp
#include <iostream>
using namespace std;

//pembuatan class contohAkses
class contohAkses {
    //bagian private
    private: 
        int privateVar;
    //bagian protected
    protected:
        int protectedVar;
    //bagian public
    public: 
        int publicVar;
        //Constructor 
        //fungsi contohAkses
        contohAkses(){
            privateVar = 1;
            protectedVar = 2;
            publicVar = 3;
        }

//prosedur tampilkanSemua untuk menampilkan nilai dari setiap bagian di class
    void tampilkanSemua(){
        cout<<"Akses dari dalam class : "<<endl;
        cout<<privateVar<<endl;
        cout<<protectedVar<<endl;
        cout<<publicVar<<endl;
    }
    
};

//Class turunan
class Turunan: public contohAkses{
    //membuat bagian protected dari class utama menjadi diturunkan kedalam class yang public
    public:
    void aksesProtected(){
        cout<<"Akses publicVar "<<publicVar<<endl;
        cout<<"Akses protectedVar "<<protectedVar<<endl;
        // cout<<"Akses privateVar "<<privateVar<<endl; error //meskipun telah diturunkan bagian private tetap tidak bisa diakses diluar dari class utama
    }
};

int main(){
    contohAkses obj; //inisialisasi variabel obj dengan tipe data class contohAkses
    obj.tampilkanSemua(); //memanggil prosedur tampilkanSemua
    cout<<"Akses dari luar Class : "<<endl;
    cout<<obj.publicVar<<endl; //memanggil nilai dari bagian public (sukses)
    // cout<<obj.protectedVar<<endl; //memanggil nilai dari bagian protected tanpa class turunan (error)
    // cout<<obj.privateVar<<endl; //memanggil nilai dari bagian private tanpa class turunan (error)
    Turunan tur; //inisialisasi variabel tur dengan tipe data class turunan Turunan
    tur.aksesProtected(); //memanggil prosedur aksesProtected
}
