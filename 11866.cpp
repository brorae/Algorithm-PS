#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main(){
    queue<int> que;
    queue<int> result;
    int n,k;
    int count = 1;
    cin >> n >> k;
    for (int i=1;i<=n;i++){
        que.push(i);
    }
    while(!que.empty()){
        if (count % k == 0){
            int tmp;
            tmp = que.front();
            que.pop();
            result.push(tmp);
        }
        else{
            int tmp;
            tmp = que.front();
            que.pop();
            que.push(tmp);
        }
        count++;
    }
    cout << "<";
    while(!result.empty()){
        if(result.size() == 1)
            cout << result.front() << ">";
        else
            cout << result.front() << ", ";
        result.pop();
    }
    return 0;
}
