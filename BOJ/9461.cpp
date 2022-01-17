#include<iostream>

using namespace std;

long long dp[101] = {0,1,1,1,2,2,3,4,5,7,9};

void sol(){
    for(int i=11;i<=100;i++){
        dp[i] = dp[i-3] + dp[i-2];
    }
}

int main(){
    int t;
    cin>>t;
    int n;
    sol();
    for(int i=0;i<t;i++){
        cin >> n;
        cout << dp[n] << "\n";
    }
}