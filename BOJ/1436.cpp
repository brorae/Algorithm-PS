#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int Find(int x){
    int number = 666;
    int count = 0;
    while(1){
        string str = to_string(number);
        for(int j=0;j<str.length()-2;j++){
            if (str[j] == '6' && str[j+1] == '6' && str[j+2]=='6'){
                count++;
                if (count == x)
                    return number;
                break;
            }  
        }
        number++;
    }
}

int main(){
    int n;
    cin >> n;
    cout << Find(n);
}