#include<iostream>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int,vector<int>,greater<int>> pq;
    int n;
    int x;
    cin >> n;
    while(n--){
        cin >> x;
        if (x==0){
            if (pq.empty()) cout << 0 << "\n";
            else{
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else{
            pq.push(x);
        }
    }
    return 0;
}