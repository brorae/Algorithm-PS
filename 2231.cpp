#include<iostream>

using namespace std;

int sum(int x){
    int value = x;
    int sum = 0;
    while(x!=0){
        sum += x % 10;
        x = x/10;
    }
    return sum + value;
}

int main(){
    int n;
    int result=0;
    cin >> n;
    for(int i=1;i<=1000000;i++){
        if (n == sum(i)){
            result = i;
            break;
        }
    }
    cout << result;
    return 0;
}