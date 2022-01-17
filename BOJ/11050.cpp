#include<iostream>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int ans = 1;
    for (int i=0;i<k;i++){
        ans = ans * (n-i) / (i+1);
    }
    cout << ans << "\n";
    return 0;
}