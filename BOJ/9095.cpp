#include<iostream>

using namespace std;

int arr[12];

int dp(int x){
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for (int i=4;i<12;i++){
        arr[i] = arr[i-3] + arr[i-2] + arr[i-1];
    }
    return arr[x];
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        cout << dp(a) << "\n";
    }
    return 0;
}