#include<iostream>

using namespace std;

int arr[1001] = {0,};

int dp(int x){
    arr[1] = 1;
    arr[2] = 3;
    for (int i=3;i<1001;i++){
        arr[i] = (arr[i-1] + 2*arr[i-2]) % 10007;
    }
    return arr[x];
}

int main(){
    int n;
    cin >> n;
    cout << dp(n);
    return 0;
}