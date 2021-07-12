#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    int n;
    string str;
    stack <char> st;
    cin >> n;
    cin.ignore(); // 버퍼 비우기
    while(n--){
        getline(cin,str); // 공백 포함 한줄 출력
        str += ' ';
        for (int i=0;i<str.length();i++){
            if (str[i] == ' '){
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
        cout << "\n";
    }
    return 0;
}