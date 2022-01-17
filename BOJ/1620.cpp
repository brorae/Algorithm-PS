#include<iostream>
#include<map>

using namespace std;

map<string,string> mm;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;
    string name;
    for (int i=1;i<=n;i++){
        cin >> name;
        mm.insert({name,to_string(i)});
        mm.insert({to_string(i),name});
    }
    for (int i=0;i<m;i++){
        cin >> name;
        cout << mm[name] << "\n";
    }
    return 0;
}