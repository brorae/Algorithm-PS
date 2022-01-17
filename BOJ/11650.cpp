#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

vector<pair<int,int>> v;

int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        v.push_back(pair<int,int>(x,y));
    }
    sort(v.begin(),v.end());
    for (int i=0;i<n;i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}