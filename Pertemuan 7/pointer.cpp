//header cpp
#include <iostream>
using namespace std;

//fungsi untuk penjumlahan
void penjumlahan(int a, int b){
    cout<< a + b<<endl;
}

//fungsi untuk penjumlahan dengan pointer
void penjumlahanPointer(int *a, int *b){
    *a += *b;
    cout<< *a<<endl;
}

//fungsi utama
int main(){
    system("cls");
    //Pointer Declaration
    int number = 35;
    int *pointer_number = &number;

    // cout<<"Isi variabel number = "<<number <<endl;
    // cout<<"alamat dari memori variabel number = "<<&number<<endl;
    // cout<<"Isi variabel pointer_number = "<<pointer_number<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_number = "<<*pointer_number<<endl;
    // cout<<"Alamat memori variabel pointer_number = "<<&pointer_number<<endl;
    // cout<<endl;

    //Pointer Operation
    // *pointer_number = 25;
    // cout<<"Isi variabel number = "<<number <<endl;
    // cout<<"alamat dari memori variabel number = "<<&number<<endl;
    // cout<<"Isi variabel pointer_number = "<<pointer_number<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_number = "<<*pointer_number<<endl;
    // cout<<"Alamat memori variabel pointer_number = "<<&pointer_number<<endl;
    // cout<<endl;

    //Pointer in Array | Penggunaan Pointer dalam array
    int num[] = {1,2,3,4,5};
    int *pointer_num = num;
    // cout<<"Isi variabel num = "<<num[0] <<endl;   
    // cout<<"alamat dari memori variabel num = "<<&num<<endl;
    // cout<<"Isi variabel pointer_num = "<<pointer_num<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_num = "<<*pointer_num<<endl;
    // cout<<"Alamat memori variabel pointer_num = "<<&pointer_num<<endl;
    // cout<<endl;

    // *pointer_num += 5;
    // cout<<"Isi variabel num = "<<num[0] <<endl;   
    // cout<<"alamat dari memori variabel num = "<<&num<<endl;
    // cout<<"Isi variabel pointer_num = "<<pointer_num<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_num = "<<*pointer_num<<endl;
    // cout<<"Alamat memori variabel pointer_num = "<<&pointer_num<<endl;
    // cout<<endl;

    //Pointer in Parameter | Penggunaan pointer di parameter fungsi
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1,num2);
    // cout<<num1<<endl;
    // cout<<num2<<endl;
    // penjumlahanPointer(&num1, &num2);
    // cout<<num1<<endl;
    // cout<<num2<<endl;

    //Pointer in Pointer | Penggunaan Pointer di dalam Pointer
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score; //pointer in pointer
    // cout << "Isi variabel score = "<<score<<" dan alamat memorinya "<<&score<<endl;
    // cout<< "Isi variabel pointer_score "<<pointer_score<<" dan isi variabel yang ditunjuk oleh pointer_score "<<*pointer_score<<" alamat memori pointer_score "<<&pointer_score<<endl;
    // cout<< "Isi variabel ptr_pointer_score "<<ptr_pointer_score<<" dan isi variabel yang ditunjuk oleh ptr_pointer_score "<<**ptr_pointer_score<<" alamat memori pointer_score "<<&ptr_pointer_score<<endl;

    //Dynamic Pointer
    int *ptr = new int;
    *ptr = 30;
    cout<<"Isi variabel ptr "<<*ptr<<" dan alamat "<<&ptr<<endl;

    delete ptr;
    cout<<"Isi variabel ptr "<<*ptr<<" dan alamat "<<&ptr<<endl;

}
