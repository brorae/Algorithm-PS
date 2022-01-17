#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    string str;
    stack<char> st;
    bool check;
    getline(cin,str);
    str += ' ';
    for (int i=0;i<str.length();i++){
        if(str[i] == '<'){
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            check = true;
            cout << '<';
        }
        else if(str[i] == '>'){
            check = false;
            cout << '>';
        }
        else if(check) cout << str[i];
        else if(str[i] == ' '){
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            cout << ' ';
        }
        else{
            st.push(str[i]);
        }
    }
    return 0;
}