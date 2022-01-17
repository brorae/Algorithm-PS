#include<iostream>

using namespace std;

int main(){
    string str;
    string tmp="";
    int ans=0;
    bool isMinus = false;
    cin >> str;
    for (int i=0;i<=str.length();i++){
        if(str[i]=='-' || str[i]=='+' || i==str.length()){
            if(isMinus){
                ans -= stoi(tmp);
            }
            else{
                ans += stoi(tmp);
            }
            tmp="";
            if (str[i]=='-'){
                isMinus=true;
            }
        }
        else{
            tmp+=str[i];
        }
    }
    cout << ans;
    return 0;
}