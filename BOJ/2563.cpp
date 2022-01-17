#include<iostream>
#include<vector>

using namespace std;

int arr[101][101];

int main(){
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        for (int i=a;i<a+10;i++){
            for (int j=b;j<b+10;j++){
                arr[i][j] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i=0;i<100;i++){
        for (int j=0;j<100;j++){
            if (arr[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}