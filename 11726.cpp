#include<iostream>

using namespace std;

int arr[1001] = {0,};

int tile(int n){
    arr[1] = 1;
    arr[2] = 2;
    
    if (n == 1 || n == 2) return arr[n];
    
    for (int i=3;i<=n;i++){
        arr[i] = (arr[i-2] + arr[i-1]) % 10007;
    }

    return arr[n];
}

int main(){
    int n;
    cin >> n;
    cout << tile(n);
}