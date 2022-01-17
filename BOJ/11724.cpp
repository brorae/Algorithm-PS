#include<iostream>
#include<vector>

using namespace std;

vector<int> arr[1001];
bool check[1001];


void dfs(int x){
    check[x] = true;
    for(int i=0;i<arr[x].size();i++){
        int y = arr[x][i];
        if(!check[y])
            dfs(y);
    }
}

int main(){
    int n,m;
    int count = 0;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    dfs(1);
    count++;
    for(int i=1;i<=n;i++){
        if(!check[i]){
            dfs(i);
            count++;
        }
    }
    cout << count;
    return 0;
}