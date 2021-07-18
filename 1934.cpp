#include<iostream>

using namespace std;

int main(){
    int n,a,b,num,min;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if (a<b) num = a;
        else num = b;
        for (int i=1;i<=num;i++){
            if (a % i == 0 && b % i == 0){
                min = i;
            }
        }
        cout << min*(a/min)*(b/min) << "\n";
    }
    return 0;
}