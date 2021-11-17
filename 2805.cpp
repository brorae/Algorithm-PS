#include<iostream>

using namespace std;

int n,m;
long long arr[10000001];

bool possible(long long h){
    long long sum=0;
    for (int i=0;i<n;i++){
        if (arr[i] > h){
            sum += (arr[i]-h);
        }
    }
    if (sum >= m) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long low = 0;
    long long high = 0;
    long long result = 0;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        cin >> arr[i];
        high = max(high,arr[i]);
    }
    while(low<=high){
        long long mid = (low+high)/2;
        if (possible(mid)){
            result = max(result,mid);
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout << result;
    return 0;
}
