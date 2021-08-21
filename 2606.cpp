#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> arr[101];
bool check[101];
int count = 0;

void dfs(int x){
    check[x] = true;
    for (int i=0;i<arr[x].size();i++){
        int y = arr[x][i];
        if(!check[y]){
            dfs(y);
            count++;
        }
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    while(m--){
        int a,b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    dfs(1);
    cout << count << "\n";
    return 0;
}