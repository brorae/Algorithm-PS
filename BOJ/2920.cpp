#include<iostream>

using namespace std;

int arr[9];

int main(){
    for(int i=1;i<=8;i++){
        cin >> arr[i];
    }
    int ascCnt = 0;
    int DescCnt = 0;
    for(int i=1;i<=8;i++){
        if (arr[i] == i) ascCnt++;
        else if (arr[i] == 9-i) DescCnt++;
    }
    if (ascCnt == 8) cout << "ascending";
    else if (DescCnt == 8) cout << "descending";
    else cout << "mixed";
    return 0;
}