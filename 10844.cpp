#include<iostream>
#include<vector>
#include<string>

using namespace std;

long long dp[101][10];

int sol(int x){
    long long sum = 0;
    for(int i=1;i<10;i++){
        dp[1][i] = 1;
    }
    for(int i=2;i<=x;i++){
        for(int j=0;j<10;j++){
            if (j == 0){
                dp[i][j] = dp[i-1][j+1] % 1000000000;
            }
            else if(j == 9){
                dp[i][j] = dp[i-1][j-1]  % 1000000000;
            }
            else{
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1])  % 1000000000;
            }
        }
    }
    for (int i=0;i<10;i++){
        sum += dp[x][i];
    }
    return sum % 1000000000;
}

int main(){
    int n;
    cin >> n;
    cout << sol(n);
    return 0;
}