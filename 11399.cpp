#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;

int main(){
    int n;
    int ans = 0;
    cin >> n;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<n;i++){
        ans = ans + (v[i] * (n-i));
    }
    cout << ans;
    return 0;
}
