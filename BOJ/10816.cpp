#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n;
    for (int i=0;i<n;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    cin >> m;
    while(m--){
        int num;
        cin >> num;
        int ans = upper_bound(v.begin(),v.end(),num) - lower_bound(v.begin(),v.end(),num);
        cout << ans << " ";
    }
    return 0;
}