#include<iostream>
#include<vector>

using namespace std;

vector<int> arr[501];
bool check[501];
bool isFriend[501];

int sol(int x, int n){
    int cnt = 0;
    for (int i=0;i<arr[x].size();i++){
        int num = arr[x][i];
        check[num] = true;
        isFriend[num] = true;
    }
    for (int i=2;i<=n;i++){
        if(isFriend[i]){
            for (int j=0;j<arr[i].size();j++){
                int num = arr[i][j];
                check[num] = true;
            }
        }
    }
    for (int i=2;i<=n;i++){
        if(check[i] == true) cnt ++;
    }
    return cnt;
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
    cout << sol(1,n);
    return 0;
}