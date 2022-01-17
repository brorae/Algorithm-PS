#include<iostream>
#include<vector>

using namespace std;

vector<int> v;
int n,s;
int cnt = 0;

void dfs(int x,int sum){
    if(x==n) return;
    if(sum+v[x]==s) cnt++;
    dfs(x+1,sum);
    dfs(x+1,sum+v[x]);
}

int main(){
    cin >> n >> s;
    int num;
    for(int i=0;i<n;i++){
        cin >> num;
        v.push_back(num);
    }
    dfs(0,0);
    cout << cnt << "\n";
    return 0;
}