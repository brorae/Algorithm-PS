#include<iostream>

using namespace std;

int main(){
    int cnt = 0;
    int x;
    cin >> x;
    while(x!=0){
        if (x % 2 == 1){
            cnt++;
        }
        x /= 2;
    }
    cout << cnt;
    return 0;
}