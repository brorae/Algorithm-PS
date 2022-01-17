#include<iostream>
#include<stack>

using namespace std;

int main(){
    int n;
    int a;
    int tmp = 0;
    stack<int> st;
    string result = "";
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        if (a > tmp){
            for (int j=tmp+1;j<=a;j++){
                st.push(j);
                result += "+\n";
            }
            st.pop();
            result += "-\n";
            tmp = a;
        }
        else{
            if (a == st.top()){
                st.pop();
                result += "-\n";
            }
            else{
                result = "NO";
                break;
            }
        }
    }
    cout << result ;
    return 0;
}