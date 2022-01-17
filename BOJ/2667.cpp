#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n;
int arr[26][26];
bool check[26][26];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
vector<int> v;
int cnt;

void dfs(int x,int y){
    cnt++;
    check[x][y] = true;

    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx<0 || nx>=n || ny<0 || ny>= n) continue;
        if (arr[nx][ny] == 1 && !check[nx][ny]){
            dfs(nx,ny);
        }
    }
}

int main(){
    cin >> n;
    string str;
    for (int i=0;i<n;i++){
        cin >> str;
        for (int j=0;j<n;j++){
            arr[i][j] = str[j] - '0';
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (arr[i][j] == 1 && !check[i][j]){
                cnt = 0;
                dfs(i,j);
                v.push_back(cnt);
            }
        }
    }
    cout << v.size() << "\n";
    sort(v.begin(),v.end());
    for (int i=0;i<v.size();i++){
        cout << v[i] << "\n";
    }
    return 0;
}