#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> v1,v2;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        v1.push_back(str);
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<m;i++){
        string str;
        cin >> str;
        if (binary_search(v1.begin(),v1.end(),str)){
            v2.push_back(str);
        }
    }
    int cnt = (int)v2.size();
    cout << cnt << "\n";
    sort(v2.begin(),v2.end());
    for (int i=0;i<cnt;i++){
        cout << v2[i] << "\n";
    }
    return 0;
}