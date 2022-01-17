#include<iostream>

using namespace std;

int main(){
    string str;
    int n;
    int count = 0;
    cin >> str >> n;
    while(n--){
        string input;      
        cin >> input;
        input = input + input;
        // for(int i=0;i<=20-str.size();i++){
        //     if(input.substr(i,str.size()) == str){
        //         count++;
        //         break;
        //     }
        // }
        if (input.find(str) != -1)
            count++;
    }
    cout << count;
    return 0;
}