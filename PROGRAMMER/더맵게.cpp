#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int,vector<int>,greater<int> > pq;
    for (int i=0;i<scoville.size();i++){
        pq.push(scoville[i]);
    }
    while (pq.size() != 1 && pq.top() < K){
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        int num = first + (second*2);
        pq.push(num);
        answer++;
    }
    if (pq.size() == 1 && pq.top() < K) return -1;
    // sort(scoville.begin(),scoville.end());
    // while(scoville[0] < K){
    //     answer++;
    //     int num = scoville[0] + (scoville[1] * 2);
    //     scoville[0] = num;
    //     scoville.erase(scoville.begin()+1,scoville.begin()+2);
    //     sort(scoville.begin(),scoville.end());
    //     if (scoville.size()==1 && scoville[0] < K) return -1;
    // }
    return answer;
}

int main(){
    cout << solution({1,2,3,9,10,12},7);
}
