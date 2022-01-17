#include<iostream>

using namespace std;

int main(){
    int n,a,count=0;
    cin >> n;
    while(n--){
        int sub=0;
        cin >> a;
        for (int i=1;i<=a;i++){
            if (a%i == 0){
                sub++;
            }
        }
        if (sub == 2){
            count++;
        }
    }
    cout << count;
    return 0;
}