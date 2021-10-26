#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    map<string,int> m;
    int answer = 1;
    for (int i=0;i<clothes.size();i++){
        string str = clothes[i][1];
        if (m.find(str) == m.end()){
            m[str] = 1;
        }
        else{
            m[str]++;
        }
    }
    for (auto it=m.begin();it!=m.end();it++){
        answer *= it->second + 1;
    }
    return answer - 1;
}

int main(){
    cout << solution({{"yellowhat", "headgear"}, {"bluesunglasses", "eyewear"}, {"green_turban", "headgear"}});
}