#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000001]={0,};

int dp(int x){
    arr[2] = 1;
    arr[3] = 1;
    for (int i=4;i<=x;i++){
        if (i % 2 == 0 && i % 3 == 0)
            arr[i] = min({arr[i-1],arr[i/2],arr[i/3]}) + 1;
        if (i % 2 == 0 && i % 3 != 0)
            arr[i] = min(arr[i-1],arr[i/2]) + 1;
        if (i % 2 != 0 && i % 3 == 0)
            arr[i] = min(arr[i-1],arr[i/3]) + 1;
        if (i % 2 != 0 && i % 3 != 0)   
            arr[i] = arr[i-1] + 1;
    }
    return arr[x];
}

int main(){
    int n;
    cin >> n;
    cout << dp(n);
    return 0;
}

//min,max 함수 인자 2개!
//인자 3개 받으려면 { } 배열에 담아줘서 써야함