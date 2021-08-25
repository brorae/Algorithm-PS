#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        int result;
        cin >> a >> b;
        if (b%4 == 0){
            b = (b+3) % 4 + 1;
        }
        else{
            b = b % 4;
        }
        result = pow(a,b);
        result %= 10;
        if (result == 0){
            result = 10;
        }
        cout << result << "\n";
    }
    return 0;
}

// 2 4 8 16 32 64 128 256 612 i = i+4
// 3 9 27 81 243 i = i+4
// 4 16 64 256 i = i+2
// 5 25 125 625
// 6 36 216
// 7 49 343 2401 16807 117649 i = i+4
// 8 64 512 4096 32768 i = i+4
// 9 81 729 6561 59049 i = i+4