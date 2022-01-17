#include<iostream>
#include<algorithm>

using namespace std;

int arr[51][51];

int main(){
    int n,m;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        string a;
        cin >> a;
        for (int j=0;j<m;j++){
            arr[i][j] = a[j]-'0';
        }
    }
    int ans = 1;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            for (int k=1;k<min(n,m);k++){
                if (i+k<n && j+k<m && arr[i][j] == arr[i][j+k] && arr[i][j] == arr[i+k][j] && arr[i][j] == arr[i+k][j+k]){
                    ans = max(ans,k+1);
                }
            }
        }
    }
    cout << ans * ans << "\n";
    return 0;
}