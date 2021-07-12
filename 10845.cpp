#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
    int n;
    int num;
    string str;
    queue<int> q;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> str;
        if (str == "push"){
            cin >> num;
            q.push(num);
        }
        else if (str == "pop"){
            if (q.empty()){
                cout << -1 << "\n";
            }
            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (str == "size"){
            cout << q.size() << "\n";
        }
        else if (str == "empty"){
            cout << q.empty() << "\n";
        }
        else if (str == "front"){
            if (q.empty()){
                cout << -1 << "\n";
            }
            else{
                cout << q.front() << "\n";
            }
        }
        else{
            if (q.empty()){
                cout << -1 << "\n";
            }
            else{
                cout << q.back() << "\n";
            }
        }
    }
    return 0;
}