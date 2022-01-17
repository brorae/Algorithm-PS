#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v, back;
    int n,x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
        back.push_back(x);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int i = 0; i < n; i++) {
        cout << lower_bound(v.begin(), v.end(), back[i]) - v.begin() << " ";
    }
    return 0;
}