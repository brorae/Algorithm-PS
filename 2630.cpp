#include<iostream>

using namespace std;

int arr[128][128];
int w_cnt=0, b_cnt=0;
void divCon(int x, int y, int n){
    int cnt=0;
    for (int i=x;i<x+n;i++){
        for (int j=y;j<y+n;j++){
            if (arr[i][j] == 1) cnt++;
        }
    }
    if (cnt == n*n) b_cnt++;
    else if(cnt == 0) w_cnt++;
    else{
        divCon(x,y,n/2);
        divCon(x,y+n/2,n/2);
        divCon(x+n/2,y,n/2);
        divCon(x+n/2,y+n/2,n/2);
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    divCon(0,0,n);
    cout << w_cnt << "\n" << b_cnt << "\n";
}