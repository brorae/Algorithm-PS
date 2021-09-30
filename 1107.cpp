#include<iostream>
#include<algorithm>

using namespace std;

bool broken[11];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n;
    cin >> m;
    while(m--){
        int notWork;
        cin >> notWork;
        broken[notWork] = true;
    }
    int minimum = abs(n-100);
    for (int i=0;i<1000000;i++){
        string num = to_string(i);
        int cnt = 0;
        for (int j=0;j<num.length();j++){
            if (broken[num[j]-'0']){
                break;
            }
            else{
                cnt++;
            }    
        }
        if (cnt == num.length()){
            int tmp = cnt + abs(i-n);
            minimum = min(tmp,minimum);
        }
    }
    cout << minimum;
    return 0;
}