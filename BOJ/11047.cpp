#include<iostream>

using namespace std;

int arr[11];

int main(){
    int n,k;
    cin >> n >> k;
    int cnt = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i] <= k){
            cnt = cnt + (k / arr[i]);
            k %= arr[i];
        }
    }
    cout << cnt;
    return 0;
}