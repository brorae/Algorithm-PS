#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    queue<int> dev;
    int days;
    for (int i=0;i<progresses.size();i++){
        if((100-progresses[i]) % speeds[i] == 0) days = (100-progresses[i]) / speeds[i];
        else days = (100-progresses[i]) / speeds[i] + 1;
        q.push(days);
    }
    while(!q.empty()){
        int cnt = 0;
        dev.push(q.front());
        q.pop();
        while(!q.empty() && dev.front() >= q.front()){
            dev.push(q.front());
            q.pop();
        }
        while(!dev.empty()){
            cnt++;
            dev.pop();    
        }
        answer.push_back(cnt);
    }
    return answer;
}

int main(){
    // {95,90,99,99,80,99},{1,1,1,1,1,1}
    // {93,30,55},{1,30,5}
    vector<int> v = solution({93,30,55},{1,30,5});
    for (int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}