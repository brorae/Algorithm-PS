#include<iostream>
#include<string>

using namespace std;

string arr[8] = {"000","001","010","011","100","101","110","111"};

int main(){
    string str;
    cin >> str;
    if (str == "0"){
        cout << 0;
        return 0;
    }
    string ans = "";
    int len = str.length();
    for (int i=0;i<str.length();i++){
        ans += arr[int(str[i]-'0')];
    }
    while(ans[0] != '1'){
        ans = ans.substr(1);
    }
    cout << ans << "\n";
    return 0;
}