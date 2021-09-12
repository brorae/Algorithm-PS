#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    vector<int> vec;
    cin >> n;
    while(n--){
        int a;
        cin >> a; 
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << "\n";
    }
    return 0;
}