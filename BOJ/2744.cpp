#include<iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    for (int i=0;i<str.length();i++){
        if (str[i] >= 'a' && str[i] <= 'z')
            cout << (char)(str[i] + ('A'-'a'));
        else
            cout << (char)(str[i] - ('A'-'a'));
    }
    return 0;
}