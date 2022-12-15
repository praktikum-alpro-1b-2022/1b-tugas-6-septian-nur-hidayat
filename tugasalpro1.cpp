#include <iostream>
using namespace std;
void konversi();
void konversi2(){
    float f =170;
    float c =(f-32)*5/9;
    cout<<"Hasil konversi menggunakan tipe data float="<<c;

}
void konversi3(){
    double f =170;
    double c =(f-32)*5/9;
    cout<<"Hasil konversi menggunakan tipe data double="<<c;
}
int main(){

    cout << "+==========================================+" << endl;
    cout << "|        PROGRAM KONVERSI                  |" << endl;
    cout << "+==========================================+" << endl;
    konversi();
    cout<<endl;
    konversi2();
    cout<<endl;
    konversi3();
}
void konversi(){
    int f = 170;
    int c = (f - 32)*5/9;
    cout << "Suhu Celcius Nya adalah = "<< c;
}
