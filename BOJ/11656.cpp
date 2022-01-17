#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
#include<array>

using namespace std;

int main(){
    string str;
    queue<char> st,tmp;
    string arr[1000];
    int count = 0;
    cin >> str;
    for (int i=0;i<str.length();i++)
        st.push(str[i]);
    
    while(!st.empty()){
        tmp = st;
        string result = "";
        while(!tmp.empty()){
            result += tmp.front();
            tmp.pop();
        }
        arr[count] = result;
        count++;
        st.pop();
    }
    sort(arr,arr+str.length());
    for (int i=0;i<str.length();i++)
        cout << arr[i] << "\n";
    return 0;
}
// substr사용