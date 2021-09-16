#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int arr[7];
    int sum = 0;
    for (int i=0;i<5;i++){
        cin >> arr[i];
        sum += pow(arr[i],2);
    }
    arr[5] = sum % 10;
    cout << arr[5];
    return 0;
}