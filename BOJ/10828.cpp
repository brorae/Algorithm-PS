#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;
    int n;
    string s;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> s;
        if (s=="push"){
            int num;
            cin >> num;
            st.push(num);
        }
        else if (s=="pop"){
            if (st.empty())
                cout << "-1" << "\n";
            else{
                cout << st.top() << "\n";
                st.pop();
            }

        }
        else if (s=="size"){
            cout << st.size() << "\n";
        }   
        else if (s=="empty"){
            cout << st.empty() << "\n";
        }
        else if (s=="top"){
            if (st.empty())
                cout << "-1" << "\n";
            else
                cout << st.top() << "\n";
        }
    }
    return 0;
}