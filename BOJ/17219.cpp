#include<iostream>
#include<map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<string,string> s;
    int n,m;
    string addrs,pwd;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> addrs >> pwd;
        s.insert(pair<string,string>(addrs,pwd));
    }
    for (int i=0;i<m;i++){
        cin >> addrs;
        cout << s[addrs] << "\n";
    }
    return 0;
}
