#include <iostream>
#include <cmath>

using namespace std;

bool sosu(int a){
    int b = (int)(sqrt(a))+1;
    int count = 0;
    for (int i=2;i<b;i++)
        if (a % i == 0)
            return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        int count = 0;
        for (int i=2;i<=num/2;i++){ //500000
            if (sosu(i) && sosu(num-i)){
                count++;
            }
        }
        cout << count<< "\n";
    }
    return 0;
}