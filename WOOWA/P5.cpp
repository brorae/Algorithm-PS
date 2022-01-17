#include<iostream>
#include<string>

using namespace std;

int solution(int x){
    int count = 0;
    for (int i=1;i<=x;i++){
        string number = to_string(i);
        for(int j=0;j<number.size();j++){
            if (number[j] == '3' || number[j] == '6' || number[j] == '9'){
                count ++;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    cout << solution(n);
}