#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string ans = "";
    int n,b;
    cin >> n >> b;
    while(n!=0){
        if (n%b >= 10)
            ans += n%b + 55;
        else
            ans += to_string(n%b);
        n /= b;
    }
    reverse(ans.begin(),ans.end());
    cout << ans;
    return 0;
}