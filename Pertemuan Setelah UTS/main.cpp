#include <iostream>

using namespace std;

int main()
{
    cout << "Revi Anugrah Rahmat Dani" << endl;
    cout << "A11.2022.14126" << endl;
    cout << "A11.4104" << endl;
    cout << "========================" << endl;

    cout << "Harga Permen 500\n";
    cout << "Harga Permen 1000\n";
    cout << "Harga Permen 300\n";
    cout << "========================\n";

    int a=5000;
    int j,h;


    cout << "Masukkan Harga Satuan Permen: "; cin >> h;

    if(h==500){
        cout << "Dito Membeli: 5" << endl;
    }else if(h==1000){
        j=a/h;
        cout << "Dito Membeli: " <<j<< endl;
    }else if(h==300){
        for(h=300 ; h<=a; h+=300){
            j+=1;
        }
        cout<<"Dito Membeli: "<<j<< endl;
    }
    return 0;
}
