#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<queue>

using namespace std;

vector<int> arr[1001];
bool check[1001];

void dfs(int x){
    cout << x << " ";
    check[x] = true;
    for(int i=0;i<arr[x].size();i++){
        int y = arr[x][i];
        if(!check[y])
            dfs(y);
    }
}

void bfs(int x){
    queue<int> q;
    q.push(x);
    check[x] = true;
    while(!q.empty()){
        int num = q.front();
        q.pop();
        cout << num << " ";
        for(int i=0;i<arr[num].size();i++){
            int y = arr[num][i];
            if(!check[y]){
                check[y] = true;
                q.push(y);
            }
        }
    }
}

int main(){
    int n,m,v;
    cin >> n >> m >> v;
    for (int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for (int i=1;i<=n;i++){
        sort(arr[i].begin(),arr[i].end());
    }
    dfs(v); 
    cout << "\n";
    memset(check, false, sizeof(check));
    bfs(v);
    return 0;
}
/*
배열에서 전역변수는 자동 초기화 되지만 지역변수는 초기화 되지 않음
*/