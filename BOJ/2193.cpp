#include<iostream>
#include<string>
#include<vector>

using namespace std;

long arr[91];

long dp(int a){
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2;i<=a;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[a];
}

int main(){
    int n;
    cin >> n;
    cout << dp(n) << "\n";
    return 0;
}

