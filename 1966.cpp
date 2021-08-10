#include<iostream>
#include<queue>

using namespace std;

int main(){
    int n,count,index,prior,su;
    queue<int> que;
    cin >> n;
    while(n--){       
        cin >> count >> index;
        for (int i=0;i<count;i++){
            cin >> prior;
            if (index == i)
         
                su = prior;
            que.push(prior);
        }
    }
}