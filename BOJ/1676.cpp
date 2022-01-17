#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int two = 0, five = 0;
    cin >> n;
    for (int i=1;i<=n;i++){
        int tmp = i;
        while(1){
            if (tmp % 2 == 0){
                two++;
                tmp /= 2;
            }    
            else if (tmp % 5 == 0){
                five++;
                tmp /= 5;
            }
            else
                break;
        }
    }
    cout << min(two,five);
    return 0;
}