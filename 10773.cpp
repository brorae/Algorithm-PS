#include<iostream>
#include<stack>

using namespace std;

int main(){
    int n,a,sum=0;
    stack<int> st;
    cin >> n;
    while(n--){
        cin >> a;
        if (a!=0)
            st.push(a);
        else
            st.pop();
    }
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }
    cout << sum;
    return 0;
}
/* ***
st.size()로 for문 쓰면 정상적으로 작동을 안하네??
while문 쓰기 
*** */