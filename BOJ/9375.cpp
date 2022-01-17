#include<iostream>
#include<map>

using namespace std;



int main(){
    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        map<string,int> m;
        int ans = 1;
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
        for (auto iter : m){
            ans *= (iter.second+1);
        }
        cout << ans - 1 << "\n";
    }
    return 0;
}