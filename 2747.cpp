#include<iostream>

using namespace std;

int arr[46];

int fibo(int x){
    arr[0] = 0;
    arr[1] = 1;
    for (int i=2;i<46;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[x];
}

int main(){
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}