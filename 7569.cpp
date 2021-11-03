#include<iostream>
#include<queue>
#include<utility>

using namespace std;

int m,n,h,cntZero=0;
int arr[101][101][101];
bool check[101][101][101];
int dx[6] = {1,0,-1,0,0,0};
int dy[6] = {0,1,0,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};
queue<pair<pair<int,int>,int>> q;

void bfs(){
    while(!q.empty()){
        int z = q.front().first.first; // 층수
        int x = q.front().first.second; // x축
        int y = q.front().second; //y축
        q.pop();
        for(int i=0;i<6;i++){
            int nx,ny,nz;
            nx = x+dx[i];
            ny = y+dy[i];
            nz = z+dz[i];
            if (nx<0 || nx>=n || ny<0 || ny>=m || nz<0 || nz>=h) continue;
            if(arr[nz][nx][ny] == 0 && !check[nz][nx][ny]){
                check[nz][nx][ny] = true;
                arr[nz][nx][ny] = arr[z][x][y] + 1;
                q.push({{nz,nx},ny});
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n >> h;
    for (int i=0;i<h;i++){
        for (int j=0;j<n;j++){ //6
            for (int k=0;k<m;k++){ // 5
                cin >> arr[i][j][k];
                if (arr[i][j][k] == 0) cntZero++;
                if (arr[i][j][k] == 1){
                    q.push({{i,j},k});
                    check[i][j][k] = true;
                }
            }
        }
    }
    if (cntZero==0){
        cout << 0;
        return 0;
    } 
    bfs();
    int max = -100;
    for (int i=0;i<h;i++){
        for (int j=0;j<n;j++){
            for (int k=0;k<m;k++){
                if (arr[i][j][k] == 0){
                    cout << -1;
                    return 0;
                }
                if (arr[i][j][k] > max) max = arr[i][j][k];
            }
        }
    }
    cout << max-1;
    return 0;
}