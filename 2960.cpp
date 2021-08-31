#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,k;
    int arr[1001];
    cin >> n >> k;
    for (int i=2;i<=n;i++){
        arr[i] = i;
    }
    int count = 0;
    for (int i=2;i<=n;i++){
        for (int j=1;i*j<=n;j++){
            if (arr[i*j]== -1)
                continue;
            arr[i*j] = -1;
            count++;
            if (k == count){
            cout << i*j;
            return 0;
        }
        }
        
    }
    return 0;
}//2 3 4 5 6 7 8 9 10