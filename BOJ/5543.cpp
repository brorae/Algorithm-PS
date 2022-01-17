#include<iostream>

using namespace std;

int main(){
    int hamberger[3], beverage[2];
    int hmin = 2100, bmin = 2100;
    for(int i=0;i<3;i++){
        cin >> hamberger[i];
        if (hmin > hamberger[i])
            hmin = hamberger[i];
    }
    for(int i=0;i<2;i++){
        cin >> beverage[i];
        if (bmin > beverage[i])
            bmin = beverage[i];
    }
    cout << hmin + bmin - 50 ;
    return 0;
}