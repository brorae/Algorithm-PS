#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> v;

bool compare(string a,string b){
    if(a.length() == b.length())
        return a<b; //길이가 같으면 사전 순
    return a.length() < b.length(); //길이가 다르면 길이 순
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        if (find(v.begin(),v.end(),str) == v.end())
            v.push_back(str);
    }
    sort(v.begin(),v.end(),compare);
    for (int i=0;i<v.size();i++){
        cout << v[i] << "\n";
    }
    return 0;
}