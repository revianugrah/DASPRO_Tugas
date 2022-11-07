#include <iostream>

using namespace std;

int main()
{
/*

        int f1=0,f2=1,hasil=0;
        int n=12;
        cout<<"----------------------------"<<endl;
        cout<<"Fibonacci\n";
        cout<<"Revi Anugrah Rahmat Dani\n";
        cout<<"A11.2022.14126\n";
        cout<<"----------------------------"<<endl;

        for(int a=1; a<=n; a++){
            for(int b=1; b<=a; b++){
                f1=f2;
                f2=hasil;
                cout<< hasil<<" ";
                hasil=f1+f2;
            }
            f1=0;
            f2=1;
            hasil=0;
            cout<<"\n";
        }


//macam-macam variable
int angka = 12;// variabel data angka bulat
cout << angka << endl;
char ukuran_baju = 'L'; // 1 character/huruf char
cout << ukuran_baju << endl;
bool benar = true;// boolen isinya isinya (true/falfe)
cout << benar << endl;
string kalimat = "Irpan masih ngebucin";// untuk menggunakan karrakter lebih dari 1 == kalimat
cout << kalimat << endl;
float desimal = 1.5;// bilangan desimal (koma)
cout << desimal << endl;

 if(12 % 2 == 1) { // 12 bil genap
    cout << "benar" << endl; // bil genap
} else {
    cout << "salah" << endl; // salah
}


int kpk,bil1,bil2,hasil;
        //kpk
        cout << "Mencari KPK " <<endl;
        cout << "Masukan Bil 1 : "; cin >> bil1;
        cout << "Masukan Bil 2 : "; cin >> bil2;
        cout << endl;
        for(int i=1;i <= bil2;i++) {
                kpk = kpk+bil1;
        if(kpk%bil2 == 0) {
            cout << "KPK : " << kpk << endl;
        }
    }

    // switch case
        char pilih1; // variable character
        cout << "Pilih a dan b \n"; cin >> pilih1;
        switch(pilih1) {
                case 'a': {
                    cout << "Tidak mudeng Kalkulus " << endl;
                    break;
                }
                case 'b': {
                    cout << "AFK saat diskrit" << endl;
                    break;
                }
                default: cout << "Pilihan tidak ada" << endl; // kalau menggunakan if , default == else atau
                // pernyataan tidak benar
        }
*/

int umur;
    cout << "masukan umur : ";
    cin >> umur;
    /*if(umur <= 20) {
        if(umur <= 4) {
            cout << "tergolong anak-anak" << endl;
        } else {
                cout << "Remaja" << endl; // umur 4 - 20 th remaja
        }
    } else {
            cout << "Dewasa" << endl;
    }*/

    if(umur >= 4 && umur <= 10) {
        cout << "anak-anak" << endl;
    } else if(umur >= 10 && umur <= 20) {
        cout << "Remaja" << endl;
    } else {
        cout << "Dewasa" << endl;
    }
    return 0;
}
