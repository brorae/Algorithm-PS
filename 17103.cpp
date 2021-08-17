#include<iostream>
#include<cmath>

using namespace std;

int arr[1000001] = {0,};


bool sosu(int a){
    if (a < 2) return false;
    int b =(int)(sqrt(a))+1;
    for(int i=2;i<b;i++)
        if(a%i == 0)
            return false;
    return true;
}

void sol(){
    for (int i=2;i<=1000000;i++){ //100¸¸
        if(sosu(i)){
            
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sol();
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        int count = 0;
        for (int i=0;i<v.size();i++){
            if (v[i] > num) break;
            if(sosu(num - v[i]))
                count ++;
        }
        if (count % 2 == 0)
            count /= 2;
        else
            count = count/2 + 1;
        cout << count << "\n";
    }
    return 0;

}