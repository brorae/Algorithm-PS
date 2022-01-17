#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    long long num;
    vector<long long> v;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if (n == 1)
        num = v[0] * v[0];
    else
        num = v[0] * v[v.size()-1];
    cout << num;
    return 0;
}