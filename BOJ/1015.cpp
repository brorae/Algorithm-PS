#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<pair<int,int> > v;
    int p[51]={0,};
    int n;
    cin >> n;
    int num;
    for (int i=0;i<n;i++){
        cin >> num;
        v.push_back({num,i});
    }
    sort(v.begin(),v.end());
    for (int i=0;i<n;i++){
        p[v[i].second] = i;
    }
    for (int i=0;i<n;i++){
        cout << p[i] << " ";
    }
    return 0;
}