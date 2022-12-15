#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    cout<<"Revi Anugrah Rahmat Dani"<<endl;
    cout<<"A11.2022.14126"<<endl;
    cout<<"A11.4104"<<endl;
    cout<<"========================"<<endl;


    int r,e,v,rev=0,li=2;
    int y[3][2][2];
    float r_r;

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                y[i][j][k]=li;
                li+=2;
                cout <<li<<endl;
                rev+=li;
                r_r=(float)rev/li;
            }
        }
    }
    printf("\n");
    cout<<"kelipatan 4= "<<rev<<endl;
    printf("rata-rata sum kelipatan 4= %.2f \n",r_r);
    cout<<"================================"<<endl;


    return 0;
}
