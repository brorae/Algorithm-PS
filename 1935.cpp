#include<iostream>
#include<string>


using namespace std;

int main(){
    int n;
    int arr[26];
    string str;
    cin >> n >> str;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        // cin.ignore();
        arr[i] = a;
    }
}