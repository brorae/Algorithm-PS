#include<iostream>

using namespace std;

int arr[501][501];
int n, m;

int sol1(){
    int max = -1;
    for (int i=0;i<n;i++){
        int sum = 0;
        for (int j=0;j<=m-4;j++){
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i][j+3];
        }
        if (sum > max) max = sum;
    }
    for (int i=0;i<=n-4;i++){
        int sum = 0;
        for (int j=0;j<m;j++){
            sum = arr[j][i] + arr[j+1][i] + arr[j+2][i] + arr[j+3][i];
        }
        if (sum > max) max = sum;
    }
    return max;
}

int sol2(){
    int max = -1;
    for (int i=0;i<n-1;i++){
        int sum = 0;
        for (int j=0;j<m-1;j++){
            sum = arr[i][j] + arr[i+1][j] + arr[i][j+1] + arr[i+1][j+1];
        }
    }
    if (sum > max) max = sum;
    return max;
}

int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int k;
            cin >> k;
            arr[i][j] = k;
        }
    }
    cout << sol1();
}