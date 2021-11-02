#include<iostream>
#include<queue>
#include<set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // priority_queue<int> pq1;
    // priority_queue<int, vector<int>, greater<int>> pq2;
    int t,k;
    char cmd;
    int n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> k;
        multiset<int> s;
        for (int j=0;j<k;j++){
            cin >> cmd >> n;
            if (cmd == 'I'){
                s.insert(n);
                // pq1.push(n);
                // pq2.push(n);
            }
            else{
                if (s.empty()) continue;
                if (n==-1){
                    s.erase(s.begin());
                    // pq2.pop();
                }
                else{
                    s.erase(--s.end());
                    // pq1.pop();
                }
            }
        }
        if(s.empty()) cout << "EMPTY";
        else{
            auto iter1 = s.begin();
            auto iter2 = --s.end();
            cout << *iter2 << " " << *iter1;
        }
        cout << "\n";
    }
    return 0;
}