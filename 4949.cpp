#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    
    while(1){
        string str;
        stack<char> st;
        bool check = true;
        getline(cin,str);
        if (str[0] == '.') break;
        for (int i=0;i<str.length();i++){
            if (str[i] == '(' || str[i] == '[')
                st.push(str[i]);
            else if (str[i] == ')'){
                if (!st.empty() && st.top() == '('){
                    st.pop();
                }
                else{
                    check = false;
                    break;
                }
            }
            else if (str[i] == ']'){
                if (!st.empty() && st.top() == '['){
                    st.pop();
                }
                else{
                    check = false;
                    break;
                }
            }
            
        }
        if (st.empty() && check ) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
    return 0;
}