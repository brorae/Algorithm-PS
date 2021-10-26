#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    queue<pair<int,int> > q;
    priority_queue<int> pq;
    int answer = 0;
    int length = priorities.size();
    for (int i=0;i<length;i++){
         q.push(pair<int,int>({i,priorities[i]}));
         pq.push(priorities[i]);
    }
    while (1){
        if (pq.top() == q.front().second){
            pq.pop();
            answer++;
            if(location == q.front().first) return answer;
            q.pop();
        }
        else{
            q.push(q.front());
            q.pop();
        }
    }
    return answer;
}

int main(){
    cout <<solution({2,1,3,2},2);
}