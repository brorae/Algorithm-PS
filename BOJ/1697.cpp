#include<iostream>
#include<queue>

using namespace std;

int n,k;
queue<pair<int,int> > q;
bool check[200001];

void bfs(){
    q.push(pair<int,int>(n,0));
    check[n] = true;
    while(!q.empty()){
        int loc = q.front().first;
        int time = q.front().second;
        q.pop();
        if (loc == k){
            cout << time << "\n";
            break;
        }
        if (!check[loc+1] && loc+1 <= 100000){
            q.push(pair<int,int>(loc+1,time+1));
            check[loc+1] = true;
        }
        if (!check[loc-1] && loc-1 >= 0){
            q.push(pair<int,int>(loc-1,time+1));
            check[loc-1] = true;
        }
        if (!check[loc*2] && 2*loc <= 100000){
            q.push(pair<int,int>(loc*2,time+1));
            check[loc*2] = true;
        }
    }
}

int main(){
    cin >> n >> k;
    bfs();
    return 0;
}