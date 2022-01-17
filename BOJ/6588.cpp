#include<iostream>
#include<cmath>
using namespace std;

int sosu(int x){
    if (x < 2) return 0;
    int a = (int)sqrt(x);
    for(int i=2;i<=a;i++)
        if (x % i == 0) return 0;
    return 1;
}

string solution(int x){
    string result="";
    for (int i=3;i<500;i+=2){
        if (sosu(x-i) && sosu(i)){
            result += to_string(x) + " = " + to_string(i) + " + " + to_string(x-i);
            return result;
        }
    }
    return "Goldbach's conjecture is wrong.";
}

int main(){
    cin.tie(0);
    for (int i=0;i<1000000;i++){
        int n;
        cin >> n;
        if (n == 0) break;
        cout << solution(n) << "\n";
    }
    return 0;
}