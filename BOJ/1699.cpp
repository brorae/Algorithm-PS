#include<iostream>

using namespace std;

int dp[100000];

int main() {
    dp[0] = 0;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		dp[i] = i;
		for (int j = 1; j * j <= i; j++) {
			if (dp[i] > dp[i - j * j] + 1) {
				dp[i] = dp[i - j * j] + 1;
			}
		}
	}
	cout << dp[n] << '\n';
    return 0;
}