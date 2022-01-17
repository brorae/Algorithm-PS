#include<iostream>

using namespace std;

bool palindrome(string a){
    int len = a.length(); //4
    int index = len/2; //2
    int cnt = 0;
    for (int i=0;i<index;i++){
        if(a[i] == a[len-i-1]) cnt++;
    }
    return cnt == index;
}

int main(){
    while(1){
        string num;
        cin >> num;
        if (num == "0") break;
        if (palindrome(num)) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}