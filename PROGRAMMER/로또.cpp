#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int cnt = 0, zero = 0;;
    sort(lottos.begin(),lottos.end());
    sort(win_nums.begin(),win_nums.end());
    for (int i=0;i<lottos.size();i++){\
        if (binary_search(win_nums.begin(),win_nums.end(),lottos[i])){
            cnt++;
        }
        if (lottos[i] == 0){
            zero++;
        }
    }
    int minValue = cnt;
    int maxValue = cnt+zero;
    if (minValue == 2) minValue = 5;
    else if (minValue == 3) minValue = 4;
    else if (minValue == 4) minValue = 3;
    else if (minValue == 5) minValue = 2;
    else if (minValue == 6) minValue = 1;
    else minValue = 6;
    if (maxValue == 2) maxValue = 5;
    else if (maxValue == 3) maxValue = 4;
    else if (maxValue == 4) maxValue = 3;
    else if (maxValue == 5) maxValue = 2;
    else if (maxValue == 6) maxValue = 1;
    else maxValue = 6;
    answer.push_back(maxValue);
    answer.push_back(minValue);
    return answer;
}

int main(){
    vector<int> v = {45, 4, 35, 20, 3, 9};
    vector<int> v2 = {20, 9, 3, 45, 4, 35};
    vector<int> ans = solution(v,v2);
    for (int i=0;i<ans.size();i++){
        cout << ans[i] << ' ';
    }
}