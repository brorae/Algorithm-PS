#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;

bool compare(int a,int b){
    return a>b;
}

int main(){
    string str;
    cin >> str;
    for (int i=0;i<str.length();i++){
         v.push_back(str[i] - '0');
    }
    sort(v.begin(),v.end(),compare);
    for (int i=0;i<str.length();i++){
        cout << v[i];
    }
    return 0;
}