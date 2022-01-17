#include<iostream>
#include<queue>

using namespace std;

int main(){
    int n,k;
    queue<int> q;
    cin >> n >> k;
    cout << '<';
    for (int i=0;i<n;i++){
        q.push(i+1);
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<k-1;j++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if (q.size() != 1){
            cout << ", ";
        }
        q.pop(); 
    }
    cout << '>';
    return 0;
}