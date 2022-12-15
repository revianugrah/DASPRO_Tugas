#include <iostream>

using namespace std;

int main()
{
    cout<<"Revi Anugrah Rahmat Dani"<<endl;
    cout<<"A11.2022.14126"<<endl;
    cout<<"A11.4104"<<endl;
    cout<<"========================"<<endl;

    float rt_rt;
    int s1 = 0, s2 = 0, rev = 2;
    int r[3][2][2];

    cout << "Array kelipatan 4 " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                r[i][j][k] = rev;
                rev += 2;
                if(rev % 4 == 0) {
                cout << rev << " ";
                s1 += rev;
                s2 += 1;
                rt_rt = (float)s1/s2;
                }
            }
        }
    }
    cout << endl;
    cout << "Kelipatan 4 = " << s1 << endl;
    cout << "Rata-rata kelipatan 4 = " << rt_rt << endl;
    cout<<"================================"<<endl;

    return 0;
}
