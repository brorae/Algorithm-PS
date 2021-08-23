#include<iostream>

using namespace std;

int dp[41][2];

void sol(){
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] =1;
    for (int i=2;i<=40;i++){
        for (int j=0;j<2;j++){
            dp[i][j] = dp[i-1][j] + dp[i-2][j];
        }
    }
}

int main(){
    int t;
    sol();
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << dp[n][0] << " " << dp[n][1] << "\n";
    }
    return 0;
}