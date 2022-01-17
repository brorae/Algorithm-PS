#include<iostream>

using namespace std;

int arr[1000001];
long long cnt[1000001];
int main(){
    int n,a,b,c;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> b >> c;
    for (int i=0;i<n;i++){
        arr[i] = arr[i] - b;
        cnt[i]++;
        if (arr[i] > 0){
            if (arr[i] % c == 0){
                cnt[i] = cnt[i] + (arr[i]/c);
            }
            else{
                cnt[i] = cnt[i] + (arr[i]/c) + 1;
            }
        }
    }
    long long sum = 0;
    for (int i=0;i<n;i++){
        sum += cnt[i];
    }
    cout << sum;
    return 0;
}