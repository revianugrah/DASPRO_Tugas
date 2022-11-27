#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x, y, r=0, an, mi, ma, e=0, sum, v, i, t=0, u, w=0;
float a, f;

//soal no 1
cout << "------------------" << endl;
cout << "Soal no. 1" << endl;
cout << "------------------" << endl;
for (x = 100, y = 1; x >=  1 && y <= 100; x--, y++) {
  cout << "i = " << x << " dan j = "<< y << endl;
}

//soal no 2
cout << "\n------------------" << endl;
cout << "Soal no. 2" << endl;
cout << "------------------" << endl;
for( y = 1; y <= 100; y++) {
    if(y % 2 == 1) {
        continue;
    }
    cout << "Nilai genap adalah " << y << endl;
}

// soal no 3
cout << "\n------------------" << endl;
cout << "Soal no. 3" << endl;
cout << "------------------" << endl;
for(x = 100; x >= 1; x--) {
        cout << x << endl;
    if(x == 55) {
        break;
    }
}

// soal no 4
cout << "\n------------------" << endl;
cout << "Soal no. 4" << endl;
cout << "------------------" << endl;
for(y = 1; y <= 20; y++) {
 cout << y << endl;
 r += y;
 a = (float)r/y;
}
cout << "\nJumlah = " << r << endl;
cout << "Rata-rata = "<< a << endl;

//soal no 5
cout << "\n------------------" << endl;
cout << "Soal no. 5" << endl;
cout << "------------------" << endl;
cout << "Program ini berhenti jika Anda  Menginputkan Angka = -99\n" << endl;
for(y = 1; ; y++) {
    cout << "Masukan Nilai Anda = ";
    cin >> an;
    if(an == -99) {
        cout << "\nKeluar Karena Break " << endl;
        break;
    }
}

//soal no 6
cout << "\n------------------" << endl;
cout << "Soal no. 6" << endl;
cout << "------------------" << endl;
for(y = 1; ; y++) {
    cout << "Masukan Nilai Anda = ";
    cin >> an;
    if(an == -99) {
        break;
    }

    if(y == 1) {
        mi = an;
        ma = an;
    } else { if(an > ma) {
        ma = an;
    } if(an < mi) {
        mi = an;
    }
    }
}
cout << endl;
cout << "Max = " << ma << endl;
cout <<"Min = " << mi << endl;



//soal no 7
cout << "------------------" << endl;
cout << "Soal no. 7" << endl;
cout << "------------------" << endl;
for(y = 1; ; y++) {
    cout << "Masukan Nilai Anda = ";
    cin >> i;
    if(i == 9999) {
        break;
    }
    cout << i << endl;
    t = t + i;
}
cout << "Jumlah angka = " << t << endl;



//soal no 8
cout << "\n------------------" << endl;
cout << "Soal no. 8" << endl;
cout << "------------------" << endl;
for(y = 0; ; y++) {
    cout << "Masukan Nilai Anda = ";
    cin >> an;
    if(an == 9999) {
        break;
    }
    cout << an << endl;
    r += y;
}
cout << "Jumlah angka = " << y << endl;


// soal no 9
cout << "\n------------------" << endl;
cout << "Soal no. 9" << endl;
cout << "------------------" << endl;
for(y = 0; ; y++) {
    cout << "Masukan Nilai Anda = ";
    cin >> u;
    cout << u << endl;
    if(u == 9999) {
        break;
    } else if(u != 9999) {
        w += u;
    }
    e += 1;
}
cout << "Jumlah angka = " << w << endl;
cout << "Jumlah cacah angka = " << e << endl;

// soal no 10
cout << "\n------------------" << endl;
cout << "Soal no. 10" << endl;
cout << "------------------" << endl;
for(x = 1; x <= 7; x++) {

    cout << "Looping yang ke - " << x << endl;
    for(y = 1; y <= 10; y++) {
        cout << "-angka " << y << "-" << endl;
    }
}

//soal no 11
cout << "\n------------------" << endl;
cout << "Soal no. 11" << endl;
cout << "------------------" << endl;
cout << "Masukan angka = ";
cin >> an;
for(x = 1; x <= 10; x++) {
    sum = x*an;
   cout << x << " x " << an << " = " << sum << endl;
}

//soal no 12

cout << "\n------------------" << endl;
cout << "Soal no. 12" << endl;
cout << "------------------" << endl;
cout << "-------------------------" << endl;
cout << "Celcius     Fahremheit" << endl;
cout << "-------------------------" << endl;
for(v = 0; v <= 100; v++) {
  f = ((9.0/5)*v)+32;
  printf("%d \t|\t %.1f |\n",v, f);
}


// soal no 13
cout << "\n------------------" << endl;
cout << "Soal no. 13" << endl;
cout << "------------------" << endl;
cout << "------------------------------------------------------------------------------" << endl;
cout << "Celcius \t Fahremheit \t Keterangan" << endl;
cout << "------------------------------------------------------------------------------" << endl;
for(v = 100; v >= -45; v--) {
  f = ((9.0/5)*v)+32;
  if(v == 100) {
  printf("%d \t\t %.1f \t\t Air Mendidih \n",v, f);
  } else if(v == 40) {
  printf("%d \t\t %.1f \t\t Air Mandi Panas \n",v, f);
  } else if(v == 37) {
  printf("%d \t\t %.1f \t\t Temperatur Tubuh \n",v, f);
  } else if(v == 30) {
  printf("%d \t\t %.1f \t\t Cuaca Pantai\n",v, f);
  } else if(v == 21) {
  printf("%d \t\t %.1f \t\t Temperatur Ruangan \n",v, f);
} else if(v == 10) {
  printf("%d \t\t %.1f \t\t Hari Yang Dingin \n",v, f);
} else if(v == 0) {
  printf("%d \t\t %.1f \t\t Titik Beku Air \n",v, f);
} else if(v == -18) {
  printf("%d \t\t %.1f \t\t Cuaca Dingin Bersalju \n",v, f);
} else if(v == -40) {
  printf("%d \t\t %.1f \t\t Cuaca Sangat Dingin Bersalju \n",v, f);
  cout << "------------------------------------------------------------------------------" << endl;
}
}

    return 0;
}
