#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n;
vector<pair<int,int> > v;

bool comp(pair<int,int> x, pair<int,int> y){
    if (x.second == y.second) return x.first < y.first;
    return x.second < y.second;
}

int main(){
    cin >> n;
    for (int i=0;i<n;i++){
        int start,end;
        cin >> start >> end;
        v.push_back(make_pair(start,end));
    }
    sort(v.begin(),v.end(),comp);
    
    int now = v[0].second;
    int cnt = 1;
    for (int i=1;i<n;i++){
        if (now <= v[i].first){
            cnt++;
            now = v[i].second;
        }
    }
    cout << cnt << "\n";
    return 0;
}