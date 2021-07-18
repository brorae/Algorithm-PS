#include<iostream>

using namespace std;

int main(){
    int a,b,num,min,max;
    cin >> a >> b;
    if (a < b) num = a;
    else num = b;
    for (int i=1;i<=num;i++){
        if (a % i == 0 && b % i == 0){
            min = i;
        }
    }
    max=(a/min)*(b/min)*min;
    cout << min << "\n";
    cout << max;
    return 0;
}