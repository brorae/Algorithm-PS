#include<iostream>

using namespace std;

bool prime[1000001];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i=2;i<=1000000;i++){
        if (!prime[i]){
            for (int j=i+i;j<=1000000;j+=i){
                prime[j] = true;
            }
        }
    }

    for (int i=0;i<t;i++){
        int num;
        int cnt = 0;
        cin >> num;
        for (int j=2;j<=num/2;j++){
            if (!(prime[j] || prime[num-j])){
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}