#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> arr[101];
// long long arr[101];
// long long num[101];

int dp(int x){
    for (int i=0;i<9;i++){
        arr[1].push_back(to_string(i+1));
    }
    
    if (x == 1) return arr[x].size();
    for (int i=2;i<=x;i++){
        for (int j=0;j<arr[i-1].size();j++){
            string num = arr[i-1][j];
            char last = num[num.length()-1];
            if (last == '0' || last == '9'){
                int a = (int)(last-'0');
                if (last == '0'){
                    arr[i].push_back(num + to_string(a+1));
                }
                else{
                    arr[i].push_back(num + to_string(a-1));
                }
            }
            else{
                int a = (int)(last-'0');
                arr[i].push_back(num + to_string(a-1));
                arr[i].push_back(num + to_string(a+1));
            }
        }
    }
    return arr[x].size();
}
// long long dp(int x){
//     arr[1] = 9;
//     num[1] = 1;
//     num[2] = 2;
//     for (int i=3;i<=x;i++){
//         num[i] = num
//     }
//     for (int i=2;i<=x;i++){
//         arr[i] = (arr[i-1] - num[i-1]) *2 + num[i-1];
//     }
//     return arr[x] % 1000000000;
// }

int main(){
    int n;
    cin >> n;
    cout << dp(n);
    return 0;
}