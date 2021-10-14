#include<iostream>
#include<algorithm>

using namespace std;

int arr[301];
int dp[301];
int n;

void sol(){
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(arr[2] + arr[3],arr[1] + arr[3]);
    for (int i=4;i<=n;i++){
        dp[i] = max(dp[i-2]+arr[i],arr[i]+arr[i-1]+dp[i-3]);
    }
    cout << dp[n] << "\n";
}

int main(){
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> arr[i];
    }
    sol();
}