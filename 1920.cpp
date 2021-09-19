#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n,m;
    cin >> n;
    for (int i=0;i<n;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    cin >> m;
    for (int i=0;i<m;i++){
        int num;
        cin >> num;
        if (find(v.begin(),v.end(),num) == v.end()) cout << 0;
        else cout << 1;
        cout << "\n";
    }
    return 0;
}