#include<iostream>
#include<stack>
#include<queue>
#include<string>

using namespace std;

int main(){
    string str;
    char cmd1,cmd2,tmp;
    stack<char> st;
    queue<char> que;
    int n;
    cin >> str;
    cin >> n;
    for (int i=0;i<n;i++){
        st.push(str[i]);
    }
    while(n--){
        cin >> cmd1;
        if (cmd1 == 'L'){
            tmp = st.top();
            st.pop();
            que.push(tmp);
        }
        else if (cmd1 == 'P'){
            cin >> cmd2;
            st.push(cmd2);
        }
    }
}  