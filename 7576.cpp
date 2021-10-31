#include<iostream>
#include<queue>

using namespace std;

int m,n;
int arr[1001][1001];
queue<pair<int,int> > q;
int ans = 0;

void bfs(){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x-1>=0){
            if(arr[x-1][y] == 0){
                arr[x-1][y] = arr[x][y] + 1;
                q.push({x-1,y});
            }
        }
        if (y-1>=0){
            if(arr[x][y-1] == 0){
                arr[x][y-1] = arr[x][y] + 1;
                q.push({x,y-1});
            }
        }
        if (x+1<n){
            if(arr[x+1][y] == 0){
                arr[x+1][y] = arr[x][y] + 1;
                q.push({x+1,y});
            }
        }
        if (y+1<m){
            if(arr[x][y+1] == 0){
                arr[x][y+1] = arr[x][y] + 1;
                q.push({x,y+1});
            }
        }
    }
}

int main(){
    cin >> m >> n;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> arr[i][j];
            if (arr[i][j] == 1){
                q.push({i,j});
            }
        }
    }
    bfs();
    
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (arr[i][j] == 0){
                cout << -1;
                return 0;
            }
            if (ans < arr[i][j]){
                ans = arr[i][j];
            }
        }
    }
    cout << ans-1;
    return 0;
}