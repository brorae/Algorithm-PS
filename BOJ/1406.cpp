#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    string str;
    char cmd1,cmd2,tmp;
    stack<char> st1,st2;
    int n;
    cin >> str;
    cin >> n;
    for (int i=0;i<n;i++){
        st1.push(str[i]);
    }
    while(n--){
        cin >> cmd1;
        if (cmd1 == 'L'){
            if (!st1.empty()){
                tmp = st1.top();
                st1.pop();
                st2.push(tmp);
            }
        }
        else if (cmd1 == 'P'){
            cin >> cmd2;
            st1.push(cmd2);
            while (!st2.empty()){
                st1.push(st2.top());
                st2.pop();
            }
        }
    }
}  