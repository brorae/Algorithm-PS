#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main(){
    vector<int> vec;
    int dec = 0;
    int a,b,m;
    cin >> a >> b;
    cin >> m;
    for (int i=m;i>0;i--){
        int k;
        cin >> k;
        dec += pow(a,i-1) * k;   
    }
    
    while(dec!=0){
        vec.push_back(dec % b);
        dec = dec/b;
    }
    int size=vec.size();
    for (int i=size-1;i>=0;i--){
        cout << vec[i] << " ";
    }
    return 0;
}