#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    if (m==1) m=2;
    for (int i=m;i<=n;i++){
        int count = 0;
        for (int j=2;j<int(sqrt(i))+1;j++){
            if (i%j == 0){
                count++;
                break;
            }
        }
        if (count == 0){
            cout << i << "\n";
        }
    }
    return 0;
}