#include<iostream>
#include<string>

using namespace std;

int main(){
    int arr[26] = {0, };
    string str;
    int index;
    cin >> str;
    for (int i=0;i<str.length();i++){
        index = str[i] - 'a';
        arr[index] += 1;
    }
    for (int i=0;i<26;i++)
        cout << arr[i] << " ";
    return 0;
}