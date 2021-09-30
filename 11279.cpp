#include<iostream>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    priority_queue<int> q;
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        if (num == 0){
            if (q.empty()){
                cout << 0 << "\n";
            }
            else{
                int tmp = q.top();
                q.pop();
                cout << tmp << "\n";
            }
        }
        else{
            q.push(num);
        }
    }
    return 0;
}