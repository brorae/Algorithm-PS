#include<iostream>

using namespace std;

int fac(int n){
    if (n == 0 || n == 1) return 1;
    else return n*fac(n-1);
}

int main(){
    int a;
    cin >> a;
    cout << fac(a);
    return 0;
}