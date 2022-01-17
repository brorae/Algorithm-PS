#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// bool comp(string a, string b){
//     if (a.size() == b.size()){
//         return a < b;
//     }
//     return a.size() > b.size();
// }

int main(){
    vector<int> v = {0,1,3,5,6,8,10};
    for (int i=0;i<11;i++){
        cout << i << ":" << v.size() - (lower_bound(v.begin(),v.end(),i) - v.begin());
        cout << "\n";
    }
}