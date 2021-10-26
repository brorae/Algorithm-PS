#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> v;

int main(){
    string a;
    int p;
    int ans;
    cin >> a >> p;
    int sum;
    v.push_back(a);
    string str;
    int idx;
    while(1){
        sum = 0;
        for (int i=0;i<a.length();i++){
            sum += pow((int)(a[i]-'0'),p);
        }
        a = to_string(sum);
        if (find(v.begin(),v.end(),a) != v.end()){
            idx = find(v.begin(),v.end(),a) - v.begin();
            break;
        }
        v.push_back(a);
    }
    cout << idx;
    return 0;
}