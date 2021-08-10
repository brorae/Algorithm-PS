#include<iostream>
#include<string>

using namespace std;

int solution(int x){
    // string result = "";
    // for (int i=1;i<=x;i++){
    //     result += to_string(i);
    // }
    // return result.length();
    if (x < 10)
        return x;
    if (x < 100)
        return (x-9)*2 + solution(9);
    if (x < 1000)
        return (x-99)*3 + solution(99);
    if (x < 10000)
        return (x-999)*4 + solution(999);
    if (x < 100000)
        return (x-9999)*5 + solution(9999);
    if (x < 1000000)
        return (x-99999)*6 + solution(99999);
    if (x < 10000000)
        return (x-999999)*7 + solution(999999);
    if (x < 100000000)
        return (x-9999999)*8 + solution(9999999);
    if (x = 100000000)
        return 9 + solution(99999999);
    return 0;
}

int main(){
    int n;
    cin >> n;
    cout << solution(n);
    return 0;
}