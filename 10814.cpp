#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include<algorithm>

using namespace std;

vector<pair<int,string> > v;

bool compare(pair<int,string> p1,pair<int,string> p2){
    return p1.first < p2.first;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int age;
        string name;
        cin >> age >> name;
        v.push_back(pair<int,string>(age,name));
    }
    sort(v.begin(),v.end(),compare);
    for (int i=0;i<n;i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}