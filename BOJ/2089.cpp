#include<iostream>
#include<string>

using namespace std;


int main(){
    string ans = "";
    int n;
    cin >> n;
    if (n==0){
        cout << 0;
        return 0;
    }
    while(n != 0){
        if (n%2 == 0 || n>0){
            ans += to_string(n%-2);
            n /= -2;
        }
        else{
            ans += '1';
            n = (n/-2) + 1;
        }
    }
    for (int i=0;i<ans.length();i++){
        cout << ans[ans.length()-1-i];
    }
    return 0;
}