#include<iostream>
#include<cstring>

using namespace std;

int arr[51][51];
bool check[51][51];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};
int m,n,k;

void dfs(int x,int y){
    check[x][y] = true;
    for (int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if (nx >=0 && nx < n && ny >=0 && ny < m){
            if (arr[nx][ny] == 1 && !check[nx][ny]){
                dfs(nx,ny);
            }
        }
        else continue;
    }
}

int main(){
    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        int cnt = 0;
        cin >> m >> n >> k;
        for (int j=0;j<k;j++){
            int x,y;
            cin >> x >> y;
            arr[y][x] = 1;
        }
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (arr[i][j] && !check[i][j]){
                     cnt ++;
                     dfs(i,j);
                }
            }
        }
        cout << cnt << "\n";
        memset(check, false, sizeof(check));
		memset(arr, 0, sizeof(arr));
    }
}