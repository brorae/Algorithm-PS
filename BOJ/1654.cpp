#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long arr[10001];
    int k,n;
    long long s = 1;
    long long e = 0;
    cin >> k >> n;
    for (int i=0;i<k;i++){
        cin >> arr[i];
        e = max(e,arr[i]);
    }
    
    long long ans = 0;
    while (s <= e){
        int sum = 0;
        long long mid = (s+e)/2;
        for (int i=0;i<k;i++){
            sum += (arr[i]/mid);
        }
        if (sum >= n){
            if(ans < mid) ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    cout << ans;
    return 0;
}