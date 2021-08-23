#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    int n;
    int arr[27];
    string str;
    stack<double> st;
    cin >> n >> str;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=0;i<str.length();i++){
        if (str[i] == '*' || str[i] == '/' || str[i] == '+' || str[i] == '-'){
            double a = st.top();
            st.pop();
            double b = st.top();
            st.pop();
            if(str[i] == '*'){
                // cout << b*a << "\n";
                st.push(b*a);
            }
            else if(str[i] == '/'){   
                // cout << b/a << "\n";
                st.push(b/a);
            }
            else if(str[i] == '+'){
                // cout << b+a << "\n";
                st.push(b+a);
            }
            else if(str[i] == '-'){
                // cout << b-a << "\n";
                st.push(b-a);
            }
        }
        else{
            st.push(arr[str[i]-'A']);
        }
    }
    double result = st.top();
    cout << fixed;
    cout.precision(2);
    cout << result << "\n";
    return 0;
}