#include<iostream>
#include<string>

using namespace std;

string solution(string str){
    string ans = str + " ";
    while(1){
        int count = 0;
        for(int i=0;i<ans.length()-1;i++){
            if (ans[i] == ans[i+1]){
                ans = ans.erase(i,2);
                break;
            }
            count ++;
        }
        if (count == ans.length()-1 || count == 0 || ans == "") break;
    }
    ans = ans.substr(0, ans.length()-1);
    return ans;

}

int main(){
    string str1 = "browoanoommnaon";
    string str2 = "zyelleyz";
    cout << '"' << solution(str1) << '"' << "\n";
    cout << '"' << solution(str2) << '"' << "\n"; 
    return 0;
}