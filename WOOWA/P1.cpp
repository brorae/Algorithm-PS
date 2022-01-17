#include<iostream>

using namespace std;

int arr[9];
//5만, 1만, 5천, 1천, 500, 100, 50, 10, 1
int *solution(int money){
    while(money != 0){
        if( money >= 50000){
            arr[0] = money/50000;
            money %= 50000;
        }
        else if (money >= 10000) {
            arr[1] = money/10000;
            money %= 10000;
        }
        else if (money >= 5000){
            arr[2] = money/5000;
            money %= 5000;
        }
        else if (money >= 1000){
            arr[3] = money/1000;
            money %= 1000;
        }
        else if (money >= 500){
            arr[4] = money/500;
            money %= 500;
        }
        else if (money >= 100){
            arr[5] = money/100;
            money %= 100;
        } 
        else if (money >= 50){
            arr[6] = money/50;
            money %= 50;
        }
        else if (money >= 10){
            arr[7] = money/10;
            money %= 10;
        }
        else if (money >= 1) {
            arr[8] = money/1;
            money %= 1;
        }
    }
    return arr;
}

int main(){
    int money;
    cin >> money;
    int *ptr = solution(money);
    cout << "[";
    for(int i=0;i<9;i++){
        cout << ptr[i];
        if(i!=8){
            cout << ", ";
        }
    }
    cout << "]";
}