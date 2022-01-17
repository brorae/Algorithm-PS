#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string str;
    cin >> str;
    int len = str.length();
    if (len % 3 == 1){
        cout << str[0];
        str = str.substr(1);
    }    
    if (len % 3 == 2){
        cout << (int(str[0])-'0')*2 + (int(str[1])-'0');
        str = str.substr(2);
    }
    len = str.length();
    if (len % 3 == 0){
        for (int i=0;i<len;i+=3){
            cout << int(str[i]-'0')*4 + int(str[i+1]-'0')*2 + int(str[i+2]-'0');
        }
    }
    return 0;
}