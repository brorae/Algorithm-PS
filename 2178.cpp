#include<iostream>
#include<queue>

using namespace std;

int n,m;
int arr[101][101];
bool check[101][101];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1} ;

queue<pair<int,int> > q;

void bfs(int x, int y){
    check[x][y] = true;
    q.push({x,y});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            int next_x = x+dx[i];
            int next_y = y+dy[i];
            if (next_x>=0 && next_x<n && next_y>=0 && next_y<m){
                if(arr[next_x][next_y] == 1 && !check[next_x][next_y]){
                    arr[next_x][next_y] = arr[x][y] + 1;
                    check[next_x][next_y] = true;
                    q.push({next_x,next_y});
                }
            }
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    string str;
    for(int i=0;i<n;i++){
        cin >> str;
        for (int j=0;j<m;j++){
            arr[i][j] = str[j]-'0';
        }
    }
    bfs(0,0);
    cout << arr[n-1][m-1] << "\n";
    return 0;
}