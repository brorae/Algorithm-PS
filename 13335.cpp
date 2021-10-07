#include<iostream>
#include<queue>

using namespace std;

queue<int> q;

int main(){
    int n,w,l;
    cin >> n >> w >> l;
    int t;
    while(n--){
        cin >> t;
        q.push(t);
    }
}