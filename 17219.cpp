#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

vector<pair<string,string> > v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    string addrs,pwd;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> addrs >> pwd;
        v.push_back(pair<string,string>(addrs,pwd));
    }
    sort(v.begin(),v.end());
    for (int i=0;i<m;i++){
        cin >> addrs;
        int left = 0;
        int right = n-1;
        while(left<=right){
            int mid = (left+right)/2;
            if (v[mid].first == addrs){
                cout << v[mid].second << "\n";
                break;
            }
            else if (v[mid].first < addrs){
                left = mid + 1;
            }
            else{
                right = mid-1;
            }
        }
    }
    return 0;
}
