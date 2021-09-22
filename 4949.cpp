#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    while(1){
        string str;
        stack<char> st;
        getline(cin,str);
        // if (str == ".") break;
        for (int i=0;i<str.length();i++){
            if (str[i] == '('){
                st.push(')');
            }
            if (str[i] == '['){
                st.push(']');
            }
            if (str[i] == st.top()){
                st.pop();
            }
        }
        if (st.empty()) cout << "yes";
        else cout << "no";
        return 0;
    }
}