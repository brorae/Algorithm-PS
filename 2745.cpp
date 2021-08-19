#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
    string n;
    int b;
    int sum = 0;
    cin >> n >> b;
    int len = n.length();
    for (int i=0;i<len;i++){
        if (int(n[i]) < 58)
            sum += int(n[i]-'0') * int(pow(b,len-1-i));
        else
            sum += int(n[i]-55) * int(pow(b,len-1-i));
    }
    cout << sum << "\n";
    return 0;
}

// '1' : 49
// '9' : 57
// 'A' : 65