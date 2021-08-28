#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int min = 50;
    int aLength = a.length();
    int bLength = b.length();
    int sub = bLength-aLength;
    for (int i=0;i<=sub;i++){
        int count = 0;
        for (int j=0;j<aLength;j++){
            if(a[j] != b[j+i]) count ++;
        }
        if (count < min) min = count;
    }
    cout << min;
    return 0;
}
// adaabc
// ababbc