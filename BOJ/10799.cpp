#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    string str;
    stack<char> st;
    int result = 0;
    cin >> str;
    for(int i=0;i<str.length();i++){
        if(str[i] == '(')
            st.push(str[i]);
        else{
            st.pop();
            if(str[i-1] == '(')
                result += st.size();
            else
                result += 1;
        }
    }
    cout << result ;
    return 0;
}