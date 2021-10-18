#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int student1[] = {1,2,3,4,5};
int student2[] = {2,1,2,3,2,4,2,5};
int student3[] = {3,3,1,1,2,2,4,4,5,5};

bool compare(pair<int,int> a, pair<int,int> b){
    if (a.second == b.second) a.first < b.first;
    return a.second < b.second;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int ans1 = 0, ans2 = 0, ans3 = 0;
    for (int i=0;i<answers.size();i++){
        if (answers[i] == student1[i%5]) ans1++;
        if (answers[i] == student2[i%8]) ans2++;
        if (answers[i] == student3[i%10]) ans3++;
    }
    vector<pair<int,int> > v = {{1,ans1},{2,ans2},{3,ans3}};
    sort(v.begin(),v.end(),compare);
    if (v[2].second != v[1].second) answer = {v[2].first};
    else if (v[2].second == v[1].second){
        if (v[1].second == v[0].second) answer = {1,2,3};
        else answer = {v[1].first, v[2].first};
    }
    return answer;
}
