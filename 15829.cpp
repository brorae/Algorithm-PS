#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int l;
    string str;
    cin >> l >> str;
    long long sum = 0;
    long long temp = 1;
    for (int i=0;i<l;i++){
        sum += ((int(str[i]-'a'+1) * temp)  % 1234567891);
        temp *= 31;
        temp %= 1234567891;
    }
    cout << sum % 1234567891;
    return 0;
}