#include<iostream>
#include<queue>

using namespace std;

int main(){
    int t,n,m;
    cin >> t;
    for (int i=0;i<t;i++){
        queue<pair<int,int> > q;
        priority_queue<int> pq;
        cin >> n >> m;
        for (int j=0;j<n;j++){
            int a;
            cin >> a;
            q.push(pair<int,int>(j,a));
            pq.push(a); 
        }

        int cnt = 0;
        while(!q.empty()){
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if (pq.top() == value){
                pq.pop();
                cnt++;
                if (index == m){
                    cout << cnt << "\n";
                    break;
                }
            }
            else{
                q.push(pair<int,int>(index,value));
            }
        }
    }
    return 0;
}
