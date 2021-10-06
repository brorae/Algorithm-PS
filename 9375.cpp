#include<iostream>
#include<map>

using namespace std;

map<string,int> m;

int main(){
    int t;
    int ans = 1;
    cin >> t;
    for (int i=0;i<t;i++){
        int n;
        cin >> n;
        for (int j=0;j<n;j++){
            string a,b;
            cin >> a >> b;
            if (m.find(b) == m.end()){
                m[b] = 1;
            }
            else{
                m[b]++;
            }
        }
    }
    for (auto iter = m.begin();iter != m.end();iter++){
        ans *= iter->second;
    }
    cout << ans - 1;
    return 0;
}