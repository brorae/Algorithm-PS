#include<iostream>
#include<algorithm>

using namespace std;

int dp[501][501];

int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cin >> dp[i][j];
        }
    }
    for (int i=1;i<n;i++){
        for (int j=0;j<=i;j++){
            if (j == 0)
                dp[i][j] = dp[i-1][j] + dp[i][j];
            else if (j == i)
                dp[i][j] = dp[i-1][j-1] + dp[i][j];
            else
                dp[i][j] = max(dp[i-1][j-1] + dp[i][j], dp[i-1][j] + dp[i][j]);
        }
    }
    sort(dp[n-1],dp[n-1]+n);
    cout << dp[n-1][n-1];
    return 0;
}