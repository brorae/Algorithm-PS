#include<iostream>
#include<queue>

using namespace std;

int main(){
    int n, count = 0, tmp;
    cin >> n;
    queue<int> que;
    for (int i=1;i<=n;i++){
        que.push(i);
    }
    while(que.size() != 1){
        if (count%2 ==0) que.pop();
        else{
            tmp = que.front();
            que.pop();
            que.push(tmp);
        } 
        count++;
    }
    cout << que.front();
    return 0;
}