#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        string str = "";
        stack<char> st;
        cin >> str;
        for (int j=0;j<str.length();j++){
            if (str[j] == '('){
                st.push(str[j]);
            }
            else{
                if (!st.empty()){
                    st.pop();
                }
                else{
                    st.push(str[j]);
                    break;
                }
            }
        }
        if (st.empty()){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}