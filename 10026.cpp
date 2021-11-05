#include<iostream>

using namespace std;

int cnt1=0,cnt2=0;
int n;
char arr[101][101];
bool check1[101][101],check2[101][101];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void dfs1(int x,int y,char col){
    check1[x][y] = true;
    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if (nx<0 || nx>=n || ny<0 || ny>=n) continue;
        if (arr[nx][ny]==col && !check1[nx][ny]){
            dfs1(nx,ny,col);
        }
    }
}
void dfs2(int x,int y,char col){
    check2[x][y] = true;
    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if (nx<0 || nx>=n || ny<0 || ny>=n) continue;
        if (col == 'B'){
            if (arr[nx][ny]==col && !check2[nx][ny]){
                dfs2(nx,ny,col);
            }
        }
        else{
            if ((arr[nx][ny]=='R' || arr[nx][ny]=='G') && !check2[nx][ny]){
                dfs2(nx,ny,col);
            }
        }
    }
}

int main(){  
    cin >> n;
    string str;
    for (int i=0;i<n;i++){
        cin >> str;
        for (int j=0;j<n;j++){
            arr[i][j] = str[j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (!check1[i][j]){
                dfs1(i,j,arr[i][j]);
                cnt1++;
            }
            if (!check2[i][j]){
                dfs2(i,j,arr[i][j]);
                cnt2++;
            }
        }
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}