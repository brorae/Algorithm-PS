#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    for (int i=1;i<143;i++){
        for (int j=0;j<i;j++){
            v.push_back(i);
        }
    }
    int a,b;
    cin >> a >> b;
    int ans = 0;
    for (int i=a;i<=b;i++){
        ans += v[i-1];
    }
    cout << ans;
    return 0;
}
