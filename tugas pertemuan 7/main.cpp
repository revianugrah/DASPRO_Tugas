#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    int jrsn;

    cout << " Daftar Jurusan\n";
    cout << " 1. Teknik Informatika\n 2. Sistem Informasi\n 3. Desain Komunikasi Visual " <<endl;
    cout << " Masukan Jurusan Anda: ";
    cin >> jrsn;
    cout << "\n";

    if (jrsn == 1) {
        cout << "Saya jurusan Teknik Informatika " <<endl;
    } else if(jrsn == 2){
        cout << "Saya jurusan Sistem Informasi" <<endl;
    } else if(jrsn == 3){
        cout << "Saya jurusan Desain Komunikasi Visual"<<endl;
    }
    cout<<"\n";

    int smt;

    cout << "Semester\n";
    cout << " Masukan Semester Anda: ";
    cin >> smt;
    cout << "\n";

    if (smt == 1) {
        cout << " Saya dalam kategori Freshman " <<endl;
    } else if (smt == 2){
        cout << "Saya dalam kategori Freshman" <<endl;
    } else if (smt == 3){
        cout << "Saya dalam kategori Sophomore"<<endl;
    } else if (smt == 4){
        cout << "Saya dalam kategori Sophomore"<<endl;
    } else if (smt == 5){
        cout << "Saya dalam kategori Junior"<<endl;
    } else if (smt == 6){
        cout << "Saya dalam kategori Junior"<<endl;
    } else if (smt == 7){
        cout << "Saya dalam kategori Senior"<<endl;
    } else if (smt == 8){
        cout << "Saya dalam kategori Senior"<<endl;
    }

    return 0;
}
