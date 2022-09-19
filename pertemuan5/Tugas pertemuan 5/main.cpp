#include <iostream>

using namespace std;

int main()
{
    string s="\n=============================";
    string n="Nama : Revi Anugrah Rahmat Dani\nNIM : A11.2022.14126\nKelompok : A11.4104\n";
    cout<<n<<s;

    //luas lingkaran
    float r1,has;
    cout<<"\nMasukan Jari-jari:";cin>>r1;
    has=3.14*r1*r1;
    cout << "\nLuas o:"<<has;
    cout<<s;

    //luas persegi Panjang
    float P,L,hs;
    cout<<"\nMasukan Panjang:";cin>>P;
    cout<<"\nMasukan Lebar:";cin>>L;
    hs=P*L;
    cout<<"Luas PP:"<<hs;
    cout<<s;

    return 0;
}
